int redLed = D2;
int greenLed = D7;
int button = D0;
int temp = 0;

void setup() {
  Serial.begin(115200);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  temp = digitalRead(button);

    if (temp == HIGH) {
      digitalWrite(redLed, HIGH);
      digitalWrite(greenLed, LOW);
      Serial.println("LED turned ON");
      delay(60000);
    }
    else {
      digitalWrite(redLed, LOW);
      digitalWrite(greenLed, HIGH);
      Serial.println("LED turned OFF");
      delay(100);
    }
}
