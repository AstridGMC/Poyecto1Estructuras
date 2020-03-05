
#include "Menu.hpp"
#include <iostream>
using namespace std;

Menu::Menu() {
}

Menu::Menu(const Menu& orig) {
}
 
Menu::~Menu() {
}

void Menu::MenuPrincipal(){
    cout<<"-------BIENVENIDO JUGADOR---------\n";
    cout<<"\n";
    cout << "presione cualquier tecla para iniciar un nuevo juego\n";
    int opcion; 
     cin>> opcion;

    switch(opcion){
        default:// Iniciar Juego 
            cout << "   Has elegido Iniciar un nuevo juego\n";
            Tablero tab =  Tablero();
            //tab.imprimirCartasInicio();
            MenuJugador();
            break;
        
    }
}

void Menu:: MenuJugador(){
     cout<<"        1. Mover Carta\n";
     cout<<"        2. Mostrar Carta\n";
     cout<<"        cualquier tecla volver al Menu Principal\n";
     int opcion;
     cin >> opcion;
       switch(opcion){
        case 1:// Mover Carta
            cout<<"Que tipo de Carta deseas Mover?";
                MenuMoverCarta();
            break;
        case 2://Mostrar Carta
            break;
        case 3://Menu Principal
            break;
    }
}

void Menu:: MenuMoverCarta(){
    cout<<" \n";
    cout<<"        1. Corazones Rojos\n";
    cout<<"        2. Treboles Negros\n";
    cout<<"        3. Diamantes Rojos\n";
    cout<<"        4. Espadas Negras\n";
    int opcion;
    cin>> opcion;
    switch(opcion){
        case 1://Corazones
            cout<<"......♥ has elegido Corazones Rojos ♥.......\n";
            MenuMoverNumeroCarta((char*) "corazones");
            break;
        case 2://Treboles
            cout<<"..........♣ Treboles Negros ♣.......\n";
            MenuMoverNumeroCarta((char*)"treboles");
            break;
        case 3://Diamantes
            cout<<"........♦ Diamantes Rojos ♦ ........\n";
            MenuMoverNumeroCarta((char*)"diamantes");
            break;
        case 4://Espadas
            cout<<"......♠ Espadas Negras ♠ .......\n";
            MenuMoverNumeroCarta((char*)"espadas");
            break;
    }
}

void Menu:: MenuMoverNumeroCarta(char*  tipo){
    int opcion=0;
    cout << "Escriba el Numero de Carta que desea mover  \n";
    cout<<"Las cartas son del  2-9 de "<< tipo <<"\n";
    cout<<"     10 = A  de  "<< tipo <<"\n";
    cout<<"     11 = j   de "<< tipo <<"\n";
    cout<<"     12 = Q   de "<< tipo <<"\n";
    cout<<"     13 = k   de "<< tipo <<"\n";
    cin >> opcion;
    if(opcion<=9 && opcion>1){

    }if(opcion>9 && opcion <=13){
        cout<<"Ha elegido la carta "<<opcion<<" de "<<tipo;
    }else if ( opcion >13){
        cout<<"Estas cartas No Existen dentro de la Baraja\n";
        cout<<"inserte de Nuevo la carta\n\n";
        int opcion=0;
        MenuMoverNumeroCarta(tipo);
    }
}