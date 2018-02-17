//esp03

#define BLYNK_PRINT Serial    // Comment this out to disable prints and save space
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <SimpleTimer.h>
SimpleTimer timer;
unsigned int timer1;
// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "0d086f246ee2423e8cb25a3696a3c214";
#include <EEPROM.h>
int address = 1;//eeprom
int address1 = 2;//eeprom
byte e;   //eeprom
byte e1;   //eeprom
int val ;  // flag вкл автоматики

void setup()
{ 
  pinMode(14, OUTPUT);
  digitalWrite(14,HIGH); //default!!!!!!!
  EEPROM.begin(512);
  Serial.begin(115200);
  Blynk.begin(auth, "PROTECT", "4651465146");
  timer1 = timer.setInterval(2000L,check); 
}

void loop()
{
  Blynk.run();
  timer.run(); 
}

