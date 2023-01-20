void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(8) == HIGH){
    Serial.println("Hello World!");
  }
  if (digitalRead(8) == LOW) {
    Serial.println("It's 2023");
  }
}
