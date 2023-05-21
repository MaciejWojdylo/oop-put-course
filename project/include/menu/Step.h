//
// Created by mjwoj on 21.05.2023.
//

#ifndef PROJEKTNAOBIEK_STEP_H
#define PROJEKTNAOBIEK_STEP_H

#endif //PROJEKTNAOBIEK_STEP_H

#pragma once
#include <vector>
#include "Position.h"
#include "../food/Food.h"


class Step
{
    public:
        virtual std::string prompt()=0;
        virtual std::vector<Position> getPositions()=0;
        virtual Food* apply(Food*, Position)=0;
};