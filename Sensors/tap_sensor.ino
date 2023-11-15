const int piezoPin = 8; // Connect the piezo element to digital pin 2
int threshold = 100;   // Adjust this threshold value for your specific setup

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = digitalRead(piezoPin);
  if (sensorValue == HIGH) {
    // A tap is detected when the sensor goes from LOW to HIGH
    Serial.println("Tap detected!");
    delay(100); // To debounce and avoid multiple detections
  
}
}



