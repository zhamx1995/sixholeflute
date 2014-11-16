/*
  sixholeflute
 
 Demonstrates the finger position when playing a 6-hole flute. 
 
 To see this sketch in action, open the Serial monitor and send any character.
 The characters a through t will turn on LEDs. Any other character will turn
 the LEDs off. Below is the corresponding note for each character.
 low:a, b, c
     so,la,si
 normal:d, e, f, g,  h, i,  j, k, l
        do,re,mi,fa,#fa,so,#so,la,si
 high:m, n, o, p,  q, r,  s, t
      do,re,mi,fa,#fa,so,#so,la
      
 The circuit:
 * 6 LEDs attached to digital pins 2 through 7, each connects a 2000-ohm 
 resistor in series and the 6 branches connect in parallel.
 light on: cover the hole with finger
 light off: leave hole open
 light blink 3 times: cover half the hole with finger
 
 created 16 Nov. 2014
 by Mingxuan Zha
 
*/

void setup() {
  // initialize serial communication:
  Serial.begin(9600); 
   // initialize the LED pins:
      for (int thisPin = 2; thisPin < 7; thisPin++) {
        pinMode(thisPin, OUTPUT);
      } 
}

void loop() {
  // read the sensor:
  if (Serial.available() > 0) {
    int inByte = Serial.read();
    switch (inByte) {
    case 'a':
        for (int thisPin = 2; thisPin < 7; thisPin++) {
        digitalWrite(thisPin, HIGH);
      }  
      digitalWrite(7,HIGH);
      break;
    case 'b':    
          for (int thisPin = 3; thisPin < 8; thisPin++) {
        digitalWrite(thisPin, HIGH);
      }
      digitalWrite(2,LOW);
      break;
    case 'c': 
       for (int thisPin = 4; thisPin < 8; thisPin++) {
        digitalWrite(thisPin, HIGH);
       }
       digitalWrite(2,LOW);
       digitalWrite(3,LOW);
      break;
    case 'd':
       for (int thisPin = 2; thisPin < 5; thisPin++) {
        digitalWrite(thisPin, LOW);
      }       
       for (int thisPin = 5; thisPin < 8; thisPin++) {
        digitalWrite(thisPin, HIGH);
      }   
      break;
    case 'e': 
        for (int thisPin = 2; thisPin < 6; thisPin++) {
        digitalWrite(thisPin, LOW);
      }     
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      break;
    case 'f':
      for (int thisPin = 2; thisPin < 7; thisPin++) {
        digitalWrite(thisPin, LOW);
      }     
      digitalWrite(7,HIGH);
      break;
        case 'g':
        for (int thisPin = 2; thisPin < 8; thisPin++) {
        digitalWrite(thisPin, LOW);
        }
  digitalWrite(7, HIGH);   
  delay(1000);              
  digitalWrite(7, LOW);    
  delay(1000); 
    digitalWrite(7, HIGH);   
  delay(1000);              
  digitalWrite(7, LOW);    
  delay(1000); 
    digitalWrite(7, HIGH);   
  delay(1000);              
  digitalWrite(7, LOW);    
  delay(1000); 
  break;
        case 'h':
        digitalWrite(2,HIGH);
        digitalWrite(3,HIGH);
        digitalWrite(5,HIGH);
        digitalWrite(6,HIGH);
        digitalWrite(4,LOW);
        digitalWrite(7,LOW);
        break;
        case 'i':
        for (int thisPin = 2; thisPin < 7; thisPin++) {
        digitalWrite(thisPin, HIGH);
      }  
      digitalWrite(7,HIGH);
      break;
      case 'j':
      for (int thisPin = 2; thisPin < 7; thisPin++) {
        digitalWrite(thisPin, HIGH);
      }  
      digitalWrite(7,LOW);
      break;
      case 'k':
      for (int thisPin = 3; thisPin < 8; thisPin++) {
        digitalWrite(thisPin, HIGH);
      }  
      digitalWrite(2,LOW);
      break;  
      case 'l':
      for (int thisPin = 4; thisPin < 8; thisPin++) {
        digitalWrite(thisPin, HIGH);
      }  
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      break;
      case 'm':
      for (int thisPin = 2; thisPin < 5; thisPin++) {
        digitalWrite(thisPin, LOW);
      }  
      for (int thisPin = 5; thisPin < 8; thisPin++) {
        digitalWrite(thisPin, HIGH);
      }  
      break;
      case 'n':
      for (int thisPin = 2; thisPin < 6; thisPin++) {
        digitalWrite(thisPin, LOW);
      }     
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      break;
      case 'o':
       for (int thisPin = 2; thisPin < 7; thisPin++) {
        digitalWrite(thisPin, LOW);
      }    
        digitalWrite(7, HIGH);
      break;
     case 'p':
       for (int thisPin = 2; thisPin < 8; thisPin++) {
        digitalWrite(thisPin, LOW);
        }
  digitalWrite(7, HIGH);   
  delay(1000);              
  digitalWrite(7, LOW);    
  delay(1000); 
   digitalWrite(7, HIGH);   
  delay(1000);              
  digitalWrite(7, LOW);    
  delay(1000); 
    digitalWrite(7, HIGH);   
  delay(1000);              
  digitalWrite(7, LOW);    
  delay(1000); 
  break;
       case 'q':
        digitalWrite(2,HIGH);
        digitalWrite(3,HIGH);
        digitalWrite(4,HIGH);
        digitalWrite(6,HIGH);
        digitalWrite(5,LOW);
        digitalWrite(7,LOW);
        break;
        case 'r':
       for (int thisPin = 2; thisPin < 7; thisPin++) {
        digitalWrite(thisPin, HIGH);
      }  
      digitalWrite(7,LOW);
      break;
      case 's':
        digitalWrite(5,HIGH);
        digitalWrite(6,HIGH);
        digitalWrite(4,LOW);
        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(7,LOW);
      break;
      case 't':
        digitalWrite(6,HIGH);
        digitalWrite(4,HIGH);
        digitalWrite(5,LOW);
        digitalWrite(2,LOW);
        digitalWrite(3,HIGH);
        digitalWrite(7,HIGH);
      break;
    default:
      // turn all the LEDs off:
      for (int thisPin = 2; thisPin < 8; thisPin++) {
        digitalWrite(thisPin, LOW);
      }
    } 
  }
}
