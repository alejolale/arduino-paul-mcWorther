int j=1;
int waitT=750;
int x=3;
int y=7;
int z;
String myString="j = ";
String somme= " + ";
float pi= 3.14;
float r=2;
float area;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*Serial.print(myString);
  Serial.println(j);
  j=j+1;
  */

  /*z = x+y;
  Serial.print(x);
  Serial.print(somme);
  Serial.print(y);
  Serial.print(" = ");
  Serial.println(z);*/
  area= pi*r*r;
  Serial.print("A circle with radius ");
  Serial.print(r);
  Serial.print(" Has an area of : ");
  Serial.print(area);
  Serial.println(".");
  delay(waitT);
  r = r+.5;
}
