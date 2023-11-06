const int BackL = 13;
const int FwrL = 12;
const int BackR = 8;
const int FwrR = 10;
const int Fwr = 7;
const int Back = 6;
const int Left = 5;
const int Right = 4;

void setup() {
  pinMode(BackL, OUTPUT);
  pinMode(FwrL, OUTPUT);
  pinMode(BackR, OUTPUT);
  pinMode(FwrR, OUTPUT);
  pinMode(Fwr, INPUT);
  pinMode(Back, INPUT);
  pinMode(Left, INPUT);
  pinMode(Right, INPUT);
}

void loop() {
  if(digitalRead(Fwr) == 1){
    digitalWrite(FwrL, HIGH);
    digitalWrite(FwrR, HIGH);
    digitalWrite(BackL, LOW);
    digitalWrite(BackR, LOW);
  }
  else if(digitalRead(Back) == 1){
    digitalWrite(FwrL, LOW);
    digitalWrite(FwrR, LOW);
    digitalWrite(BackL, HIGH);
    digitalWrite(BackR, HIGH);
  }
  else if(digitalRead(Left) == 1){
    digitalWrite(FwrL, LOW);
    digitalWrite(FwrR, HIGH);
    digitalWrite(BackL, HIGH);
    digitalWrite(BackR, LOW);
  }
  else if(digitalRead(Right) == 1){
    digitalWrite(FwrL, HIGH);
    digitalWrite(FwrR, LOW);
    digitalWrite(BackL, LOW);
    digitalWrite(BackR, HIGH);
  }
  else{
    digitalWrite(FwrL, LOW);
    digitalWrite(FwrR, LOW);
    digitalWrite(BackL, LOW);
    digitalWrite(BackR, LOW);
  }
}
