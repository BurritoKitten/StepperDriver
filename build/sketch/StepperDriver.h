#line 1 "C:\\Altoid\\VSCode\\Arduino\\StepperDriver\\StepperDriver.h"
#define CCW 0x0
#define CW 0x1

class Stepper
{
private:
    int stepPin;
    int directionPin;

public:
    Stepper() {}
    Stepper(int stepIn, int dirIn) : stepPin(stepIn), directionPin(dirIn) {}

    void initialize()
    {
        pinMode(stepPin, OUTPUT);
        pinMode(directionPin, OUTPUT);
        digitalWrite(stepPin, LOW);
        digitalWrite(directionPin, LOW);
    }

    void direction(int dir)
    {
        digitalWrite(directionPin, dir);
    }

    void step()
    {
        digitalWrite(stepPin, HIGH);
        digitalWrite(stepPin, LOW);
    }
};

class StepperGroup
{
private:
    Stepper motors[];
    int nextSteps[];

public:
    StepperGroup(Stepper motors[])
}