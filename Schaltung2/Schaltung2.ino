//set pin numbers
const int ledPin = 2;        
const int buttonPin = 4;
const int redPin = 11;
const int greenPin = 9;
const int bluePin = 10;
int counter = 0;

//variables will change
int buttonState = 0;          

void setup() {

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);   
  pinMode(buttonPin, INPUT); 
  pinMode(redPin, OUTPUT);    
  pinMode(greenPin, OUTPUT);    
  pinMode(greenPin, OUTPUT);    


}

void loop() {

  buttonState = digitalRead(buttonPin); //read the state of the pushbutton value

  if (buttonState == HIGH) {            //check if the pushbutton is pressed
    //if it is, the buttonState is HIGH
    digitalWrite(ledPin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    counter++;
    delay(250);
    Serial.println(counter); 
  }

 else if (counter == 0) {
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  digitalWrite(ledPin, LOW);
  }
  
  else if (counter == 1) {
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  digitalWrite(ledPin, LOW);
  }
  
  else if (counter == 2) {
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  digitalWrite(ledPin, LOW);
  }
  
  else if (counter == 3) {
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  digitalWrite(ledPin, LOW);
  }

  else {
  counter = 0;
  digitalWrite(ledPin, LOW);
  digitalWrite(redPin, HIGH);
  delay(300);
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, HIGH);
    delay(300);
    digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, HIGH);
    delay(300);
  }
}
