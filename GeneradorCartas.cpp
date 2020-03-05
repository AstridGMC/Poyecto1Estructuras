#include "Cola.h"
#include "ListaDoblementeEnlazada.h"
#include "GeneradorCartas.h"
class ListaDoblementeEnlazada;
class Cola;

GeneradorCartas::GeneradorCartas(Cola colaIzquierda, ListaDoblementeEnlazada L1,ListaDoblementeEnlazada L2,  ListaDoblementeEnlazada L3,
    ListaDoblementeEnlazada L4, ListaDoblementeEnlazada L5, ListaDoblementeEnlazada L6, ListaDoblementeEnlazada L7, ListaDoblementeEnlazada L8,  ListaDoblementeEnlazada L9 ){
    barajarCartas();
}

GeneradorCartas::GeneradorCartas(){
}

void GeneradorCartas :: LlenarColas(Cola ColaIzquierda){
    int i;
    for(i=0;i<=24;i++){
        ColaIzquierda.insertarCola(nodo, nodo, barajaCartas[i]);
        if(i==24){
            barajaCartas[i].setVolteada(true);
            ColaIzquierda.insertarCola(nodo, nodo, barajaCartas[i]);
        }
    }
   
}
void GeneradorCartas :: LlenarListas(ListaDoblementeEnlazada L1,ListaDoblementeEnlazada L2,  ListaDoblementeEnlazada L3,
    ListaDoblementeEnlazada L4, ListaDoblementeEnlazada L5, ListaDoblementeEnlazada L6, ListaDoblementeEnlazada L7){
        int i =25;
        
        while (i<=52)
        {
            if(i=25){
                barajaCartas[i].setVolteada(true);
                L1.InsertarNodoFrente(barajaCartas[i]);
                i++;
            }else if(i>25 && i<=27){
                if(i==26){
                    barajaCartas[i].setVolteada(true);
                    L2.InsertarNodoFrente(barajaCartas[i]);
                }else{
                    L2.InsertarNodoFrente(barajaCartas[i]);
                }
                i++;
            }else if(i>27 && i<=30){
                if(i==30){
                    barajaCartas[i].setVolteada(true);
                    L3.InsertarNodoFrente(barajaCartas[i]);
                }else{
                    L3.InsertarNodoFrente(barajaCartas[i]);
                }
                i++;
            }else if(i>30 && i<=34){
                if(i==34){
                    barajaCartas[i].setVolteada(true);
                    L4.InsertarNodoFrente(barajaCartas[i]);
                }else{
                    L4.InsertarNodoFrente(barajaCartas[i]);
                }
                
            }else if(i>34 && i<=39){
                if(i==39){
                    barajaCartas[i].setVolteada(true);
                    L5.InsertarNodoFrente(barajaCartas[i]);
                }else{
                    L5.InsertarNodoFrente(barajaCartas[i]);
                }
                i++;
            }else if(i>39 && i<45){
                if(i==45){
                    barajaCartas[i].setVolteada(true);
                    L6.InsertarNodoFrente(barajaCartas[i]);
                }else{
                    L6.InsertarNodoFrente(barajaCartas[i]);
                }
                i++;
                
            }else if(i>45 && i<=52){
                if(i==52){
                    barajaCartas[i].setVolteada(true);
                    L7.InsertarNodoFrente(barajaCartas[i]);
                }else{
                    L7.InsertarNodoFrente(barajaCartas[i]);
                }
                i++;
            }
        }
        
}



void GeneradorCartas ::GenerarCartas(){
    Carta carta =  Carta();
    carta.GenerarCartaCorazones(barajaCorazones);
    carta.GenerarCartaTreboles(barajaTreboles);
    carta.GenerarCartaDiamante(barajaDiamantes);
    carta.GenerarCartaEspada(barajaEspadas);
}

void GeneradorCartas ::UnirCartas(){
    int i;
    for( i=1; i<=13;i++){
        barajaCartas[i]= barajaCorazones[i];
    }
    for(i;i<=26;i++){
        barajaCartas[i]= barajaTreboles[i];
    }
     for( i; i<=39;i++){
        barajaCartas[i]= barajaDiamantes[i];
    }
    for(i;i<=52;i++){
        barajaCartas[i]= barajaEspadas[i];
    }
}

void GeneradorCartas :: barajarCartas(){
    GenerarCartas();
    UnirCartas();
    for (int i = 0; i < 32; i++) {
        int indiceAleatorio = generarAleatorio();
        // Intercambiar el actual con una carta del índice aleatorio
        Carta temporal = barajaCartas[i];
        barajaCartas[i] = barajaCartas[indiceAleatorio];
        barajaCartas[indiceAleatorio] = temporal;
    }
}
int GeneradorCartas :: generarAleatorio(){
    return (0 + rand() / (RAND_MAX / (52 - 0 + 1) + 1));
}



