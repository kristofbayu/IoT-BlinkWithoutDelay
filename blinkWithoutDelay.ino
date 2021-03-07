int pinMerah = 2;
int pinKuning = 4;
int pinHijau = 5;

bool hijau;
bool merah;
bool kuning;

long mulai = 0;
long interval = 20000;
void setup() {
  // put your setup code here, to run once:
  pinMode(pinMerah, OUTPUT);
  pinMode(pinKuning, OUTPUT);
  pinMode(pinHijau, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long waktu = millis();
  unsigned long sisaWaktu = waktu - mulai;
  if (sisaWaktu > interval){
    mulai = waktu;
  }
  
  //jalan 1
  if (sisaWaktu < 4000){
        merah = LOW;             
        kuning = LOW;            
        hijau = HIGH;   
        }
      if (sisaWaktu > 4000 && sisaWaktu < 5000 ){
        merah = LOW;             
        kuning = HIGH;           
        hijau = LOW;   
        }
      if (sisaWaktu > 5000  ){
        merah = HIGH;             
        kuning = LOW;            
        hijau = LOW;   
        }
        //code jalan 1
        
        digitalWrite(pinMerah,merah);
        digitalWrite(pinHijau,hijau);
        digitalWrite(pinKuning,kuning);
  

}
