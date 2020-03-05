#include "Nodo.h"
#include "Carta.hpp"

class ListaDoblementeEnlazada
{
public:
    Nodo* obtenerHeader();
    ListaDoblementeEnlazada();
    ListaDoblementeEnlazada(const ListaDoblementeEnlazada& orig);
    virtual ~ListaDoblementeEnlazada();
    Carta* ObtenerSiguiente(Nodo *nodo);
    Carta* ObtenerFrente() ;
    Carta* ObtenerUltimo();
    void InsertarNodoFrente(Carta *carta);
    void InsertarAtras(Carta *carta);
    void removerPrimero();
    void removerUltimo();
    void imprimirAlReverso();
    void ImprimirValores( int, Carta carta) ;
    bool estaVacia();
private:
    Nodo *header;
    Nodo *trailer;
};