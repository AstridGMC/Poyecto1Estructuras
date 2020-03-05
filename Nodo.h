
#include "Carta.hpp"

class Nodo {
public:
    Nodo();
    Nodo(const Nodo& orig);
    void setSiguiente(Nodo s);
    void setAnterior(Nodo a);
    Carta *dato;
    Nodo getSiguiente();
    Nodo getAnterior();
    Nodo *siguiente;
    Nodo *anterior;
    virtual ~Nodo();
};