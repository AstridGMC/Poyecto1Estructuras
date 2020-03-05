
#include "Nodo.h"

class Pila {
public:
    Pila();
    Pila(const Pila& orig);
    void AgregarNodosPila(Nodo *&pila, Carta n);
    void SacarNodoPila(Nodo *&pila, Carta &n);
    virtual ~Pila();
private:
};

void Pila :: AgregarNodosPila(Nodo *&pila, Carta n){
    
    int dato;
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = n;
    nuevoNodo->siguiente = pila ;
    pila = nuevoNodo;
}

void Pila::SacarNodoPila(Nodo *&pila, Carta &n){
    Nodo *aux =pila;
    n= aux-> dato;
    pila = aux -> siguiente;
    delete aux;
}


Pila::Pila() {
}

Pila::Pila(const Pila& orig) {
}

Pila::~Pila() {
}

void AgregarNodosPila(Nodo *&pila, Carta n){
    int dato;
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = n;
    nuevoNodo->siguiente = pila ;
    pila = nuevoNodo;
}

void SacarNodoPila(Nodo *&pila, Carta &n){
    Nodo *aux =pila;
    n= aux-> dato;
    pila = aux -> siguiente;
    delete aux;
}
