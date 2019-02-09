int durataSemaforo;
int durataG;
int lampeggio;
int numlampeggi;
int rosso1 = 13;
int resto;
int giallo1 = 12;
int verde1 = 11;
int verde2 = 4;
int giallo2 = 3;
int rosso2 = 2;
void setup() {
pinMode(rosso1, OUTPUT);
pinMode(giallo1, OUTPUT);
pinMode(verde1, OUTPUT);
pinMode(verde2, OUTPUT);
 pinMode(giallo2, OUTPUT);
  pinMode(rosso2, OUTPUT);
    Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT); 
  pinMode(2, OUTPUT); 
  // put your setup code here, to run once:  
}
void loop() {
  // put your main code here, to run repeatedly:
 Serial.println("Inserire la durata del semaforo");
  while(Serial.available() == 0) {}
  durataSemaforo = Serial.readString().toInt();
 Serial.println(durataSemaforo); 
  Serial.println("Inserire la durata del giallo");
  while(Serial.available() == 0) {}
  durataG = Serial.readString().toInt();
  Serial.println(durataG);
  Serial.println("Inserire il delay del lampeggio");
  while(Serial.available() == 0) {}
  lampeggio = Serial.readString().toInt();
  Serial.println(lampeggio);
    Serial.println("Inserire il numero di lampeggi");
  while(Serial.available() == 0) {}
  numlampeggi = Serial.readString().toInt();
  Serial.println(numlampeggi);
 resto = durataSemaforo/2 - 2*durataG; 
 fase1();
 fase2();
 fase3();
 fase4();  
  }
  void fase1()
{
  digitalWrite(rosso1, HIGH);
  digitalWrite(verde2, HIGH);
  delay(resto);
  lampeggio2();
}

void fase2()
{
  digitalWrite(giallo1, HIGH);
  digitalWrite(giallo2, HIGH);
  delay(durataG);
}

void fase3()
{
  digitalWrite(rosso1, LOW);
  digitalWrite(giallo1, LOW);
  digitalWrite(giallo2, LOW);
  digitalWrite(rosso2, HIGH);
  digitalWrite(verde1, HIGH);
  delay(resto);
  lampeggio1();
}

void fase4()
{
  digitalWrite(giallo2, HIGH);
  digitalWrite(giallo1, HIGH);
  delay(durataG);
  digitalWrite(rosso2, LOW);
  digitalWrite(giallo2, LOW);
  digitalWrite(giallo1, LOW);
}

void lampeggio1()
{
  for(int i = 0; i < numlampeggi;i++)
  {
    digitalWrite(verde1, LOW);
    delay(lampeggio);
    digitalWrite(verde1, HIGH);
    delay(lampeggio);
  }
  digitalWrite(verde1, LOW);
}

void lampeggio2()
{
  Serial.println(numlampeggi);
for(int i = 0; i < numlampeggi;i++)
  {
    digitalWrite(verde2, LOW);
    delay(lampeggio);
    digitalWrite(verde2, HIGH);
    delay(lampeggio);
  }
  digitalWrite(verde2, LOW);
}
void controllo 
