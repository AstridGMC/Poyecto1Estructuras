#include "../Cola.h"
#include "../Nodo.h"
#include "../Carta.hpp"
class Nodo;
class cola;
Cola::  Cola(){

}

bool Cola:: colaVacia(Nodo *frente){
    return (frente == nullptr)? true : false;
} 

void Cola::insertarCola(Nodo *&frente, Nodo *&final,Carta dt){
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo -> dato = dt;
    nuevoNodo->siguiente = nullptr;
    if(colaVacia(frente)){
        frente = nuevoNodo;
    }else{
        fin->siguiente = nuevoNodo;
    }
}

Carta Cola :: obtenerPrimero(){
    return frente->dato;
}

void Cola::sacarElementoCola(Nodo *&, Nodo *&, Carta dt){
    dt = frente ->dato;
    Nodo *auxiliar = frente;
    if(frente == fin){
        frente == nullptr;
        fin = nullptr;
    }else{
        frente = frente->siguiente;
    }
    delete auxiliar;
}




Cola::~Cola()
{
    while(frente != nullptr){
        sacarElementoCola(frente, fin, obtenerPrimero());
    }
    delete frente;
    delete fin;
}