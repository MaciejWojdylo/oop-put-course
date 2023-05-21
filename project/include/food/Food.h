#ifndef PROJEKTNAOBIEK_FOOD_H
#define PROJEKTNAOBIEK_FOOD_H

#endif //PROJEKTNAOBIEK_FOOD_H
#include <iostream>
#include <vector>

#pragma once
class Food
{
    public:
    virtual int Kcal()=0;
    virtual float Price()=0;
    virtual std::string Ingredients()=0;
    virtual std::vector<std::string> Allergens()=0;
    class Fake;
};

class Food::Fake : public Food
{
    public:
        int Kcal() override;
        float Price() override;
        std::string Ingredients() override;
        std::vector<std::string> Allergens() override;
};