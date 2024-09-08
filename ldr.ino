#include<Wire.h>
#define LDRPin A1
int led=7;


void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(LDRPin);
  float amp = sensorValue*(5000 / 1024.0);
  delay(1000);
  Serial.print("Amp: ");
  Serial.println(amp);
  if(amp>300)
     digitalWrite(led,HIGH);
  else
    digitalWrite(led,LOW);
}
