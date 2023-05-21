//
// Created by mjwoj on 21.05.2023.
//

#pragma once
#include "../../include/menu/Menu.h"
#include "../../include/food/Pizza.h"
#include "../../include/menu/StepTopping.h"
#include "../../include/menu/MenuException.h"
#include <iostream>

using namespace std;

Food *Menu::makePizza()
{
    Food *pizza = new Pizza();

    int toppings;
    cout << "How many toppings do you want: ";
    cin >> toppings;

    for (int i = 0; i < toppings; i++) {
        steps.push_back(new StepTopping);
    }

#ifdef _WIN32
    system("cls");
#endif

    for (Step* step : steps)
    {
        cout << step->prompt() << endl;
        auto positions = step->getPositions();
        for (int i = 0; i < positions.size(); i++)
        {
            cout << " [" << i << "] " << positions[i].name << endl;
        }
        int choice;
        cin >> choice;

        if (choice >= positions.size()) {
            throw MenuException("Non-existent topping selected");
        }

        pizza = step->apply(pizza, positions[choice]);
#ifdef _WIN32
        system("cls");
#endif

    }

    cout << "Summary: " << endl;
    cout << "Ingredients: " << endl;
    cout << pizza->Ingredients() << endl;
    cout << " ----- " << endl;
    cout << pizza->Kcal() << " kcal" << endl << pizza->Price() << " PLN" << endl;
    cout << pizza->Price() * 0.0000079 << " BTC" << endl;
    cout << "Allergens: ";
    for (string allergen : pizza->Allergens()) {
        cout << allergen << " ";
    }

    return pizza;
}