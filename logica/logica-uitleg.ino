
Bas on Tech - Logica
Deze les is onderdeel van de lessen op https://arduino-lessen.nl
 
(c) Copyright 2018 - Bas van Dijk / Bas on Tech
Deze code en inhoud van de lessen mag zonder schriftelijke toestemming 
niet voor commerciele doeleinden worden gebruikt

YouTube:    https://www.youtube.com/c/BasOnTechNL
Facebook:   https://www.facebook.com/BasOnTechChannel
Instagram:  https://www.instagram.com/BasOnTech
Twitter:    https://twitter.com/BasOnTech

---------------------------------------------------------------------------



>> WAARHEIDSTABELLEN

NOT:
p | !p |
--------
T | F  |
F | T  |

AND:
p | q | p && q
--------------
T | T | T
T | F | F
F | T | F
F | F | F

OR:
p | q | p || q
--------------
T | T | T
T | F | T
F | T | T
F | F | F

  

>> COMBINATIES

T && T && F = F
T && T && T = T
F && F && T = T

NOT gaat boven AND
AND gaat boven OR

true && (true || false) = true
(true && true) || false = true

true || (true || false) = true
(true || true) && false = false
true || true && false = true


>> VOORBEELDEN UIT DE PRAKTIJK

buttonState = HIGH
buttonStateLongPress = true
buttonPressDuration = 10000
minButtonLongPressDuration = 500

if (buttonState == HIGH && !buttonStateLongPress && buttonPressDuration >= minButtonLongPressDuration)
   |------ TRUE ------|    |------ FALSE ------|    |------------------- TRUE -----------------------|

   |------------------ FALSE ------------------|    |------------------- TRUE -----------------------|

   |---------------------------------------- FALSE --------------------------------------------------|

