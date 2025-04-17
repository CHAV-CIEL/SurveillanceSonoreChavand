#include <Arduino.h>
#include "Wire.h"
#include "SSD1306.h"

// put function declarations here:
int myFunction(int, int);

SSD1306 ecranOled(0x3c, 5, 4); 

void setup() {

  // put your setup code here, to run once:
  /*
  Serial.begin(115200);

  int result = myFunction(2, 3);
 */

  // put your setup code here, to run once:
   // Initialisation du système graphique
ecranOled.init();
// Nettoyage de l'écran
ecranOled.clear();

// Définition de la police
ecranOled.setFont("Arial");

// Affichage du texte de présentation
ecranOled.drawString(1, 2, "Nom de l'application : ArduinoJson");
ecranOled.drawString(2, 4, "Version : 7.2.0");

// Rafraîchissement de l'affichage
ecranOled.display();


}

void loop() {
  Serial.print("message");// put your main code here, to run repeatedly:
  sleep(1);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}

