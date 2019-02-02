String appoggio;
int rosso;
int verde;
int lampeggi;
int giallo;
int Lr1 = 13;
int Lg1 = 12;
int Lv1 = 11;
int Lr2 = 2;
int Lg2 = 3;
int Lv2 = 4;
void setup() {
    Serial.begin(9600);
  pinMode(13, OUTPUT); // Primo rosso
  pinMode(12, OUTPUT); // Primo giallo
  pinMode(11, OUTPUT); // Primo verde
  pinMode(4, OUTPUT); // Secondo verde
  pinMode(3, OUTPUT); // Secondo giallo
  pinMode(2, OUTPUT); // Secondo rosso
  // put your setup code here, to run once:  
}
void loop() {
  // put your main code here, to run repeatedly:
    if (Serial.available() > 0) {
      for(int i = 0;i < 4;i++)
      {
        if(i == 0)
        {
          Serial.print("durata giallo");
          while(giallo < 0)
          {
          appoggio = Serial.readString();
  giallo = appoggio.toInt();
          }
        }
        if(i == 1)
        {
          

          appoggio = Serial.readString();
  verde = appoggio.toInt();
  Serial.print("la durata del giallo sarà "+ verde);
        }
        if(i == 2)
        {
          
          appoggio = Serial.readString();
  rosso = appoggio.toInt();
  Serial.print("la durata del giallo sarà "+ rosso);
        }if(i == 3)
        {
          
          appoggio = Serial.readString();
  lampeggi = appoggio.toInt();
  Serial.print("la durata del giallo sarà "+ lampeggi);
        }
      }
    }
    // read incoming serial data:
    // Type the next ASCII valuhe from what you received:
VOID();
VOId();
VOid();
Void();
  }
  void VOID(){
    digitalWrite(Lr1, HIGH);
    digitalWrite(Lv2, HIGH);
    delay(2500);
    lampeggio2();
  }
  void VOId() {
    digitalWrite(Lg1, HIGH);
    digitalWrite(Lg2, HIGH);
    delay(giallo);

    }   
   void VOid(){
    digitalWrite(Lr1, LOW);
    digitalWrite(Lg1, LOW);
    digitalWrite(Lg2, LOW);
    digitalWrite(Lr2, HIGH);
    digitalWrite(Lv1, HIGH);
    delay(2500);
    lampeggio1();   
  }
  void Void() {
    digitalWrite(Lg1, HIGH);
    digitalWrite(Lg2, HIGH);
    delay(750);
    digitalWrite(Lr2, LOW);
    digitalWrite(Lg1, LOW);
    digitalWrite(Lg2, LOW);
    }
void lampeggio2(){
for(int i = 0; i < lampeggi;i++)
{
  digitalWrite(Lv2, LOW);
  delay(200);
  digitalWrite(Lv2, HIGH);
  }
}
  void lampeggio1(){
for(int i = 0; i < lampeggi;i++)
{
  digitalWrite(Lv1, LOW);
  delay(200);
  digitalWrite(Lv1, HIGH);
}
  }
