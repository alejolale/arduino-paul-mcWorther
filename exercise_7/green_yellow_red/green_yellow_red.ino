int myVoltPin= A2;
int readVal;
//voltage read between 0 and 1023
float v2;
int delayTime= 500;
int redPin=9;
int yellowPin=8;
int greenPin=7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(myVoltPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(myVoltPin);
  //we add . at the end to specify a float number
  v2=(5./1023.)*readVal;
  Serial.print("Potentiometer voltage is : ");
  Serial.println(v2);

  if(v2 < 3.0){
    digitalWrite(greenPin, HIGH);
    digitalWrite(yellowPin, LOW);
  }
  if (v2 > 3.0){
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);
  }
  if (v2 > 4.0){
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
  }
  if(v2 < 4.0){
    digitalWrite(redPin, LOW);
  }
  
  delay(delayTime);
}
