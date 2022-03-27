#define echopin 7
#define trigpin 6
#define buzzer 8

int maxrange = 50;
int minrange = 0;

void setup() {

  pinMode(buzzer,OUTPUT);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);

}

void loop() {

  int olcum = mesafe(maxrange,minrange);
  
  melodi(olcum * 10); 
  
}
int mesafe(int maximumrange, int minimumrange){

  long duration,distance ;

  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(2);
  digitalWrite(trigpin,LOW);

  duration = pulseIn(echopin,HIGH);
  distance = duration / 58.2 ; //cm cinsine dönüştü.
  delay(50);

  if(distance >= maximumrange || distance <= minimumrange)
    return 0;
    
  return distance;   
}
int melodi(int gecikme){
    
      tone(buzzer,330);
      delay(gecikme);
      noTone(buzzer);
      delay(gecikme);
            
}
