int led1 = 12;
int led2 = 11;
int led3 = 10;
int led4 = 9;
int led5 = 7;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);

}

void loop() {
  digitalWrite(led1, 1);
  delay(100);
  digitalWrite(led2, 1);
  delay(100);
  digitalWrite(led3, 1);
  delay(100);
  digitalWrite(led4, 1);
  delay(100);
  digitalWrite(led5, 1);
  delay(100);
  digitalWrite(led1, 0);
  delay(200);
  digitalWrite(led2, 0);
  delay(200);
  digitalWrite(led3 , 0);
  delay(200);
  digitalWrite(led4, 0);
  delay(200);
  digitalWrite(led5, 0);
  delay(200);

}
