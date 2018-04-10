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
 */

/**** OEFENINGEN IF *********************************************************/

// Oefening 1
bool p = true;
bool q = false;

if (p) {
    Serial.println('1');
} else {
    Serial.println('2');
}

// Oefening 2
bool p = false;
bool q = true;

if (p) {
    Serial.println('1');
} else if (q) {
    Serial.println('2');
} else {
    Serial.println('3');
}


/**** OEFENINGEN NOT *********************************************************/

// Oefening 3
bool p = false;
bool q = true;

if (!p) {
    Serial.println('1');
} else if (q) {
    Serial.println('2');
} else {
    Serial.println('3');
}


// Oefening 4
bool p = false;
bool q = true;

if (p) {
    Serial.println('1');
} else if (!!q) {
    Serial.println('2');
} else {
    Serial.println('3');
}

// Oefening 5
bool p = false;
bool q = true;

if (!!p) {
    Serial.println('1');
} else if (!q) {
    Serial.println('2');
} else {
    Serial.println('3');
}


/**** OEFENINGEN AND *********************************************************/

// Oefening 6
bool p = false;
bool q = true;

if (!p && q) {
    Serial.println('1');
} else if (q && !p) {
    Serial.println('2');
} else {
    Serial.println('3');
}

// Oefening 7
bool p = false;
bool q = true;

if (!p && !q) {
    Serial.println('1');
} else if (q && !q) {
    Serial.println('2');
} else {
    Serial.println('3');
}

// Oefening 8
bool p = true;
bool q = true;

if (!p && !q && p) {
    Serial.println('1');
} else if (p && !q) {
    Serial.println('2');
} else {
    Serial.println('3');
}

// Oefening 9
bool p = true;
bool q = true;
bool r = false;

if (!p && q && r) {
    Serial.println('1');
} else if (q && !r) {
    Serial.println('2');
} else {
    Serial.println('3');
}


/**** OEFENINGEN OR **********************************************************/

// Oefening 10
bool p = true;
bool q = true;

if (!p || q) {
    Serial.println('1');
} else if (q) {
    Serial.println('2');
} else {
    Serial.println('3');
}

// Oefening 11
bool p = true;
bool q = true;

if (!p || !q) {
    Serial.println('1');
} else if (!q || p) {
    Serial.println('2');
} else {
    Serial.println('3');
}


/**** OEFENINGEN GEMENGD *****************************************************/

// Oefening 12
bool p = true;
bool q = false;
bool r = true;

if (!p || !q && r) {
    Serial.println('1');
} else if (!r || p) {
    Serial.println('2');
} else {
    Serial.println('3');
}

// Oefening 13
bool p = true;
bool q = false;
bool r = true;

if (!(p || q) && !r) {
    Serial.println('1');
} else if (!r || p) {
    Serial.println('2');
} else {
    Serial.println('3');
}

// Oefening 14
bool p = false;
bool q = true;
bool r = true;

if (!(p || !q && r)) {
    Serial.println('1');
} else if (!q || p) {
    Serial.println('2');
} else {
    Serial.println('3');
}

// Oefening 15
bool p = false;
bool q = true;
bool r = true;

if (!(p || !q && r) || true) {
    Serial.println('1');
} else if (!q || p) {
    Serial.println('2');
} else {
    Serial.println('3');
}