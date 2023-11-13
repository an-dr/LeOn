//Includes the Arduino Stepper Library
#include <Stepper.h>
#include <CheapStepper.h>

// Defines the number of steps per rotation
const int stepsPerRevolution = 2038;

Stepper StepperR = Stepper(stepsPerRevolution, 8, 10, 9, 11);
Stepper StepperL = Stepper(stepsPerRevolution, 4, 6, 5, 7);

class DcMotor {
  int m_pin_a;
  int m_pin_b;

  DcMotor() = default;

public:
  DcMotor(int pin_a, int pin_b)
    : m_pin_a(pin_a), m_pin_b(pin_b) {
    pinMode(m_pin_a, OUTPUT);
    pinMode(m_pin_b, OUTPUT);
  };

  void direction(bool clock, uint32_t speed) {
    if (clock) {
      analogWrite(m_pin_a, speed);
      analogWrite(m_pin_b, 0);
      // digitalWrite(m_pin_a, 1);
      // digitalWrite(m_pin_b, 0);

    } else {
      analogWrite(m_pin_a, 0);
      analogWrite(m_pin_b, speed);
      // digitalWrite(m_pin_a, 0);
      // digitalWrite(m_pin_b, 1);
    }
  }

  void stop() {
    analogWrite(m_pin_a, 0);
    analogWrite(m_pin_b, 0);
  }
};

DcMotor dc = DcMotor(2, 3);
uint32_t time_store = 0;

void setup() {
  // Nothing to do (Stepper Library sets pins as outputs)

  StepperL.setSpeed(10);
  StepperR.setSpeed(10);
  time_store = millis();
}

void loop() {

  // Rotate CCW quickly at 10 RPM
  StepperR.step(1);
  StepperL.step(1);

  int now = millis();
  if ((now - time_store > 3000) && (now - time_store <= 3400)) {
    dc.direction(1, 180);
  }

  if (now - time_store > 3400) {
    dc.stop();
    time_store = millis();
  }


  // delay(1000);
}