#ifndef TABLERO
#define TABLERO
#include "Estructuras/Cola.h"
#include "Estructuras/ListaDoblementeEnlazada.h"
#include "Carta.h"
class Tablero{
    public:
        void inicioJuego();
    private:
    void imprimirCartasInicio();
    Cola colaIzquierda =  Cola();
    Cola colaDerecha = Cola();
    ListaDoblementeEnlazada L1 = ListaDoblementeEnlazada();
    ListaDoblementeEnlazada L2 = ListaDoblementeEnlazada();
    ListaDoblementeEnlazada L3 = ListaDoblementeEnlazada();
    ListaDoblementeEnlazada L4 = ListaDoblementeEnlazada();
    ListaDoblementeEnlazada L5 = ListaDoblementeEnlazada();
    ListaDoblementeEnlazada L6 = ListaDoblementeEnlazada();
    ListaDoblementeEnlazada L7 = ListaDoblementeEnlazada();
    ListaDoblementeEnlazada L8 = ListaDoblementeEnlazada();
    ListaDoblementeEnlazada L9 = ListaDoblementeEnlazada();
};
#endif
