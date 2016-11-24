int ValordelSensor;
int ValorMinimoSensor = 1023;
int ValorMaximoSensor = 0;
const int PinLed = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(PinLed,13);
  digitalWrite(PinLed,HIGH);
  while(millis() < 5000) {
    ValordelSensor = analogRead(A0);
    if(ValordelSensor > ValorMaximoSensor) {
      ValorMaximoSensor = ValordelSensor;
    }
    if(ValordelSensor < ValorMinimoSensor) {
      ValorMinimoSensor = ValordelSensor;
    }
  }
  digitalWrite(PinLed,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  ValordelSensor = analogRead(A0);
  int tono = map(ValordelSensor,ValorMinimoSensor,ValorMaximoSensor,50,4000);
  tone(8,tono,20);
  delay(10);
}
