//
// Created by mjwoj on 21.05.2023.
//

#include "../food/Food.h"
#include "Step.h"
#include "StepDough.h"
#include "StepCheese.h"

#ifndef PROJEKTNAOBIEK_MENU_H
#define PROJEKTNAOBIEK_MENU_H

#endif //PROJEKTNAOBIEK_MENU_H

class Menu
{
    private:
        std::vector<Step*> steps = {new StepDough, new StepCheese};
    public:
        Food* makePizza();
};