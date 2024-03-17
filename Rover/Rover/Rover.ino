#define STEPPER_PIN_1 43
#define STEPPER_PIN_2 45
#define STEPPER_PIN_3 49
#define STEPPER_PIN_4 47

void setup() {
    pinMode(STEPPER_PIN_1, OUTPUT);
    pinMode(STEPPER_PIN_2, OUTPUT);
    pinMode(STEPPER_PIN_3, OUTPUT);
    pinMode(STEPPER_PIN_4, OUTPUT);
}

void loop() {
    step(true, STEPPER_PIN_1, STEPPER_PIN_2, STEPPER_PIN_3, STEPPER_PIN_4);
    delay(2);
}