#include <Arduino.h>
#line 1 "C:\\Altoid\\VSCode\\Arduino\\StepperDriver\\StepperDriver.ino"
#include "StepperDriver.h"

std::array<Stepper, 3> steppers = {Stepper(12, 13), Stepper(15, 2), Stepper(17, 22)};

#line 5 "C:\\Altoid\\VSCode\\Arduino\\StepperDriver\\StepperDriver.ino"
void setup();
#line 10 "C:\\Altoid\\VSCode\\Arduino\\StepperDriver\\StepperDriver.ino"
void loop();
#line 5 "C:\\Altoid\\VSCode\\Arduino\\StepperDriver\\StepperDriver.ino"
void setup()
{
    initialize(steppers);
}

void loop()
{
    poke(steppers);
}

