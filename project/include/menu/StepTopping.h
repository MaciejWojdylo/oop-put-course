//
// Created by mjwoj on 21.05.2023.
//

#ifndef PROJEKTNAOBIEK_STEP_H
#define PROJEKTNAOBIEK_STEP_H

#endif //PROJEKTNAOBIEK_STEP_H
#include "Step.h"

class StepTopping : public Step
{
    public:
        std::string prompt() override;
        std::vector<Position> getPositions() override;
        Food* apply(Food*, Position) override;
};