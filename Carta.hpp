#ifndef CARTA_H
#define CARTA_H
#include "ListaDoblementeEnlazada.h"
 #include "Cola.h"
class Carta{
public:
    Carta();
    Carta(char[], char[], char[],char,bool);
    Carta(const Carta& orig);
    void ImprmirCarta(Cola, Cola, ListaDoblementeEnlazada,ListaDoblementeEnlazada, ListaDoblementeEnlazada, ListaDoblementeEnlazada, ListaDoblementeEnlazada,ListaDoblementeEnlazada ,ListaDoblementeEnlazada);
    Carta GenerarCartaCorazones(Carta baraja[13]);
    Carta GenerarCartaTreboles(Carta baraja[13]);
    Carta GenerarCartaEspada(Carta baraja[13]);
    Carta GenerarCartaDiamante(Carta baraja[13]);
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
    char color[];
    char tipo[];
    bool volteada;
    friend class /Estructuras/ListaDoblementeEnlazada;
};
#endif
