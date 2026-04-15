void setup() {
  Serial.begin(115200);   
  delay(1000);

  Serial.println("Send character 'A' From Real Term");
}

void loop() {

  if (Serial.available()) {

    char receivedChar = Serial.read();  


    if (receivedChar == '\r' || receivedChar == '\n') {
      return;   // skip this loop iteration
    }

    Serial.print("Received: ");
    Serial.println(receivedChar);

    // Check for 'A'
    if (receivedChar == 'A') {
      Serial.println("You sent A!");
    }
  }
}