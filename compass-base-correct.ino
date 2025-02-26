#include <Wire.h>
#include <QMC5883LCompass.h>

QMC5883LCompass compass;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  compass.init();
}

void loop() {
  int x, y, z;
  compass.read();
  x = compass.getX();
  y = compass.getY();
  z = compass.getZ();
  
  /*Serial.print("X: ");
  Serial.print(x);
  Serial.print(" Y: ");
  Serial.print(y);*/
  Serial.print(" Z: ");
  Serial.println(z);

  delay(500);
}

