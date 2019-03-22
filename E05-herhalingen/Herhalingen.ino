/* 
 * Bas on Tech - Herhalen
 * Deze les is onderdeel van de lessen op https://arduino-lessen.nl
 *  
 * (c) Copyright 2019 - Bas van Dijk / Bas on Tech
 * Deze code en inhoud van de lessen mag zonder schriftelijke toestemming 
 * niet voor commerciele doeleinden worden gebruikt
 * 
 * YouTube:    https://www.youtube.com/c/BasOnTechNL
 * Facebook:   https://www.facebook.com/BasOnTechChannel
 * Instagram:  https://www.instagram.com/BasOnTech
 * Twitter:    https://twitter.com/BasOnTech
 * 
 * ---------------------------------------------------------------------------
 * 
 */

////////// FOR LOOPS /////////////////////////////////////////////////////////

/* 
 * Type:        for loop
 * Controle:    vooraf
 * Print:       0 1 2 3 4 5 6 7 8 9 10
 */ 
void loop() {
  for (int i = 0; i <= 10; i++) {
    Serial.println(i); 
  }
}

/* 
 * Type:        for loop
 * Controle:    vooraf
 * Print:       0 2 4 6 8 10 
 */
void loop() {
  for (int i = 0; i <= 10; i = i + 2) {
    Serial.println(i); 
  }
}

/* 
 * Type:        for loop
 * Controle:    vooraf
 * Print:       10 9 8 7 6 5 4 3 2 1 0
 */ 
void loop() {
  for (int i = 10; i >= 0; i--) {
    Serial.println(i); 
  }
}


/* 
 * Type:        for loop
 * Controle:    vooraf
 * Print:       even oneven even oneven even oneven ...
 */             
void loop() {
  for (int i = 0; i <= 10; i++) {
    if (i % 2 == 0) {
        Serial.println('even');
    } else {
        Serial.println('oneven');
    }
  }
}


////////// WHILE LOOPS ////////////////////////////////////////////////////

/* 
 * Type:        while loop
 * Controle:    vooraf
 * Print:       0 1 2 3 4 5 6 7 8 9 10
 */             
void loop() {
    int i = 0;
    while (i <= 10) {
        Serial.println(i);
        i++;
    }
}

/* 
 * Type:        while loop
 * Controle:    acheraf
 * Print:       0 1 2 3 4 5 6 7 8 9    <--- 10 ontbreekt!
 */             
void loop() {
    int i = 0;
    do {
        Serial.println(i);
        i++;
    } while (i <= 10);
}


////////// CONTROLEER LOOP ////////////////////////////////////////////////////

/* 
 * Type:        for loop
 * Controle:    vooraf
 * Print:       0 1 2 3 4 5   <--- breekt op 5
 */ 
void loop() {
  for (int i = 0; i <= 10; i++) {
    Serial.println(i);

    if (i == 5) {
        break;
    }
  }
  
}


/* 
 * Type:        for loop
 * Controle:    vooraf
 * Print:       0 1 2 3 4 6 7 8 9 10   <--- slaat 5 over
 */ 
void loop() {
  for (int i = 0; i <= 10; i++) {

    if (i == 5) {
        continue;
    }

    Serial.println(i);
  }
}


////////// VALKUILEN ////////////////////////////////////////////////////


/* 
 * Type:        while loop
 * Controle:    vooraf
 * Print:       0 1 2 3 4 5 6 7 8 9 10 ...
 */             
void loop() {
    int i = 0;
    while (true) {
        Serial.println(i);
        i++;
    }
}

/* 
 * Type:        for loop
 * Controle:    vooraf
 * Print:       
 */ 
void loop() {
  for (int i = 20; i <= 10; i++) {
    Serial.println(i);
  }
}
