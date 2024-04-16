int readPin=A3;
int readVal;
float voltage2=0; // same as HIGH
int delayTime=500;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);//input for reading voltage
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin); // value is between 0 and 1023  which in this case is 5 volts
  voltage2= (5./1023.)*readVal;  //formula to get value in vols and not just the value
  Serial.println(voltage2);
  delay(delayTime);
}
