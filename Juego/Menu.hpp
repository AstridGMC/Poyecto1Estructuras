#ifndef MENU_HPP
#define MENU_HPP

class Menu {
    public:
        Menu();
        Menu(const Menu& orig);
        void MenuPrincipal(int);
        void MenuJugador(int);
        void MenuMoverNumeroCarta(char[]);
        void MenuMoverCarta( int);
        virtual ~Menu();
    private:

};
#endif /* MENU_HPP */