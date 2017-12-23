int ledPin = A0;
int potPin = A1;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(potPin);
  Serial.println(val);
  delay(300);
}
