#define k_led 11
#define y_led 10
#define m_led 9

void setup() {
  pinMode(k_led,OUTPUT);
  pinMode(y_led,OUTPUT);
  pinMode(m_led,OUTPUT);
}

void loop() {
  //mavi yanar sebebi ise (r,g,b) = (255,255,0) tam tersi çalışır (0,0,255) de mavidir. devre bu şekildeyken ters mantıkla çalışır. 
  
  digitalWrite(k_led,255-0); 
  digitalWrite(y_led,255-0);
  digitalWrite(m_led,255-255);
  
}