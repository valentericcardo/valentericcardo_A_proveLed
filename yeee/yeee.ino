int Lr1 = 13;
int Lg1 = 12;
int Lv1 = 11;
int Lr2 = 2;
int Lg2 = 3;
int Lv2 = 4;
void setup() {
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
    delay(750);

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
  digitalWrite(4, LOW);
  delay(200);
  digitalWrite(4, HIGH);
  delay(200);
  digitalWrite(4, LOW);
  delay(200);
  digitalWrite(4, HIGH);
  delay(200);
  digitalWrite(4, LOW);
  delay(200);
  digitalWrite(4, HIGH);
  delay(200);
  digitalWrite(4, LOW);
  delay(200);
  digitalWrite(4, HIGH);
  delay(200);
  digitalWrite(4, LOW);
  }
  void lampeggio1(){
  digitalWrite(11, LOW);
  delay(200);
  digitalWrite(11, HIGH);
  delay(200);
  digitalWrite(11, LOW);
  delay(200);
  digitalWrite(11, HIGH);
  delay(200);
  digitalWrite(11, LOW);
  delay(200);
  digitalWrite(11, HIGH);
  delay(200);
  digitalWrite(11, LOW);
  delay(200);
  digitalWrite(11, HIGH);
  delay(200);
  digitalWrite(11, LOW);
  delay(200);
  }
