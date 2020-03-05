#ifndef NODO_H
#define NODO_H
#include "Carta.hpp"
class Carta;

class Nodo {
public:
    Nodo();
    Nodo(const Nodo& orig);
    void setSiguiente(Nodo s);
    void setAnterior(Nodo a);
    static Carta dato;
    Nodo getSiguiente();
    Nodo getAnterior();
    Nodo *siguiente;
    Nodo *anterior;
    virtual ~Nodo();
};
#endif