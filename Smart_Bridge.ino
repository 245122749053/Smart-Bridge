// Intelligent Sensor Based Smart Bridge
const int sensorPin = A0; 
const int ledPin = 13;
const int buzzer = 7; // optional buzzer

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  int value = analogRead(sensorPin);
  float voltage = value * (5.0 / 1023.0);

  Serial.print("Bridge Sensor Value: ");
  Serial.println(voltage);

  // When vibration/stress is high
  if (voltage > 2.5) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzer, HIGH);
    Serial.println("⚠️ ALERT: Bridge Stress Detected!");
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(500);
}
