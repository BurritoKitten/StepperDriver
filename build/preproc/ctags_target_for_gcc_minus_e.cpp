# 1 "C:\\Altoid\\VSCode\\Arduino\\StepperDriver\\StepperDriver.ino"
# 2 "C:\\Altoid\\VSCode\\Arduino\\StepperDriver\\StepperDriver.ino" 2

std::array<Stepper, 3> steppers = {Stepper(12, 13), Stepper(15, 2), Stepper(17, 22)};

void setup()
{
    initialize(steppers);
}

void loop()
{
    poke(steppers);
}
