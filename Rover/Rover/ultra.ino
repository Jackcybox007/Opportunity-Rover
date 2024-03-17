float distance_ultra () {
    digitalWrite(ULTRA_ECHO, LOW);
    delayMicroseconds(2);
    digitalWrite(ULTRA_TRIG, HIGH);
    delayMicroseconds(5);
    digitalWrite(ULTRA_TRIG, LOW);

    float t = pulseIn(ULTRA_ECHO, HIGH);
    float distance = t*0.017015;
    return distance;
}