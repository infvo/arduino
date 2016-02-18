
const int onButtonPin = 2;     // pin nr of "on" button
const int offButtonPin = 3;    // pin nr of "off" button
const int ledPin =  13;        // pin nr of LED

void setup() {
  pinMode(ledPin, OUTPUT);      // initialize LED pin as output
  pinMode(onButtonPin, INPUT);  // initialize button pin as input
  pinMode(offButtonPin, INPUT); // initialize button pin as input
}

void loop() {
  if (digitalRead(onButtonPin) == HIGH) {
    digitalWrite(ledPin, HIGH);
  }

  if (digitalRead(offButtonPin) == HIGH) {
    digitalWrite(ledPin, LOW);
  }
}
