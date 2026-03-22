// LAB 1 - VARIACIÓN: Parpadeo con patrón personalizado (Morse)
const int LED = 13;

void dot() { digitalWrite(LED,HIGH); delay(200); digitalWrite(LED,LOW);
delay(200); }
void dash() { digitalWrite(LED,HIGH); delay(600); digitalWrite(LED,LOW);
delay(200); }


void space() { delay(600); }

void setup() { pinMode(LED, OUTPUT); }


void loop() {
  // C = -.-.
  dash(); dot(); dash(); dot(); space();
  // H = ....
  dot(); dot(); dot(); dot(); space();
  // E = .
  dot(); space();
  // V = ...-
  dot(); dot(); dot(); dash(); space();
  // O = ---
  dash(); dash(); dash(); 

  delay(2000);
}