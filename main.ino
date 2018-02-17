void disp2()
{
   int adc = analogRead (A0);
   float sensorValue = 0;
   sensorValue = adc*0.00458984;
    Blynk.virtualWrite(12,  sensorValue);
////////////////////////////////////////  vlagnosty ////////////////////////////////////
/* Wire.beginTransmission(PCF8591); // wake up PCF8591
 Wire.write(AIn2); // control byte - read ADC2
 Wire.endTransmission(); // end tranmission
 Wire.requestFrom(PCF8591, 2);
 value2=Wire.read();
 value2=Wire.read();
  display.drawRect(1, 1, display.width()-1, display.height()-1, WHITE);
  display.setTextSize(3);        
 // display.setCursor(5,25);
  //display.print("V= ");
  byte value5;
  value5=((value2-255)*-1);
  display.setCursor(40,25);
  display.print(value5);
  
   Blynk.virtualWrite(13, value5);
   if (value5<=20)
   {
    led0.on();
    if (z==1)
  {
   Blynk.email("sgrock@yandex.ru", "Alarm!", " Vlagnosty = 0.");
    delay(100); 
   }
    z=0; 
       }
    else
    {
    led0.off();
     z=1; 
    }
    */
    /*
////////////////////////     //fotorezistor///////////////////////////////
Wire.beginTransmission(PCF8591); // wake up PCF8591
 Wire.write(AIn0); // control byte - read ADC0
 Wire.endTransmission(); // end tranmission
 Wire.requestFrom(PCF8591, 2);
 value0=Wire.read();
 value0=Wire.read();
 byte value6;
  value6=((value0-255)*-1);
    Blynk.virtualWrite(10, value6);
    */
    /////////////////////////////////////////////////
 float t = dht.readTemperature();
  Blynk.virtualWrite(4, t);
  float h = dht.readHumidity();
   Blynk.virtualWrite(8, h);
   
display.display();
display.clearDisplay();
  
}

