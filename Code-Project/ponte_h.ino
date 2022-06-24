#define PWMA 11
#define AIN1 10
#define AIN2 8
#define PWMB 9
#define BIN1 7
#define BIN2 6
#define SensorLEsq 5
#define SensorLDir 4

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(PWMA,OUTPUT);
pinMode(AIN1,OUTPUT);
pinMode(AIN2,OUTPUT);
pinMode(PWMB,OUTPUT);
pinMode(BIN1,OUTPUT);
pinMode(BIN2,OUTPUT);

pinMode(SensorLEsq,INPUT);
pinMode(SensorLDir,INPUT);

analogWrite(PWMA,200);
analogWrite(PWMB,200);
}

void loop() {
  // put your main code here, to run repeatedly:

int valorSensorLEsq = digitalRead(SensorLEsq);
int valorSensorLDir = digitalRead(SensorLDir);


if(valorSensorLEsq == LOW && valorSensorLDir == LOW)
{
 digitalWrite(AIN1,HIGH); 
 digitalWrite(AIN2,LOW);
 digitalWrite(BIN1,HIGH); 
 digitalWrite(BIN2,LOW);
}

if (valorSensorLEsq == HIGH)
{
  digitalWrite(AIN1,LOW);
  digitalWrite(AIN2,HIGH);
  digitalWrite(BIN1,LOW); 
  digitalWrite(BIN2,HIGH);
  delay(333);

  digitalWrite(AIN1,HIGH);
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,LOW); 
  digitalWrite(BIN2,HIGH);
  delay(333);
} else if(valorSensorLDir == HIGH && valorSensorLEsq == LOW)
{
  digitalWrite(AIN1,LOW);
  digitalWrite(AIN2,HIGH);
  digitalWrite(BIN1,LOW); 
  digitalWrite(BIN2,HIGH);
  delay(333);

  digitalWrite(AIN1,LOW);
  digitalWrite(AIN2,HIGH);
  digitalWrite(BIN1,HIGH); 
  digitalWrite(BIN2,LOW);
  delay(333);
}


}
