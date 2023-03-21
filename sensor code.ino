// C++ code
//
int distanceThreshold = 0;
int cm = 0;
int inches = 0;

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(8, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(9, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(10, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  if(cm>distanceThreshold){
   digitalWrite(8, LOW);
   digitalWrite(9, LOW);
    digitalWrite(10, LOW);
  }
  if(cm>distanceThreshold && cm >distanceThreshold -100){
   digitalWrite(8, HIGH);
   digitalWrite(9, LOW);
   digitalWrite(10, LOW);
  }
  if(cm>distanceThreshold -250 && cm >distanceThreshold -350){
   digitalWrite(8, HIGH);
   digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
  }
  if(cm>distanceThreshold -350 && cm >distanceThreshold -450){
   digitalWrite(8, HIGH);
   digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
  }
  if(cm>distanceThreshold -200){
   digitalWrite(8, HIGH);
   digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
  }
  delay(300);
}