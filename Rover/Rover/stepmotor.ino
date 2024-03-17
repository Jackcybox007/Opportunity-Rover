int step_number = 0;

void step(bool direction) {
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
