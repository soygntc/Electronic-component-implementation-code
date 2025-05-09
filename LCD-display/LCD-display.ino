/********************************************************
 * Componente: Display LCD
 * Autora: Giulianna Torres Campodónico
 ********************************************************/
#include <LiquidCrystal.h> // include the library code

// associate any required LCD interface pins with the Arduino pin number to which they are connected
int rs= 12, e= 11, d4= 5, d5= 4, d6= 3, d7= 2; 
int number= 1;

LiquidCrystal lcd(rs, e, d4, d5, d6, d7);

void setup() {
  lcd.begin(20, 4); // LCDs number of rows and columns 
  lcd.print("Hola mundo");

}

void loop() {
  lcd.setCursor(0,1); // set the cursor to column 0, line 1 (the second row)
  lcd.print(number);
  number++;
  delay(500);
  
  //lcd.clear()

}
