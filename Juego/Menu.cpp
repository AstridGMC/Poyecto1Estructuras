#include "Menu.hpp"
#include <iostream>
using namespace std;
 
Menu::Menu() {
}

Menu::Menu(const Menu& orig) {
}
 
Menu::~Menu() {
}

void Menu::MenuPrincipal(int i){
    cout<<"BIENVENIDO JUGADOR";
    cout << "presione cualquier tecla para iniciar un nuevo juego\n";
    int opcion; 
     cin>> opcion;

    switch(opcion){
        default:// Iniciar Juego 
            cout << "Has elegido Iniciar un nuevo juego";
            break;
        
    }
}

void Menu:: MenuJugador(int opcion){
       switch(opcion){
        case 1:// Mover Carta
            cout<<"Que tipo de Carta deseas Mover?";
            break;
        case 2://Mostrar Carta
            break;
        case 3://Menu Principal
            break;
    }
}

void Menu:: MenuMoverCarta(int opcion){
    switch(opcion){
        case 1://Corazones
            cout<<"Corazones Rojos";
            break;
        case 2://Treboles
            cout<<"Treboles Negros";
            break;
        case 3://Diamantes
            cout<<"Diamantes Rojos";
            break;
        case 4://Espadas
            cout<<"Espadas Negras";
            break;
    }
}

void Menu:: MenuMoverNumeroCarta(char tipo[10]){
    int opcion=0;
    cout << "Escriba el Numero de Carta que desea mover  ";
    cout<<"Las cartas son 2-9\n";
    cout<<"     10 = A   \n";
    cout<<"     11 = j   \n";
    cout<<"     12 = Q   \n";
    cout<<"     13 = k   \n";
    cin >> opcion;
    if(opcion<=9&& opcion>1){
    }if(opcion>9 && opcion <=13){
        cout<<"Ha elegido la carta "<<opcion<<" de "<<tipo;
    }else{
        cout<<"Estas cartas No Existen dentro de la Baraja\n";
        cout<<"inserte de Nuevo la carta\n\n";
        MenuMoverNumeroCarta(tipo);
    }
}

