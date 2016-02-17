
const int onButtonPin = 2;     // pin nr of "on" button
const int offButtonPin = 3;    // pin nr of "off" button
const int ledPin =  13;        // pin nr of LED

int onButtonState = 0;         // variable for reading "on" button
int offButtonState = 0;        // variable for reading "off" button

void setup() {
  pinMode(ledPin, OUTPUT);      // initialize LED pin as output
  pinMode(onButtonPin, INPUT);  // initialize button pin as input
  pinMode(offButtonPin, INPUT); // initialize button pin as input
}

void loop() {
  onButtonState = digitalRead(onButtonPin);
  if (onButtonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(100);
  }

  offButtonState = digitalRead(offButtonPin);
  if (offButtonState == HIGH) {
    digitalWrite(ledPin, LOW);
    delay(10);
  }
}
