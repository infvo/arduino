// copy of Blink example from Arduino IDE

int led = 13;

void setup() {
  pinMode(led, OUTPUT);   // initialize the digital pin as an output.
}

void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by (LOW level)
  delay(1000);               // wait for a second
}
