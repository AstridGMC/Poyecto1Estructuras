all: Solitario
Solitario: Main.o Cola.o ListaDoblementeEnlazada.o Nodo.o Pila.o Menu.o Carta.o GeneradorCartas.o Tablero.o
	g++ Main.o Cola.o ListaDoblementeEnlazada.o Nodo.o Pila.o Menu.o Carta.o GeneradorCartas.o Tablero.o -o Solitario
	./Solitario

Carta.o: Carta.cpp
	g++ -c Carta.cpp

Nodo.o: Estructuras/Nodo.cpp
	g++ -c Estructuras/Nodo.cpp

Main.o: Juego/Main.cpp
	g++ -c Juego/Main.cpp

Cola.o: Estructuras/Cola.cpp
	g++ -c Estructuras/Cola.cpp

ListaDoblementeEnlazada.o: Estructuras/ListaDoblementeEnlazada.cpp
	g++ -c Estructuras/ListaDoblementeEnlazada.cpp


Pila.o: Estructuras/Pila.cpp
	g++ -c Estructuras/Pila.cpp
	

Menu.o: Juego/Menu.cpp
	g++ -c Juego/Menu.cpp


GeneradorCartas.o: GeneradorCartas.cpp
	g++ -c GeneradorCartas.cpp	

Tablero.o: Tablero.cpp
	g++ -c Tablero.cpp	

clean:
	rm -rf *.o Solitario core
