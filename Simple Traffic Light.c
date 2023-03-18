void setup() {
  pinMode(2, OUTPUT); // set red LED pin as output
  pinMode(3, OUTPUT); // set yellow LED pin as output
  pinMode(4, OUTPUT); // set green LED pin as output
}

void loop() {
  digitalWrite(2, HIGH); // turn on red LED
  delay(5000); // wait for 5 seconds

  digitalWrite(2, LOW); // turn off red LED
  digitalWrite(3, HIGH); // turn on yellow LED
  delay(2000); // wait for 2 seconds

  digitalWrite(3, LOW); // turn off yellow LED
  digitalWrite(4, HIGH); // turn on green LED
  delay(5000); // wait for 5 seconds

  digitalWrite(4, LOW); // turn off green LED
  digitalWrite(3, HIGH); // turn on yellow LED
  delay(2000); // wait for 2 seconds

  digitalWrite(3, LOW); // turn off yellow LED
}
