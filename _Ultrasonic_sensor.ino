int echoPin =6;
int trigPin =5;
int Led =7;

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(Led, OUTPUT);
 
}
void loop() {
  long duration; //المدة
  long distance;//المسافة
  digitalWrite(trigPin, LOW);
  delay(15);
  digitalWrite(trigPin, HIGH);
  delay(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance= duration*0.034/2;
  Serial.print(distance);
  Serial.println(" cm");
  if (distance <= 150) { 
  digitalWrite(Led,HIGH);
}
 else {
    digitalWrite(Led,LOW);
 delay(500);
}
 } 
