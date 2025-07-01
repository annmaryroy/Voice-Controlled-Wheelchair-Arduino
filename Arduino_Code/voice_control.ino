char t;

const int trigPin = 12;
const int echoPin = 13;
byte GetValue;

void setup() {
  pinMode(4, OUTPUT); // left motors forward
  pinMode(3, OUTPUT); // left motors reverse
  pinMode(5, OUTPUT); // right motors forward
  pinMode(6, OUTPUT); // right motors reverse
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

byte ReadOneByte() {
  int ByteRead;
  while (!Serial.available());
  ByteRead = Serial.read();
  return ByteRead;
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  long distance = duration * 0.034 / 2;
  Serial.println("Distance: ");
  Serial.println(distance);

  if (Serial.available()) {
    t = Serial.read();
    Serial.println(t);
  }

  if (t == '1') {
    if (distance < 20) {
      stopAll();
    } else {
      forward();
    }
  } else if (t == '2') {
    backward();
  } else if (t == '3') {
    right();
  } else if (t == '4') {
    left();
  } else if (t == '5') {
    stopAll();
  }

  delayMicroseconds(100);
}

void forward() {
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  Serial.println("Forward");
}

void backward() {
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  Serial.println("Backward");
}

void right() {
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  Serial.println("Right");
}

void left() {
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  Serial.println("Left");
}

void stopAll() {
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  Serial.println("Stop All");
}
