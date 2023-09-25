int led_pin1 = 13;
int led_pin2 = 12;
int waitTime = 50;

void setup() {


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_pin1,HIGH);
  delay(waitTime);
  digitalWrite(led_pin1,LOW);
  delay(waitTime);
/*delay time in milliseconds*/


  digitalWrite(led_pin2,HIGH);
  delay(waitTime);
  digitalWrite(led_pin2,LOW);
  delay(waitTime);
} 