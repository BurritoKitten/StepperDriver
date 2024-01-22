#include <Arduino.h>
#line 1 "C:\\Altoid\\VSCode\\Arduino\\StepperDriver\\StepperDriver.ino"
#include "StepperDriver.h"

Stepper motor0 = Stepper(12, 13);
Stepper motor1 = Stepper(15, 2);
// Stepper motor2 = Stepper(17, 22);

#line 7 "C:\\Altoid\\VSCode\\Arduino\\StepperDriver\\StepperDriver.ino"
void setup();
#line 14 "C:\\Altoid\\VSCode\\Arduino\\StepperDriver\\StepperDriver.ino"
void loop();
#line 7 "C:\\Altoid\\VSCode\\Arduino\\StepperDriver\\StepperDriver.ino"
void setup()
{
    motor0.initialize();
    motor1.initialize();
    // motor2.initialize();
}

void loop()
{
    
    motor0.step();
    motor1.step();
    // motor2.step();
    delay(1);
}

