#include "../Nodo.h"
#include "iostream"
using namespace std;
#include "../ListaDoblementeEnlazada.h"


ListaDoblementeEnlazada::ListaDoblementeEnlazada()
{
    header = new Nodo();
    trailer = new Nodo();
    header->siguiente = trailer;
    trailer->anterior = header;
    header->anterior = nullptr;
    trailer->siguiente = nullptr;
    
    
}


Carta ListaDoblementeEnlazada:: ObtenerSiguiente(Nodo *nodo){
    return nodo->siguiente->dato;
}

Carta ListaDoblementeEnlazada::ObtenerFrente()
{
    //aux = header->siguiente;
    return header->siguiente->dato;
}

Carta ListaDoblementeEnlazada:: ObtenerUltimo()
{
    return trailer->siguiente->dato; 
}

void ListaDoblementeEnlazada::InsertarNodoFrente( Carta dt)
{
    Carta carta = dt;
    Nodo *nd = new Nodo;
    nd->dato = dt;
    nd->anterior = header;
    nd->siguiente = header->siguiente;
    
    header -> anterior->anterior =nd;
    header ->siguiente = nd;
    
}
void ListaDoblementeEnlazada::InsertarAtras(Carta dt)
{
    Nodo *nd = new Nodo;
    nd-> dato = dt;
    nd->anterior = trailer->anterior;
    nd->siguiente = trailer;

    trailer->anterior->siguiente= nd;
    trailer->anterior = nd;

}

void ListaDoblementeEnlazada::removerPrimero()
{
    Nodo *nd = header->siguiente->siguiente;
    delete header -> siguiente;

    header->siguiente=nd;
    nd->anterior = header;
}

void ListaDoblementeEnlazada::removerUltimo()
{
    Nodo *nd= trailer->siguiente-> siguiente;
    delete trailer->anterior;
    trailer-> anterior = nd;
    nd->siguiente = trailer;

}

void ListaDoblementeEnlazada::imprimirAlReverso()
{

}
/*

Nodo *aux2;
int i =0;
// tipo dato : 1= valor, 2= identificador
void ListaDoblementeEnlazada::ImprimirValores(int tipoDato, Carta carta )
{
    if(tipoDato = 1){
        //Carta aux = ObtenerSiguiente(siguiente);
            if(carta.isVolteada()){
                cout << "|" << carta.getValor() << "    |  ";
            }else
            {
                cout << "|" << "xxx" << "    |  ";
            }
        }else if(tipoDato = 2){
               
            if(carta.isVolteada()){
                cout << "|" << carta.getIdentificador() << "    |  ";
            }else
            {
                cout << "|" << "xxx" << "    |  ";
            }
            cout << "|" << carta.getIdentificador() << "    |  ";
        }else{
            cout << " " << " " << "       ";
        }
}
*/
ListaDoblementeEnlazada::ListaDoblementeEnlazada(const ListaDoblementeEnlazada& orig)
{
}

bool ListaDoblementeEnlazada:: estaVacia(){
    if(header-> siguiente== trailer){
        return true;
    }else {
        return false;
    }
}

ListaDoblementeEnlazada::~ListaDoblementeEnlazada()
{
    while(header-> siguiente != trailer){
        removerPrimero();
    }
    delete header;
    delete trailer;
}


