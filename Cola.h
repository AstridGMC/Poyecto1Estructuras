#ifndef COLA_H
#define COLA_H
#include "Nodo.h"
#include "Carta.hpp"
class Cola {
    public:
        Cola();
        void insertarCola(Nodo *&, Nodo *&, Carta dato);
        bool colaVacia(Nodo *);
        void sacarElementoCola(Nodo *&, Nodo *&, Carta dato);
        Carta obtenerPrimero();
        ~Cola();
    private:
        Nodo *frente;
        Nodo *fin;
};
#endif