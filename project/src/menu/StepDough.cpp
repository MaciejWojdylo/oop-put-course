//
// Created by mjwoj on 21.05.2023.
//

#include "../../include/menu/StepDough.h"
#include "../../include/food/WithDough.h"
#include "../../include/food/WithTopping.h"

std::vector<Position> StepDough::getPositions()
{
    auto positions = std::vector<Position> {
        {"Old-school dough", 230, 12, {"gluten", "egg"}},
        {"Thin dough", 150, 10, {"gluten"}},
        {"Thick dough", 200, 11, {"gluten"}},
        {"Thin dough gluten-free", 150, 11, {}},
        {"Thick dough gluten-free", 200, 12, {}}
    };
    return positions;
}

Food *StepDough::apply(Food *pizza, Position position)
{
    return new WithTopping(pizza, position.name, position.kcal, position.price, position.allergens);
}

std::string StepDough::prompt()
{
    return "Choose dough";
}