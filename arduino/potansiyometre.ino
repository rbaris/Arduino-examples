#define potpin A0

int deger=0;
float gerilim=0;
void setup() {
  
  Serial.begin(9600);
  Serial.println("Pot deger okuma");  

}

void loop() {

  deger = analogRead(potpin);
  gerilim = (5.00/1024.00)*deger;
  Serial.println(gerilim);
  delay(300);
  

}