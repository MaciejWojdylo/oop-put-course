#ifndef PROJEKTNAOBIEK_PIZZA_H
#define PROJEKTNAOBIEK_PIZZA_H

#endif //PROJEKTNAOBIEK_PIZZA_H
#pragma once
#include "Food.h"

class Pizza : public Food
{
    public:
        int Kcal() override;
        float Price() override;
        std::string Ingredients() override;
        std::vector<std::string> Allergens() override;
};