void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);

  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
}
