#include <M5Core2.h>

void setup() {
  // put your setup code here, to run once:
  M5.begin(true, true, true, true);
  M5.Lcd.setTextSize(3);
  M5.Lcd.print("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:

}