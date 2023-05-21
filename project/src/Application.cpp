#include <iostream>
#include "../include/food/WithDough.h"
#include "../include/food/WithTopping.h"
#include "../include/menu/Position.h"
#include "../include/menu/Menu.h"

using namespace std;


int main() {
    Food *pizza = nullptr;
    auto menu = new Menu();
    do
    {
        try
        {
            pizza = menu->makePizza();
        }
        catch (const exception &e)
        {
#ifdef _WIN32
            system("cls");
#endif
            cout << e.what() << endl << "Try again." << endl;
        }
    } while (pizza == nullptr);

    return 0;
}
