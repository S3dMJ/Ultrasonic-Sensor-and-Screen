
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int time,distance,c;
void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,INPUT);
  lcd.begin(16, 2);
  Serial.begin(9600);
  
}

void loop() {
  
    digitalWrite (8, HIGH);
    digitalWrite (8, LOW);
    time = pulseIn (9, HIGH);
    distance = (time * 0.034) / 2;
  
    
  
  if(time<19000){
  c += 1;
  delay(1000);
  } else {
  c = 0;
  }
  

  if (distance <= 50 && c>=3) 
        {
        lcd.clear();
        lcd.print("Screen ON");
        }
  else {
        lcd.clear();
        lcd.print("Screen OFF");
  }
  
}