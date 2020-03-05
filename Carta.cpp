#include "Carta.hpp"
#include "iostream"
#include "ListaDoblementeEnlazada.h"
#include "Cola.h"
#include "Nodo.h"

using namespace std;
class Nodo;
Carta :: Carta(){
}

char* Carta:: getIdentificador(){
    return identificador;
}

char Carta:: getValor(){
    return valor;
}
bool Carta:: isVolteada(){
    return volteada;
}

void Carta:: setVolteada(bool volt){
    volteada= volt;
}
Carta :: Carta(char col, char ident[], char* tip, char val, bool vol){
    color  = col ;
    identificador[2]= ident[2];
    tipo= tip;
    valor= val;
    volteada = vol;
}

Carta Carta:: GenerarCartaCorazones(Carta baraja[13] ){
    int i;
    Carta cartak =   Carta('R', corazon,  (char*)"corazones",'K', false );
    Carta cartaQ =   Carta('R', corazon ,(char*)"corazones",'J', false );
    Carta cartaJ =   Carta('R', corazon ,(char*)"corazones",'Q', false );
    Carta cartaAs =   Carta('R', corazon ,(char*)"corazones",'A', false);
    baraja[0]= cartak;
    baraja[1]= cartaQ;
    baraja[2]= cartaJ;
    for(i=3; i<=12; i++){
        Carta cartaA =  Carta('R', corazon ,(char *)"corazones", char(i-1), false);
        baraja[i]=cartaA;
    }
    baraja[13]= cartaAs;
}

Carta Carta:: GenerarCartaTreboles(Carta baraja[13] ){
    int i;
    Carta cartak =  Carta('N', trebol, (char*) "treboles",'K',false);
    Carta cartaQ =  Carta('N', trebol ,(char*) "treboles",'J',false);
    Carta cartaJ =  Carta('N', trebol ,(char*) "treboles",'Q',false);
    Carta cartaAs = Carta('N', trebol ,(char*) "treboles",'A',false);
    baraja[0]= cartak;
    baraja[1]= cartaQ;
    baraja[2]= cartaJ;
    for(i=3; i<=12; i++){
        Carta cartaA = Carta('N', trebol ,(char*) "treboles", char(i-1),false);
        baraja[i]=cartaA;
    }
    baraja[13]= cartaAs;
}

Carta Carta:: GenerarCartaEspada(Carta baraja[13] ){
    int i;
    Carta cartak =  Carta('N', espada, (char*)  "espada",'K',false);
    Carta cartaQ =  Carta('N', espada ,(char*) "espada",'J',false);
    Carta cartaJ =  Carta('N', espada ,(char*) "espada",'Q',false);
    Carta cartaAs =  Carta('N', espada ,(char*) "espada",'A',false);
    baraja[0]= cartak;
    baraja[1]= cartaQ;
    baraja[2]= cartaJ;
    for(i=2; i<=12; i++){
        Carta cartaA = Carta('N', espada ,(char*) "espada", char(i-1),false);
        baraja[i]=cartaA;
    }
    baraja[13]= cartaAs;
}
Carta Carta:: GenerarCartaDiamante(Carta baraja[13]){
    int i;
    Carta cartak =  Carta('R', diamante,  (char*)"diamante",'K',false);
    Carta cartaQ =  Carta('R', diamante ,(char*) "diamante",'J',false);
    Carta cartaJ =  Carta('R', diamante ,(char*) "diamante",'Q',false);
    Carta cartaAs = Carta('R', diamante ,(char*) "diamante",'A',false);
    baraja[0]= cartak;
    baraja[1]= cartaQ;
    baraja[2]= cartaJ;
    for(i=2; i<=12; i++){
        Carta cartaA =  Carta('R', diamante , (char*)  "diamante", char(i-1), false);
        baraja[i]=cartaA;
    }
    baraja[13]= cartaAs;
}
Nodo *aux1;
Nodo *aux2;
Nodo *aux3;
Nodo *aux4;
Nodo *aux5;
Nodo *aux6;
Carta carta;
void Carta :: ImprmirCarta(Cola colaIzquerda, Cola colaDerecha, ListaDoblementeEnlazada L1, ListaDoblementeEnlazada L2, ListaDoblementeEnlazada L3,
                        ListaDoblementeEnlazada L4, ListaDoblementeEnlazada L5, ListaDoblementeEnlazada L6, ListaDoblementeEnlazada L7){
    Nodo *nodo = new Nodo();
    for (int i = 0; i < 15; i++) {
        if(i=0){        
             carta = colaIzquerda.obtenerPrimero();
            if(!colaDerecha.colaVacia(nodo)){
                carta = colaIzquerda.obtenerPrimero();
            }
            aux1= L2.ObtenerPrimerNodo();
            aux2 =L3.ObtenerPrimerNodo();
            aux3=L4.ObtenerPrimerNodo();
            aux4 = L5.ObtenerPrimerNodo();
            aux5= L6.ObtenerPrimerNodo();
            aux6= L7.ObtenerPrimerNodo();
        }else{
            aux1= L2.ObtenerSiguiente(aux1);
            aux2 =L3.ObtenerSiguiente(aux2);
            aux3=L4.ObtenerSiguiente(aux3);
            aux4 = L5.ObtenerSiguiente(aux4);
            aux5= L6.ObtenerSiguiente(aux5);
            aux6= L7.ObtenerSiguiente(aux6);
        }
        for (int j = 0; j < 13; j++) {
            cout << "---------  ";
        }
        cout << "\n";
        for (int j = 0; j < 13; j++) {
            if(j==0){
                cout << "|" << carta.getIdentificador() << "      |  ";
            }else if(j==1){
                if(colaDerecha.colaVacia(nodo)){
                    cout << "|" << " " << "      |  ";
                }else{
                    cout << "|" << carta.valor << "      |  ";
                }
            }else if(j=2){
                aux1->dato.ImprimirValores(1);
            }else if(j=3){
                 aux2->dato.ImprimirValores(1);
            }else if(j=4){
                 aux3->dato.ImprimirValores(1);
            }else if(j=5){
                L5.ObtenerFrente().ImprimirValores(1);
            }else if(j=6){
                 aux5->dato.ImprimirValores(1);
            }else if(j=7){
                aux6->dato.ImprimirValores(1);
            }else{
                cout << "|" << " " << "      |  ";
            }
        }
        cout << "\n";
        for (int k = 0; k < 13; k++) {
            if(k==0){
                cout << "|" << "xxx" << "    |  ";
            }else if(k==1){
                if(colaDerecha.colaVacia(nodo)){
                    
                    cout << " " << "   " << "       ";
                }else{
                    Carta carta = colaDerecha.obtenerPrimero();
                    cout << "|" << carta.identificador << "    |  ";
                }
            }else if(k=2){
                aux1->dato.ImprimirValores(1);
            }else if(k=3){
               aux2->dato.ImprimirValores(2);
            }else if(k=4){
                aux3->dato.ImprimirValores(2);
            }else if(k=5){
                aux4->dato.ImprimirValores(2);
            }else if(k=6){
                aux5->dato.ImprimirValores(2);
            }else if(k=7){
                aux6->dato.ImprimirValores(2);
            }else{
                cout << "|" << " " << "      |  ";
            }
        }cout << "\n";
        for (int l = 0; l < 13; l++) {
              if(l==0){
                cout << "|" << "xxx" << "    |  ";
            }else if(l==1){
                if(colaDerecha.colaVacia(nodo)){
                    
                    cout << " " << "   " << "       ";
                }else{
                    Carta carta = colaDerecha.obtenerPrimero();
                    cout << "|" << carta.identificador << "    |  ";
                }
            }else if(l=2){
                aux1->dato.ImprimirValores(1);
            }else if(l=3){
                aux2->dato.ImprimirValores(1);
            }else if(l=4){
                aux3->dato.ImprimirValores(1);
            }else if(l=5){
                aux4->dato.ImprimirValores(1);
            }else if(l=6){
                aux5->dato.ImprimirValores(1);
            }else if(l=7){
               aux6->dato.ImprimirValores(1);
            }else{
                cout << "|" << " " << "      |  ";
            }
        }cout << "\n";
        for (int k = 0; k < 13; k++) {
            cout << "---------  ";
        }cout << "\n";
    }
 }
void Carta :: ImprimirValores(int tipoDato) {
    if(tipoDato = 1){
        //Carta aux = ObtenerSiguiente(siguiente);
            if(volteada){
                cout << "|" << valor << "    |  ";
            }else
            {
                cout << "|" << "xxx" << "    |  ";
            }
        }else if(tipoDato = 2){
            if(volteada){
                cout << "|" << identificador << "    |  ";
            }else
            {
                cout << "|" << "xxx" << "    |  ";
            }
            cout << "|" << identificador << "    |  ";
        }else{
            cout << " " << " " << "       ";
        }
}
Carta::~Carta() {
    
}


