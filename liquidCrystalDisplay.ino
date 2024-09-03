#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.setCursor(0,0);
lcd.print("KRISHNA");
lcd.setCursor(5,1);
lcd.print("is");
delay(2000);
lcd.clear();
lcd.setCursor(4,0);
lcd.print("LOVE");
lcd.setCursor(5,1);
lcd.print("MY LOVE");
}

void loop() {
  // put your main code here, to run repeatedly:

}
