int led = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
    testfunction();

}

void testfunction(){
    // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);          // switching on the led
  delay(1000);                        // delay 1000 milliseconds    digitalWrite(led, LOW);         // switching off the led
  digitalWrite(led, LOW);          // switching off the led
  delay(1000);
}