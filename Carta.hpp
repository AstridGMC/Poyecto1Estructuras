#ifndef CARTA_HPP
#define CARTA_HPP
using namespace std;
#include "ListaDoblementeEnlazada.h"
 #include "Cola.h"
 #include <iostream>
 class Cola;

class Carta{
public:
    Carta();
    Carta(char, char[], char*,char,bool);
    void ImprmirCarta(Cola, Cola, ListaDoblementeEnlazada,ListaDoblementeEnlazada, ListaDoblementeEnlazada, ListaDoblementeEnlazada, ListaDoblementeEnlazada,ListaDoblementeEnlazada ,ListaDoblementeEnlazada);
    Carta GenerarCartaCorazones(Carta baraja[13]);
    Carta GenerarCartaTreboles(Carta baraja[13]);
    Carta GenerarCartaEspada(Carta baraja[13]);
    Carta GenerarCartaDiamante(Carta baraja[13]);
    void ImprimirValores(int);
    char* getIdentificador();
    char getValor();
    void setVolteada(bool valor);
    bool isVolteada();
    virtual ~Carta();
private:
    char corazon[4]="♥";
    char trebol[4]="♣";
    char espada[4]="♠";
    char diamante[4]="♦";
    char identificador[1];
    char valor;
    char color ;
    char* tipo;
    bool volteada;

};
#endif
