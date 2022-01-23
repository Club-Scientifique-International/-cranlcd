#include <LiquidCrystal.h>

  // initialisation, on définit les ports pour RS, E et D4 à D7
LiquidCrystal lcd = LiquidCrystal ( 2, 3, 4, 5, 6, 7 ) ;

void setup() {
    // indique le nombre de caractères (16) et de lignes (2)
  lcd.begin(16, 2);
    // affiche le message
  lcd.print("Bonjour à tous !");
    // va au début de la seconde ligne et affiche un nouveau texte
  lcd.setCursor(0, 1);
  lcd.print("Ca va ?");
}

void loop() {
}
