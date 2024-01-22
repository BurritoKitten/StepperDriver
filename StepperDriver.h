#define CCW 0x0
#define CW 0x1

class Stepper
{
private:
    int stepPin_;
    int directionPin_;
    int lastStep_ = 0;
    int stepTime_ = 1;

public:
    Stepper() {}
    Stepper(int stepIn, int dirIn) : stepPin_(stepIn), directionPin_(dirIn) {}

    int lastStep() { return lastStep_; }
    int stepTime() { return stepTime_; }
    int nextStep() { return lastStep_ + stepTime_; }
    bool shouldStep() { return millis() >= this->nextStep(); }
    void stepIfShould()
    {
        if (this->shouldStep())
        {
            this->step();
        }
    }

    void speed(int stepTime)
    {
        lastStep_ = millis();
        stepTime_ = stepTime;
    }

    void initialize()
    {
        pinMode(stepPin_, OUTPUT);
        pinMode(directionPin_, OUTPUT);
        digitalWrite(stepPin_, LOW);
        digitalWrite(directionPin_, LOW);
    }

    void direction(int dir)
    {
        digitalWrite(directionPin_, dir);
    }

    void step()
    {
        digitalWrite(stepPin_, HIGH);
        digitalWrite(stepPin_, LOW);
    }
};

class StepperGroup
{
private:
    Stepper motors[];
    int nextSteps[];

public:
    StepperGroup(Stepper motorsIn[]) : motors(motorsIn) {}

    void poke()
    {
        for (int i = 0; i < motors.length; i++)
        {
            if (motors[i]->shouldStep())
            {
                motors
            }
        }
    }
};