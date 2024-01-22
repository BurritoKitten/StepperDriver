# 1 "C:\\Altoid\\VSCode\\Arduino\\StepperDriver\\StepperDriver.ino"
# 2 "C:\\Altoid\\VSCode\\Arduino\\StepperDriver\\StepperDriver.ino" 2

Stepper motor0 = Stepper(12, 13);
Stepper motor1 = Stepper(15, 2);
// Stepper motor2 = Stepper(17, 22);

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
