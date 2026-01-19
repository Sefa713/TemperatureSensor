// C++ code
//
#include <LiquidCrystal.h>
LiquidCrystal mylcd (9,7,8,12,11,10);
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(A0, INPUT);
  mylcd.begin(16,2);
  
}

 float get_temp(float volt){ // opening the temperature function
 float conv_volt = volt - 0.5;
 return conv_volt/0.01;
  }// closing the temperature function

void loop()
{
  float value = analogRead(A0);
  float voltage = value*(5.0/1023.0); 
  float current_temp = get_temp(voltage);
  if (10 < current_temp && current_temp <= 40){
    mylcd.clear();
    mylcd.print("Safe Temp");
    delay(2000);
  }
  else if (40 < current_temp && current_temp <= 70 ){
    mylcd.clear();
    mylcd.setCursor(0,0);
    mylcd.print("It's getting");
    mylcd.setCursor(0,1);  
    mylcd.print("warm!");
  }
  else if (current_temp > 70)  {
    mylcd.clear();
    mylcd.setCursor(0,0);  
    mylcd.print("Dangerous Heat");
    mylcd.setCursor(0,1);  
    mylcd.print("Levels!");
    digitalWrite(6, HIGH);
    digitalWrite(13, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(13, LOW);
    delay(200); 
  }
}
