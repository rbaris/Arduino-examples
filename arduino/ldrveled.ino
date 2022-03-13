#define led 3

void setup() {
  pinMode(3,OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int isik = analogRead(A0);
  Serial.println(isik);
  delay(300);

  if(isik>400){
        digitalWrite(3,LOW);    
  }
  else{
    digitalWrite(led,HIGH);
  }
}