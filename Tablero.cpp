#include "Tablero.h"
#include "GeneradorCartas.h"
class Carta;
class GeneradorCartas;


Tablero :: Tablero(){

}

void Tablero::  imprimirCartasInicio(){
    GeneradorCartas cartasG = GeneradorCartas(colaIzquierda, L1, L2, L3, L4, L5, L6, L7, L8,L9);
    Carta carta = Carta();
    carta.ImprmirCarta(colaIzquierda,colaDerecha, L1, L2, L3, L4, L5, L6, L7);
}

