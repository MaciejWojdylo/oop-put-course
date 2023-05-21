//
// Created by mjwoj on 21.05.2023.
//

#include "../../include/menu/StepCheese.h"
#include "../../include/food/WithDough.h"
#include "../../include/food/WithTopping.h"

std::vector<Position> StepCheese::getPositions()
{
    auto positions = std::vector<Position> {
        {"Mozzarella", 150, 8, {"lactose"}},
        {"Cheddar", 200, 10, {"lactose"}},
        {"Mixed cheese", 175, 9, {"lactose"}},
        {"Mozzarella lactose-free", 150, 9, {}},
        {"Vegan cheese", 120, 10, {"soy", "celery"}}
    };
    return positions;
}

Food *StepCheese::apply(Food *pizza, Position position)
{
    return new WithTopping(pizza, position.name, position.kcal, position.price, position.allergens);
}

std::string StepCheese::prompt()
{
    return "Choose your cheese";
}