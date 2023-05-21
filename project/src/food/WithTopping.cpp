#include "../../include/food/WithTopping.h"

WithTopping::WithTopping(Food *base, std::string name, int kcal, float price, std::vector<std::string> allergens)
{
    this->decorated = base;
    this->name = name;
    this->kcal = kcal;
    this->price = price;
    this->allergens = std::move(allergens);
}

float WithTopping::Price()
{
    return this->decorated->Price() + this->price;
}

int WithTopping::Kcal()
{
    return this->decorated->Kcal() + this->kcal;
}

std::string WithTopping::Name()
{
    return this->name;
}

std::string WithTopping::Ingredients()
{
    return this->decorated->Ingredients() + "\n" + this->name;
}

std::vector<std::string> WithTopping::Allergens()
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