#include <utility>

#include "../../include/food/WithDough.h"

WithDough::WithDough(Pizza *base, std::string name, int kcal, float price, std::vector<std::string> allergens)
{
    this->decorated = base;
    this->name = std::move(name);
    this->kcal = kcal;
    this->price = price;
    this->allergens = std::move(allergens);
}

float WithDough::Price()
{
    return this->decorated->Price() + this->price;
}

int WithDough::Kcal()
{
    return this->decorated->Kcal() + this->kcal;
}

std::string WithDough::Name()
{
    return this->name;
}

std::string WithDough::Ingredients()
{
    return this->decorated->Ingredients() + this->name;
}

std::vector<std::string> WithDough::Allergens()
{
    auto decoratedAllergens = decorated->Allergens();
    std::vector<std::string> merged;
    merged.reserve(this->allergens.size() + decoratedAllergens.size());
    merged.insert(merged.end(), decoratedAllergens.begin(), decoratedAllergens.end());
    merged.insert(merged.end(), this->allergens.begin(), this->allergens.end());
    std::sort(merged.begin(), merged.end());
    auto ip = std::unique(merged.begin(), merged.end());
    merged.resize(std::distance(merged.begin(), ip));
    return merged;
}
