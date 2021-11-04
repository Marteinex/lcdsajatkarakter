#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3f, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

                                                                   //https://maxpromer.github.io/LCD-Character-Creator/ karekter kreátor

byte mosoly[8]={       //olyan, mint az int csak kevesebb tárhely áll rendelkezésre
B00000,                //lcd egy kijelzőjének 5 sora és 8 oszlopa van, B betű a byte-ot jelöli
B00000,
B01010,
B01010,
B00000,
B10001,
B10001,
B01110  
  };   
void setup() {
  lcd.begin(2,16);             //lcdnek meghatározzuk az oszlopainak és sorainak számát
  lcd.createChar(1, mosoly);   //a mosolyt az 1-es karakterhez hozzárendeli
  lcd.clear();
  lcd.write(1);
  lcd.write(9);
}

void loop() {
  

}
