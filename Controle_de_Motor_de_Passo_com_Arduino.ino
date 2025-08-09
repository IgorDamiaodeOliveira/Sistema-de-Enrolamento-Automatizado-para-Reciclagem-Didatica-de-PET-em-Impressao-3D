#include <AccelStepper.h>

// Defina os pinos do motor
#define motorPin1  8
#define motorPin2  9
#define motorPin3  10
#define motorPin4  11

// Inicialize o motor no modo de 4 fios
AccelStepper stepper(AccelStepper::FULL4WIRE, motorPin1, motorPin2, motorPin3, motorPin4);

void setup() {
  // Defina a velocidade máxima e a aceleração
  stepper.setMaxSpeed(1000);
  stepper.setAcceleration(500);
}

void loop() {
  // Gire o motor continuamente
  stepper.runSpeed();
}
}
