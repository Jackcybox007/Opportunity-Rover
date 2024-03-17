int step_number = 0;

void step(bool direction, int Pin1, int Pin2, int Pin3, int Pin4)
{
    if (direction)
    {
        switch (step_number)
        {
        case 0:
            digitalWrite(Pin1, HIGH);
            digitalWrite(Pin2, LOW);
            digitalWrite(Pin3, LOW);
            digitalWrite(Pin4, LOW);
            break;
        case 1:
            digitalWrite(Pin1, LOW);
            digitalWrite(Pin2, HIGH);
            digitalWrite(Pin3, LOW);
            digitalWrite(Pin4, LOW);
            break;
        case 2:
            digitalWrite(Pin1, LOW);
            digitalWrite(Pin2, LOW);
            digitalWrite(Pin3, HIGH);
            digitalWrite(Pin4, LOW);
            break;
        case 3:
            digitalWrite(Pin1, LOW);
            digitalWrite(Pin2, LOW);
            digitalWrite(Pin3, LOW);
            digitalWrite(Pin4, HIGH);
            break;
        }
    }
    else
    {
        switch (step_number)
        {
        case 0:
            digitalWrite(Pin1, LOW);
            digitalWrite(Pin2, LOW);
            digitalWrite(Pin3, LOW);
            digitalWrite(Pin4, HIGH);
            break;
        case 1:
            digitalWrite(Pin1, LOW);
            digitalWrite(Pin2, LOW);
            digitalWrite(Pin3, HIGH);
            digitalWrite(Pin4, LOW);
            break;
        case 2:
            digitalWrite(Pin1, LOW);
            digitalWrite(Pin2, HIGH);
            digitalWrite(Pin3, LOW);
            digitalWrite(Pin4, LOW);
            break;
        case 3:
            digitalWrite(Pin1, HIGH);
            digitalWrite(Pin2, LOW);
            digitalWrite(Pin3, LOW);
            digitalWrite(Pin4, LOW);
        }
    }
    step_number++;
    if (step_number > 3)
    {
        step_number = 0;
    }
}

void STEP_1_MOVE(bool dir, int steps, int Delay)
{
    for (int i = 0; i < steps; i++)
    {
        step(dir, STEPPER_1_PIN_1, STEPPER_1_PIN_2, STEPPER_1_PIN_3, STEPPER_1_PIN_4);
        delay(Delay);
    }
}

void STEP_2_MOVE(bool dir, int steps, int Delay)
{
    for (int i = 0; i < steps; i++)
    {
        step(dir, STEPPER_2_PIN_1, STEPPER_2_PIN_2, STEPPER_2_PIN_3, STEPPER_2_PIN_4);
        delay(Delay);
    }
}

void STEP_3_MOVE(bool dir, int steps, int Delay)
{
    for (int i = 0; i < steps; i++)
    {
        step(dir, STEPPER_3_PIN_1, STEPPER_3_PIN_2, STEPPER_3_PIN_3, STEPPER_3_PIN_4);
        delay(Delay);
    }
}