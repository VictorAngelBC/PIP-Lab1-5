// LAB 3: Sensor de Luz KY-018
// Sistema de iluminación automática
const int LDR_PIN = A0;
const int LED_PIN = 9;
const int UMBRAL = 400;  // Umbral de oscuridad (ajustar según ambiente)
void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Sensor\tPorcentaje\tEstado");
}
// Variación: brillo del LED inversamente proporcional a la luz
// (más oscuro = LED más brillante)
void loop() {
  int raw = analogRead(LDR_PIN);
  int brillo = map(raw, 0, 1023, 255, 0);  // Invertido
  analogWrite(LED_PIN, brillo);            // PWM en pin 9
  Serial.println(raw);
  delay(100);
}
}