const int ldrPin = A0; // Define the analog pin where the LDR is connected

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int ldrValue = analogRead(ldrPin); // Read the LDR value (0-1023)
  int lightIntensity = map(ldrValue, 0, 1023, 0, 100); // Map the value to a percentage (0-100%)

  Serial.print("LDR Value: ");
  Serial.print(ldrValue);
  Serial.print(", Light Intensity: ");
  Serial.print(lightIntensity);
  Serial.println("%");

  delay(1000); // Wait for a second before taking another reading
}
 




