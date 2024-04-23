int myVoltPin= A2;
int readVal;
//voltage read between 0 and 1023
float v2;
int delayTime= 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(myVoltPin);
  //we add . at the end to specify a float number
  v2=(5./1023.)*readVal;
  Serial.println(v2);
  delay(delayTime);
}
