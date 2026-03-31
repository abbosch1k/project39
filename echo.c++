const int trigPin = 9;
const int echoPin = 10;
const int buzzerPin = 8;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  if (distance < 50) {
    int toneFreq = map(distance, 5, 50, 2000, 200); // ближе → выше звук
    tone(buzzerPin, toneFreq);
  } else {
    noTone(buzzerPin);
  }

  delay(100);
}
