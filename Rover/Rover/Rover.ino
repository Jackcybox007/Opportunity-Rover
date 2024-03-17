#include <Servo.h>
#include <LiquidCrystal.h>

#define STEPPER_1_PIN_1 43
#define STEPPER_1_PIN_2 45
#define STEPPER_1_PIN_3 49
#define STEPPER_1_PIN_4 47

#define STEPPER_2_PIN_1 42
#define STEPPER_2_PIN_2 44
#define STEPPER_2_PIN_3 46
#define STEPPER_2_PIN_4 48

#define STEPPER_3_PIN_1 36
#define STEPPER_3_PIN_2 34
#define STEPPER_3_PIN_3 32
#define STEPPER_3_PIN_4 30

#define MOTOR_PIN_1 5
#define MOTOR_PIN_2 4
#define MOTOR_PIN_3 3
#define MOTOR_PIN_4 2
#define MOTOR_EN_1 11
#define MOTOR_EN_2 12

#define SERVO_PIN 7

#define ULTRA_ECHO 8
#define ULTRA_TRIG 9

#define LCD_RS 22
#define LCD_EN 26
#define LCD_D4 31
#define LCD_D5 33
#define LCD_D6 35
#define LCD_D7 37

LiquidCrystal lcd(LCD_RS, LCD_EN, LCD_D4, LCD_D5, LCD_D6, LCD_D7);
Servo servo1;

// ########################################## CODE #########################################

void setup () {
    Serial.begin(115200);
    pinMode(STEPPER_1_PIN_1, OUTPUT);
    pinMode(STEPPER_1_PIN_2, OUTPUT);
    pinMode(STEPPER_1_PIN_3, OUTPUT);
    pinMode(STEPPER_1_PIN_4, OUTPUT);

    pinMode(STEPPER_2_PIN_1, OUTPUT);
    pinMode(STEPPER_2_PIN_2, OUTPUT);
    pinMode(STEPPER_2_PIN_3, OUTPUT);
    pinMode(STEPPER_2_PIN_4, OUTPUT);

    pinMode(STEPPER_3_PIN_1, OUTPUT);
    pinMode(STEPPER_3_PIN_2, OUTPUT);
    pinMode(STEPPER_3_PIN_3, OUTPUT);
    pinMode(STEPPER_3_PIN_4, OUTPUT);

    pinMode(MOTOR_PIN_1, OUTPUT);
    pinMode(MOTOR_PIN_2, OUTPUT);
    pinMode(MOTOR_PIN_3, OUTPUT);
    pinMode(MOTOR_PIN_4, OUTPUT);
    pinMode(MOTOR_EN_1, OUTPUT);
    pinMode(MOTOR_EN_2, OUTPUT);

    pinMode(ULTRA_TRIG, OUTPUT);
    pinMode(ULTRA_ECHO, INPUT);

    servo1.attach(SERVO_PIN);
    lcd.begin(16, 2);
}

void loop () {
    lcd.setCursor(0, 1);
    lcd.print(distance_ultra());
    delay(500);
//  Forwards(255,255);
}