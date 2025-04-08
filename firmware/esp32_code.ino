// ESP32 Home Automation Code
// Controls 2 LEDs connected to GPIO5 and GPIO18
// Local control using Serial or App

#define LED1 5    // GPIO5
#define LED2 18   // GPIO18

void setup() {
  Serial.begin(115200);        // Start serial communication
  pinMode(LED1, OUTPUT);       // Set LED1 pin as output
  pinMode(LED2, OUTPUT);       // Set LED2 pin as output

  // Turn off both LEDs at start
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  
  Serial.println("ESP32 Home Automation Ready!");
  Serial.println("Send 'on1', 'off1', 'on2', or 'off2' to control LEDs");
}

void loop() {
  if (Serial.available()) {
    String command = Serial.readStringUntil('\n');
    command.trim(); // Remove whitespace

    if (command == "on1") {
      digitalWrite(LED1, HIGH);
      Serial.println("LED1 ON");
    } else if (command == "off1") {
      digitalWrite(LED1, LOW);
      Serial.println("LED1 OFF");
    } else if (command == "on2") {
      digitalWrite(LED2, HIGH);
      Serial.println("LED2 ON");
    } else if (command == "off2") {
      digitalWrite(LED2, LOW);
      Serial.println("LED2 OFF");
    } else {
      Serial.println("Invalid command");
    }
  }
}

