#include "Nodo.h"


Nodo::Nodo()
{

}

Nodo::Nodo(const Nodo& orig)
{
}

Carta dato = Carta();

/*
void Nodo::setSiguiente(Nodo s)
{
    siguiente = s;
}

void Nodo:: setAnterior(Nodo a)
{
    anterior = a;
}
*/

Nodo Nodo::  getSiguiente()
{
    return *siguiente;
}

Nodo Nodo :: getAnterior()
{
    return *anterior;
}

Nodo::~Nodo()
{
}