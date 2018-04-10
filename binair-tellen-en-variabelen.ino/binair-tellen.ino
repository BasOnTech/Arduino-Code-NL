/*
 * Bas on Tech - Logica
 * Deze les is onderdeel van de lessen op https://arduino-lessen.nl
 *  
 * (c) Copyright 2018 - Bas van Dijk / Bas on Tech
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
 *
 * DECIMAAL (10) TELLEN
 * 
 * 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ... 0 0 1 1 1
 * 0 0 0 0 0 0 0 0 0 0 1 1 1 1 1 ... 9 9 0 0 0
 * 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 ... 8 9 0 1 2
 * 
 * Octaal (8)
 * Hexadecimaal (16)
 * 
 * BINAIR (2) TELLEN
 * 
 * 0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1  
 * 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1
 * 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1
 *  
 * Bi = twee
 * Twee mogelijkheden: 1 / 0, true / false, aan / uit
 * 
 * 2^0 = 1             = 1
 * 2^1 = 2             = 2 
 * 2^2 = 2 * 2         = 4
 * 2^3 = 2 * 2 * 2     = 8
 * 2^4 = 2 * 2 * 2 * 2 = 16
 * ...
 * 2^8  = 2^8  = 256
 * 2^16 = 2^16 = 65.565
 * 2^32 = 2^32 = 4.294.967.295
 * 
 * 0  0000
 * 1  0001
 * 2  0010
 * 3  0011
 * 4  0100
 * 5  0101
 * 6  0110
 * 7  0111
 * 8  1000
 * 
 * 
 * BINAIR NAAR DECIMAAL
 * 
 * 10110101
 * 
 * van rechts naar links:
 * 2^0 = 1 =   1 
 * 2^1 = 0 =   0
 * 2^2 = 1 =   4
 * 2^3 = 0 =   0
 * 2^4 = 1 =  16
 * 2^5 = 1 =  32
 * 2^6 = 0 =   0 
 * 2^7 = 1 = 128
 * -------------
 *           181
 * 
 */


void setup() {
}

void loop() {
}
