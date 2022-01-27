#define trigpin 8   //NOT=DEFİNE DA ";" OLMAZ
#define echopin 7
#define buzzerpin 9
#define analogledpin 10
long sure,mesafe;
int derece;// duration-distance 

void setup(){
Serial.begin(9600);
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
pinMode(buzzerpin,OUTPUT);
}

void loop(){
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  sure=pulseIn(echopin,HIGH);// us cinsinden
  mesafe=sure/58.2;
  analogWrite(analogledpin,mesafe);
  Serial.println(mesafe);

if(mesafe>=25)
{digitalWrite(buzzerpin,HIGH);
delay(300);
digitalWrite(buzzerpin,LOW);
delay(300);}

else if(mesafe>=20){digitalWrite(buzzerpin,HIGH);
delay(200);
digitalWrite(buzzerpin,LOW);
delay(200);}

else if(mesafe>=15){digitalWrite(buzzerpin,HIGH);
delay(100);
digitalWrite(buzzerpin,LOW);
delay(100);}

else if(mesafe>=10){digitalWrite(buzzerpin,HIGH);
delay(50);
digitalWrite(buzzerpin,LOW);
delay(50);}

else if(mesafe>=5){digitalWrite(buzzerpin,HIGH);
delay(30);
digitalWrite(buzzerpin,LOW);
delay(30);}

else if(mesafe>=1){
  
  digitalWrite(buzzerpin,HIGH);
delay(10);
digitalWrite(buzzerpin,LOW);
delay(10);
}




}
