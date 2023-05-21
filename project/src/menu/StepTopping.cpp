//
// Created by mjwoj on 21.05.2023.
//

#include "../../include/menu/StepTopping.h"
#include "../../include/food/WithDough.h"
#include "../../include/food/WithTopping.h"

std::vector<Position> StepTopping::getPositions()
{
    auto positions = std::vector<Position> {
        {"Pineapple", 150, 8, {}},
        {"Champignons", 100, 6, {"mushroom"}},
        {"Salami", 200, 8, {}},
        {"Shrimps", 150, 15, {"shellfish"}},
        {"Onion", 100, 5, {}},
        {"Tomato", 150, 7, {}},
        {"Kebab", 200, 12, {}},
        {"Goat cheese", 150, 10, {"lactose"}},
        {"Blue cheese", 175, 11, {"lactose"}},
        {"Anchovies", 130, 12, {"fish"}},
        {"Vegan salami", 160, 10, {"soy"}},
    };
    return positions;
}

Food *StepTopping::apply(Food *pizza, Position position)
{
    return new WithTopping(pizza, position.name, position.kcal, position.price, position.allergens);
}

std::string StepTopping::prompt()
{
    return "Choose topping";
}