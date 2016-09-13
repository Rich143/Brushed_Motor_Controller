#define PWM_OUTPUT 9

void setup() {
  pinMode(PWM_OUTPUT, OUTPUT);
}

void loop() {
 for (int dutyCycle=50; dutyCycle < 255; dutyCycle+=5) {
   analogWrite(PWM_OUTPUT, dutyCycle);
   delay(10);
 }
 
 delay(500);
 
  for (int dutyCycle=255; dutyCycle > 50; dutyCycle-=5) {
   analogWrite(PWM_OUTPUT, dutyCycle);
   delay(10);
 }
}
