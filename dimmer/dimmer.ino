
const int upButtonPin = 2;     // pin nr of "on" button
const int downButtonPin = 3;   // pin nr of "off" button
const int ledPin =  13;        // pin nr of LED

const int period = 10;         // 10 msec: 100 Hz

int duty = 100;

void setup() {
  pinMode(ledPin, OUTPUT);      // initialize LED pin as output
  pinMode(onButtonPin, INPUT);  // initialize button pin as input
  pinMode(offButtonPin, INPUT); // initialize button pin as input
}

void loop() {
  if (digitalRead(upButtonPin) == HIGH) {
    duty = min(duty + 10, 100);
  }

  if (digitalRead(downButtonPin) == HIGH) {
    duty = max(duty - 10, 0);
  }

  digitalWrite(ledPin, HIGH);
  delay(period * duty / 100);
  digitalWrite(ledPin, LOW);
  delay(period * (100 - duty) / 100);
}
