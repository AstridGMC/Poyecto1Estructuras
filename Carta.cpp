#include "Carta.hpp"
#include "iostream"
#include "ListaDoblementeEnlazada.h"
#include "Cola.h"
using namespace std;

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
Carta :: Carta(char col[], char ident[], char tip[], char val, bool vol){
    color[2] = col[2];
    identificador[2]= ident[2];
    tipo[10]= tip[10];
    valor= val;
    volteada = vol;
}

Carta Carta:: GenerarCartaCorazones(Carta baraja[13] ){
    int i;
    Carta cartak =   Carta("R", corazon,  "corazones",'K',false);
    Carta cartaQ =   Carta("R", corazon ,"corazones",'J',false);
    Carta cartaJ =   Carta("R", corazon ,"corazones",'Q', false);
    Carta cartaAs =   Carta("R", corazon ,"corazones",'A', false);
    baraja[0]= cartak;
    baraja[1]= cartaQ;
    baraja[2]= cartaJ;
    for(i=3; i<=11; i++){
        Carta cartaA =  Carta("R", corazon ,"corazones", char(i-1), false);
        baraja[i]=cartaA;
    }
    baraja[12]= cartaAs;
}

Carta Carta:: GenerarCartaTreboles(Carta baraja[13] ){
    int i;
    Carta cartak =  Carta("N", trebol,  "treboles",'K',false);
    Carta cartaQ =  Carta("N", trebol ,"treboles",'J',false);
    Carta cartaJ =  Carta("N", trebol ,"treboles",'Q',false);
    Carta cartaAs = Carta("N", trebol ,"treboles",'A',false);
    baraja[0]= cartak;
    baraja[1]= cartaQ;
    baraja[2]= cartaJ;
    for(i=2; i<=11; i++){
        Carta cartaA = Carta("N", trebol ,"treboles", char(i),false);
        baraja[i]=cartaA;
    }
    baraja[12]= cartaAs;
}

Carta Carta:: GenerarCartaEspada(Carta baraja[13] ){
    int i;
    Carta cartak =  Carta("N", espada,  "treboles",'K',false);
    Carta cartaQ =  Carta("N", espada ,"treboles",'J',false);
    Carta cartaJ =  Carta("N", espada ,"treboles",'Q',false);
    Carta cartaAs =  Carta("N", espada ,"treboles",'A',false);
    baraja[0]= cartak;
    baraja[1]= cartaQ;
    baraja[2]= cartaJ;
    for(i=2; i<=11; i++){
        Carta cartaA = Carta("N", espada ,"treboles", char(i),false);
        baraja[i]=cartaA;
    }
    baraja[12]= cartaAs;
}
Carta Carta:: GenerarCartaDiamante(Carta baraja[13]){
    int i;
    Carta cartak =  Carta("R", diamante,  "diamante",'K',false);
    Carta cartaQ =  Carta("R", diamante ,"diamante",'J',false);
    Carta cartaJ =  Carta("R", diamante ,"diamante",'Q',false);
    Carta cartaAs = Carta("R", diamante ,"diamante",'A',false);
    baraja[0]= cartak;
    baraja[1]= cartaQ;
    baraja[2]= cartaJ;
    for(i=2; i<=11; i++){
        Carta cartaA =  Carta("R", diamante ,"treboles", char(i), false);
        baraja[i]=cartaA;
    }
    baraja[12]= cartaAs;
}
void Carta :: ImprmirCarta(Cola colaIzquerda, Cola colaDerecha, ListaDoblementeEnlazada L1, ListaDoblementeEnlazada L2, ListaDoblementeEnlazada L3,
                        ListaDoblementeEnlazada L4, ListaDoblementeEnlazada L5, ListaDoblementeEnlazada L6, ListaDoblementeEnlazada L7){

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 13; j++) {
            cout << "---------  ";
        }
        cout << "\n";
        for (int j = 0; j < 13; j++) {
            if(j==0){
                Carta carta = colaIzquerda.obtenerPrimero->dato;
                cout << "|" << carta.getIdentificador << "      |  ";
            }else if(j==1){
                if(colaDerecha.colaVacia){
                    cout << "|" << " " << "      |  ";
                }else{
                    Carta carta = colaIzquerda.obtenerPrimero->dato;
                    cout << "|" << carta.valor << "      |  ";
                }
            }else if(j=2){
                L2.ObtenerFrente.ImprimirValores(1);
            }else if(j=3){
                L3.ObtenerFrente.ImprimirValores(1);
            }else if(j=4){
                L4.ObtenerFrente.ImprimirValores(1);
            }else if(j=5){
                L5.ObtenerFrente.ImprimirValores(1);
            }else if(j=6){
                L6.ObtenerFrente.ImprimirValores(1);
            }else if(j=7){
                L7.ObtenerFrente.ImprimirValores(1);
            }else{
                cout << "|" << " " << "      |  ";
            }
        }
        cout << "\n";
        for (int k = 0; k < 13; k++) {
            if(k==0){
                cout << "|" << "xxx" << "    |  ";
            }else if(k==1){
                if(colaDerecha.colaVacia){
                    
                    cout << " " << "   " << "       ";
                }else{
                    Carta carta = colaDerecha.obtenerPrimero->dato;
                    cout << "|" << carta.identificador << "    |  ";
                }
            }else if(k=2){
                L2.ObtenerFrente.ImprimirValores(2);
            }else if(k=3){
                L3.ObtenerFrente.ImprimirValores(2);
            }else if(k=4){
                L4.ObtenerFrente.ImprimirValores(2);
            }else if(k=5){
                L5.ObtenerFrente.ImprimirValores(2);
            }else if(k=6){
                L6.ObtenerFrente.ImprimirValores(2);
            }else if(k=7){
                L7.ObtenerFrente.ImprimirValores(2);
            }else{
                cout << "|" << " " << "      |  ";
            }
        }cout << "\n";
        for (int l = 0; l < 13; l++) {
              if(l==0){
                cout << "|" << "xxx" << "    |  ";
            }else if(l==1){
                if(colaDerecha.colaVacia){
                    
                    cout << " " << "   " << "       ";
                }else{
                    Carta carta = colaDerecha.obtenerPrimero->dato;
                    cout << "|" << carta.identificador << "    |  ";
                }
            }else if(l=2){
                L2.ObtenerFrente.ImprimirValores(2);
            }else if(l=3){
                L3.ObtenerFrente.ImprimirValores(2);
            }else if(l=4){
                L4.ObtenerFrente.ImprimirValores(2);
            }else if(l=5){
                L5.ObtenerFrente.ImprimirValores(2);
            }else if(l=6){
                L6.ObtenerFrente.ImprimirValores(2);
            }else if(l=7){
                L7.ObtenerFrente.ImprimirValores(2);
            }else{
                cout << "|" << " " << "      |  ";
            }
        }cout << "\n";
        for (int k = 0; k < 13; k++) {
            cout << "---------  ";
        }cout << "\n";
    }
} 

