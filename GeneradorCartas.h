#include "Carta.h"
class GeneradorCartas{
    public:
        GeneradorCartas(Cola, ListaDoblementeEnlazada, ListaDoblementeEnlazada,ListaDoblementeEnlazada, ListaDoblementeEnlazada,ListaDoblementeEnlazada, ListaDoblementeEnlazada,ListaDoblementeEnlazada, ListaDoblementeEnlazada, ListaDoblementeEnlazada);
        void GenerarCartas();
        Carta barajaCartas[52];
        void barajarCartas();
        GeneradorCartas();
    private:
        Nodo *nodo = new Nodo();
        void UnirCartas();
        Carta barajaTreboles[13];
        Carta barajaCorazones[13];
        Carta barajaEspadas[13];
        Carta barajaDiamantes[13];
        int generarAleatorio();
        void LlenarColas(Cola);
        void LlenarListas(ListaDoblementeEnlazada,ListaDoblementeEnlazada, ListaDoblementeEnlazada,ListaDoblementeEnlazada, ListaDoblementeEnlazada,ListaDoblementeEnlazada, ListaDoblementeEnlazada);
};