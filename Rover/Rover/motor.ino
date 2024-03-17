void Forwards (int motor1, int motor2) {
    digitalWrite(MOTOR_PIN_1, HIGH);
    digitalWrite(MOTOR_PIN_2, LOW);
    digitalWrite(MOTOR_PIN_3, LOW);
    digitalWrite(MOTOR_PIN_4, HIGH);

    analogWrite(MOTOR_EN_1, motor1);
    analogWrite(MOTOR_EN_2, motor2);
}

void Backwards (int motor1, int motor2) {
    digitalWrite(MOTOR_PIN_1, LOW);
    digitalWrite(MOTOR_PIN_2, HIGH);
    digitalWrite(MOTOR_PIN_3, HIGH);
    digitalWrite(MOTOR_PIN_4, LOW);

    analogWrite(MOTOR_EN_1, motor1);
    analogWrite(MOTOR_EN_2, motor2);
}

void Left (int motor1, int motor2) {
    digitalWrite(MOTOR_PIN_1, LOW);
    digitalWrite(MOTOR_PIN_2, HIGH);
    digitalWrite(MOTOR_PIN_3, LOW);
    digitalWrite(MOTOR_PIN_4, HIGH);

    analogWrite(MOTOR_EN_1, motor1);
    analogWrite(MOTOR_EN_2, motor2);
}

void Right (int motor1, int motor2) {
    digitalWrite(MOTOR_PIN_1, HIGH);
    digitalWrite(MOTOR_PIN_2, LOW);
    digitalWrite(MOTOR_PIN_3, LOW);
    digitalWrite(MOTOR_PIN_4, HIGH);

    analogWrite(MOTOR_EN_1, motor1);
    analogWrite(MOTOR_EN_2, motor2);
}
