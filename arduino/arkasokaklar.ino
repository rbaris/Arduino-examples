int buzzer = 9; //Buzzer modülünün bağlı olduğu pini tanımlıyoruz
 
//Buzzer modülünden gelen ses verilerini incelik kalınlık duruma göre notalarına ayırarak belirtiyoruz.
int kalindo = 261;
int re = 293;
int mi = 331;
int fa = 350;
int sol = 392;
int la = 440;
int si = 494;
 
void setup()
{
  pinMode(buzzer,OUTPUT); //Buzzer pinini bir çıkış türü olduğunu belirtiyoruz.
}
 
void loop()
{
  tone(buzzer, la);
  delay(300);
  noTone(buzzer);
  delay(10);
 
  tone(buzzer, la);
  delay(400);
  noTone(buzzer);
  delay(10);
 
  tone(buzzer, mi);
  delay(150);
  noTone(buzzer);
  delay(10);
 
  tone(buzzer, fa);
  delay(150);
  noTone(buzzer);
  delay(10);
 
  tone(buzzer, re);
  delay(150);
  noTone(buzzer);
  delay(10);
 
  tone(buzzer, mi);
  delay(150);
  noTone(buzzer);
  delay(100);
 
  tone(buzzer, la);
  delay(300);
  noTone(buzzer);
  delay(10);
 
  tone(buzzer, la);
  delay(400);
  noTone(buzzer);
  delay(10);
 
  tone(buzzer, mi);
  delay(150);
  noTone(buzzer);
  delay(10);
 
  tone(buzzer, re);
  delay(150);
  noTone(buzzer);
  delay(10);
 
  tone(buzzer, sol);
  delay(150);
  noTone(buzzer);
  delay(10);
 
  tone(buzzer, fa);
  delay(150);
  noTone(buzzer);
  delay(100);
 
 
  delay(100);
}