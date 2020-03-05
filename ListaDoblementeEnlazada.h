#ifndef LISTADOBLEMENTEENLAZADA_H
#define LISTADOBLEMENTEENLAZADA_H

#include "Nodo.h"
#include "Carta.hpp"
class Nodo;
class Carta;

class ListaDoblementeEnlazada
{
public:
    Nodo* obtenerHeader();
    Nodo* ObtenerPrimerNodo();
    ListaDoblementeEnlazada();
    ListaDoblementeEnlazada(const ListaDoblementeEnlazada& orig);
    virtual ~ListaDoblementeEnlazada();
    Nodo* ObtenerSiguiente(Nodo *nodo);
    Carta ObtenerFrente() ;
    Carta ObtenerUltimo();
    void InsertarNodoFrente(Carta carta);
    void InsertarAtras(Carta carta);
    void removerPrimero();
    void removerUltimo();
    void imprimirAlReverso();
    void ImprimirValores( int, Carta carta) ;
    bool estaVacia();
private:
    Nodo *header;
    Nodo *trailer;
};

#endif