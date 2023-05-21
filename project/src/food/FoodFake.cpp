//
// Created by mjwoj on 21.05.2023.
//

#include "../../include/food/Food.h"

int Food::Fake::Kcal()
{
    return 1997;
}

float Food::Fake::Price()
{
    return 29.9f;
}

std::string Food::Fake::Ingredients()
{
    return "Dough\nCheese\nHam";
}

std::vector<std::string> Food::Allergens()
{
    return {"gluten", "cheese", "meat"};
}