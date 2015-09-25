int PB;
int read;

void setup() {
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(12, INPUT);
}

void loop() {
  
  PB = digitalRead(12);
  read = 2;
  
  if(read==2 && PB)
  {
    read = 0;
  }
  //foward
  if(read==0 && PB)
  {
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    read = 1;
    delay(1300);
  }
  //backward
  if(read==1 && PB)
  {
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    read = 0;
    delay(1300);
  }
}
