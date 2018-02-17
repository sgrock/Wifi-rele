
void ADC()
{////////////////////////     //fotorezistor///////////////////////////////
/*Wire.beginTransmission(PCF8591); // wake up PCF8591
 Wire.write(AIn0); // control byte - read ADC0
 Wire.endTransmission(); // end tranmission
 Wire.requestFrom(PCF8591, 2);
 value0=Wire.read();
 value0=Wire.read();
  display.setTextSize(1);        
  display.setCursor(65,5);
  display.print("A0 ");
  display.setCursor(85,5);
  display.print(value0);
    Blynk.virtualWrite(10, value0);
  //////////////////////////////////// emty /////////////////////////////////////////////
 Wire.beginTransmission(PCF8591); // wake up PCF8591
 Wire.write(AIn1); // control byte - read ADC1
 Wire.endTransmission(); // end tranmission
 Wire.requestFrom(PCF8591, 2);
 value1=Wire.read();
 value1=Wire.read();
  display.setTextSize(1);       
  display.setCursor(65,15);
  display.print("A1 ");
//  display.setCursor(85,15);
//  display.print(value1);
  ////////////////////////////////////////  vlagnosty             ////////////////////////////////////
 Wire.beginTransmission(PCF8591); // wake up PCF8591
 Wire.write(AIn2); // control byte - read ADC2
 Wire.endTransmission(); // end tranmission
 Wire.requestFrom(PCF8591, 2);
 value2=Wire.read();
 value2=Wire.read();
  display.setTextSize(1);        
  display.setCursor(65,25);
  display.print("A2 ");
  display.setCursor(85,25);
  display.print(value2);
   Blynk.virtualWrite(13, value2);
   if (value2>=200)
   {
    led0.on();
   }
    else
    {
    led0.off();
    }
  //////////////////////////////////////////////////// potenceometr /////////////////////////  
 Wire.beginTransmission(PCF8591); // wake up PCF8591
 Wire.write(AIn3); // control byte - read ADC3
 Wire.endTransmission(); // end tranmission
 Wire.requestFrom(PCF8591, 2);
 value3=Wire.read();
 value3=Wire.read();
  display.setTextSize(1);       
  display.setCursor(65,35);
  display.print("A3 ");
  display.setCursor(85,35);
  display.print(value3);
  
// Serial.print(value0); Serial.print(" ");
// Serial.print(value1); Serial.print(" ");
// Serial.print(value2); Serial.print(" ");
// Serial.print(value3); Serial.print(" ");
// Serial.println();

*/
}

