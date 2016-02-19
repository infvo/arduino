
const int upButtonPin = 2;     // pin nr of "on" button
const int downButtonPin = 3;   // pin nr of "off" button
const int ledPin =  9;         // pin nr of LED

int duty = 1;

void setup() {
  pinMode(ledPin, OUTPUT);      // initialize LED pin as output
  pinMode(upButtonPin, INPUT);  // initialize button pin as input
  pinMode(downButtonPin, INPUT); // initialize button pin as input
}

void loop() {
  if (digitalRead(upButtonPin) == HIGH) {
    duty = min(duty * 2, 256);
    delay(200);
  }

  if (digitalRead(downButtonPin) == HIGH) {
    duty = max(duty / 2, 1);
    delay(200);
  }

  analogWrite(ledPin, duty - 1);
}
