
#include "esp32-hal-cpu.h"
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Start..");
}
int i;
int j;
int count;
void loop() {
  // put your main code here, to run repeatedly:
  unsigned long StartTime2 = millis();
  setCpuFrequencyMhz(240);
  for(i=1;i<=100;i++)
  {
      count = 0;
      for(j=2;j<=i/2;j++)
      {
        if(i%j==0)
        {
          count++;
          break;
        }
      }
      if(count==0&&i!=1)
      {
        Serial.println(i);
      }  
   }
   unsigned long CurrentTime2 = millis();
   unsigned long ElapsedTime2 = CurrentTime2 - StartTime2;
   Serial.println("ElapsedTime2");
   Serial.println(ElapsedTime2);
}
