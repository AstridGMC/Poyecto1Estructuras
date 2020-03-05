#include "iostream"
using namespace std;
#include "Menu.hpp"
class Menu;

int main(){
    Menu menu = Menu();
    menu.MenuPrincipal();
    
    cin.ignore();
    cin.get();
    return 0;
}