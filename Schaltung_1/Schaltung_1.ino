const int ledPin1 = 13;
const int ledPin2 = 11;

const int buzzerPin = 12;

const int ldrPin = A0;

void setup () {

Serial.begin(9600);

pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);

pinMode(buzzerPin, OUTPUT);

pinMode(ldrPin, INPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);
Serial.println(ldrStatus);

if (ldrStatus > 300) {

tone(buzzerPin, 100);

digitalWrite(ledPin1, HIGH);
digitalWrite(ledPin2, HIGH);

delay(100);

noTone(buzzerPin);

digitalWrite(ledPin1, LOW);
digitalWrite(ledPin2, LOW);

delay(100);

Serial.println(" ALARM ACTIVATED ");

}

else {

noTone(buzzerPin);

digitalWrite(ledPin1, LOW);
digitalWrite(ledPin2, LOW);

Serial.println("ALARM DEACTIVATED");

}

}
