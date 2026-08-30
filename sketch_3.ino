const int gasSensor = 34;

const int buzzer = 25;
const int redLED = 26;
const int greenLED = 27;

const int GAS_THRESHOLD = 1800;

void setup() {

  Serial.begin(115200);

  pinMode(buzzer, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  digitalWrite(buzzer, LOW);
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, HIGH);

  Serial.println("IoT Gas Alert System Started");
}

void loop() {

  int gasValue = analogRead(gasSensor);

  Serial.print("Gas Sensor Value: ");
  Serial.println(gasValue);

  if (gasValue >= GAS_THRESHOLD) {

    digitalWrite(buzzer, HIGH);
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);

    Serial.println("WARNING: Gas Level High!");

  } else {

    digitalWrite(buzzer, LOW);
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);

    Serial.println("Status: Normal");
  }

  delay(1000);
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
