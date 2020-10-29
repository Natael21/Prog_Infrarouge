#include <Arduino.h>
#include <LibRobUS.h>

void setup() {
  // put your setup code here, to run once:
  BoardInit();
  Serial.begin(9600);

}

void loop() {
  if(ROBUS_ReadIR(0) <= 680 && ROBUS_ReadIR(0) >= 180)
  {
    Serial.println("Objet !");
  }
  else
  {
    Serial.println("Rien !");
  }
}