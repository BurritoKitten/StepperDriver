#include "StepperDriver.h"

std::array<Stepper, 3> steppers = {Stepper(12, 13), Stepper(15, 2), Stepper(17, 22)};

void setup()
{
    for (auto &stepper : steppers)
    {
        stepper.initialize();
    }
};

void loop()
{
    poke(steppers);
};
