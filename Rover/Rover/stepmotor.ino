int step_number = 0;

void halt(int STEP1, int STEP2, int STEP3, int STEP4) {
    digitalWrite(STEP1, LOW);
    digitalWrite(STEP2, LOW);
    digitalWrite(STEP3, LOW);
    digitalWrite(STEP4, LOW);
}

void step(bool direction, int STEP1, int STEP2, int STEP3, int STEP4) {
  if (direction) {
    switch (step_number) {
      case 0:
        digitalWrite(STEP1, HIGH);
        digitalWrite(STEP2, LOW);
        digitalWrite(STEP3, LOW);
        digitalWrite(STEP4, LOW);
        break;
      case 1:
        digitalWrite(STEP1, LOW);
        digitalWrite(STEP2, HIGH);
        digitalWrite(STEP3, LOW);
        digitalWrite(STEP4, LOW);
        break;
      case 2:
        digitalWrite(STEP1, LOW);
        digitalWrite(STEP2, LOW);
        digitalWrite(STEP3, HIGH);
        digitalWrite(STEP4, LOW);
        break;
      case 3:
        digitalWrite(STEP1, LOW);
        digitalWrite(STEP2, LOW);
        digitalWrite(STEP3, LOW);
        digitalWrite(STEP4, HIGH);
        break;
    }
  } else {
    switch (step_number) {
      case 0:
        digitalWrite(STEP1, LOW);
        digitalWrite(STEP2, LOW);
        digitalWrite(STEP3, LOW);
        digitalWrite(STEP4, HIGH);
        break;
      case 1:
        digitalWrite(STEP1, LOW);
        digitalWrite(STEP2, LOW);
        digitalWrite(STEP3, HIGH);
        digitalWrite(STEP4, LOW);
        break;
      case 2:
        digitalWrite(STEP1, LOW);
        digitalWrite(STEP2, HIGH);
        digitalWrite(STEP3, LOW);
        digitalWrite(STEP4, LOW);
        break;
      case 3:
        digitalWrite(STEP1, HIGH);
        digitalWrite(STEP2, LOW);
        digitalWrite(STEP3, LOW);
        digitalWrite(STEP4, LOW);
    }
  }
  step_number++;
  if (step_number > 3) {
    step_number = 0;
  }
}

void move (int Step, bool dir, int STEP1, int STEP2, int STEP3, int STEP4) {
    int i = 0;
    for (i = 0; i < Step; i++) {
        step(dir, STEP1, STEP2, STEP3, STEP4);
        delay(2);
    }
}