#ifndef MENU_HPP
#define MENU_HPP

class Menu {
    public:
        Menu();
        Menu(const Menu& orig);
        void MenuPrincipal();
        void MenuJugador();
        void MenuMoverNumeroCarta(char*);
        void MenuMoverCarta();
        virtual ~Menu();
    private:

};
#endif /* MENU_HPP */