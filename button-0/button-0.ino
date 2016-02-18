const int buttonPin = 2;      // the number of the pushbutton pin
const int ledPin =  13;       // the number of the LED pin

void setup() {
  pinMode(ledPin, OUTPUT);      // initialize LED pin as output
  pinMode(buttonPin, INPUT);    // initialize button pin as input
}

void loop() {
  digitalWrite(ledPin, digitalRead(buttonPin));
}
