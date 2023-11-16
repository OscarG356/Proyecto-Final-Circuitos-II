//Motores
const int BackL = 13;
const int FwrL = 12;
const int BackR = 8;
const int FwrR = 10;
//Señales para activar motores
const int Fwr = 7;
const int Back = 6;
const int Left = 5;
const int Right = 4;
//Led o direccionales

const int Led_F = 3;
const int Led_B = 2;
const int Led_L = 1;
const int Led_R = 0;


void setup() {
  pinMode(BackL, OUTPUT);
  pinMode(FwrL, OUTPUT);
  pinMode(BackR, OUTPUT);
  pinMode(FwrR, OUTPUT);
  pinMode(Fwr, INPUT);
  pinMode(Back, INPUT);
  pinMode(Left, INPUT);
  pinMode(Right, INPUT);
  pinMode(Led_F, OUTPUT);
  pinMode(Led_B, OUTPUT);
  pinMode(Led_L, OUTPUT);
  pinMode(Led_R, OUTPUT);
}

void loop() {
  if(digitalRead(Fwr) == 1){
    digitalWrite(FwrL, HIGH);
    digitalWrite(FwrR, HIGH);
    digitalWrite(BackL, LOW);
    digitalWrite(BackR, LOW);
    digitalWrite(Led_F, HIGH);
  }
  else if(digitalRead(Back) == 1){
    digitalWrite(FwrL, LOW);
    digitalWrite(FwrR, LOW);
    digitalWrite(BackL, HIGH);
    digitalWrite(BackR, HIGH);
    digitalWrite(Led_B, HIGH);
  }
  else if(digitalRead(Left) == 1){
    digitalWrite(FwrL, LOW);
    digitalWrite(FwrR, HIGH);
    digitalWrite(BackL, HIGH);
    digitalWrite(BackR, LOW);
    delay(300);
      digitalWrite(Led_L, HIGH);
    delay(300);
      digitalWrite(Led_L, LOW);
  }
  else if(digitalRead(Right) == 1){
    digitalWrite(FwrL, HIGH);
    digitalWrite(FwrR, LOW);
    digitalWrite(BackL, LOW);
    digitalWrite(BackR, HIGH);
    delay(300);
      digitalWrite(Led_R, HIGH);
    delay(300);
      digitalWrite(Led_R, LOW);
  }
  else{
    digitalWrite(FwrL, LOW);
    digitalWrite(FwrR, LOW);
    digitalWrite(BackL, LOW);
    digitalWrite(BackR, LOW);
    digitalWrite(Led_F, LOW);
    digitalWrite(Led_B, LOW);
    digitalWrite(Led_L, LOW);
    digitalWrite(Led_R, LOW);
  }
}
