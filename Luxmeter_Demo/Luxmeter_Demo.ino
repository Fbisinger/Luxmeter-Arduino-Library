/* ============================================
Arduino Luxmeter - Sensor Bibliothek

------------2018 F.Bisinger--------------------

Diese Bibliothek konvertiert die Analogen 
Eingangswerte eines LDR in Lux - Werte

===============================================
*/
#include "Luxmeter.h"
Luxmeter Demo_Sensor;
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(Demo_Sensor.getLux(3)); /* LDR im Spannungsteiler (5K Ohm Widerstand) an Analog Pin 3 WICHTIG!! GND auf der Seite des 5K Ohm Widerstandes und 5V auf der Seite des LDR anschließen*/
  Serial.println(" lux");
  delay(100);
}
