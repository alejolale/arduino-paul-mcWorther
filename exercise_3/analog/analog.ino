int redPin=9;

/*
values to analog
0 - 255
0= 0 volts
255. = 5volts

125 = 2,5 volts aprox
*/

int brightest=255; // same as HIGH
int off=0; // same as LOW
int basic=1;
int medium= 125; // medium value this will display in medium the brightness of the LED

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin, off); 
  delay(500);

  analogWrite(redPin, basic); 
  delay(500);

  analogWrite(redPin, medium); 
  delay(500);

  analogWrite(redPin, brightest); 
  delay(500);
}
