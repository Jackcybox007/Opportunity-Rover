#define STEP1 43
#define STEP2 45
#define STEP3 49
#define STEP4 47

void setup() {
    pinMode(STEP1, OUTPUT);
    pinMode(STEP2, OUTPUT);
    pinMode(STEP3, OUTPUT);
    pinMode(STEP4, OUTPUT);
}

void loop() {
    step(false);
    delay(2);
}