void displ()
{
 // display.drawRect(1, 1, display.width()-1, display.height()-1, WHITE);
  display.drawRect (1, 1, 127, 15, 1);
  // display.setTextWrap(false);
  // display.setTextWrap(true);
    display.setTextSize(1);
   display.setCursor(5,5);
  display.print("   ESP ALL-77-ADC");
  // int adc = ESP.getVcc (); //если откл а0  
// int sensorValue = 0;
 int adc = analogRead (A0);
  //Serial.println(adc);
  //Serial.println();
     //sensorValue = analogRead(A0);
   float sensorValue = 0;
   sensorValue = adc*0.01689;
  //   sensorValue = adc*0.010725; //относительно 10в  
  // делитель 4.7 к  и 11к
    Serial.println(sensorValue);
    Serial.println();
   //  Serial.println(adc);
   // Serial.println();
    Blynk.virtualWrite(12,sensorValue);
 
  if (adc>=700)
  {
   // digitalWrite(2, LOW); 
  }
  else
  {
    //digitalWrite(2, HIGH); 
  }
   //display.drawRect(1, 1, display.width()-1, display.height()-1, WHITE);
  display.drawRect (1, 17, 127, 47, 1); 
  display.setTextSize(1);
  // display.setTextSize(1);        // i have used large font to display temperature, it can be varied as per your taste
 
    display.setTextSize(2);
     display.setCursor(50,20);
  display.print(sensorValue);  //25
  // display.print(" ");
  // display.write(64);//  -  @
    display.write(86);//  -  V
   

   //------------------------------------------------------------------------------
     float  rssi = WiFi.RSSI();
  display.setTextSize(1);        // i have used large font to display temperature, it can be varied as per your taste
  display.setCursor(5,40);
  display.print("Wifi RSSI ");
  display.print(rssi,0);  //25
  display.println(" Db");
   Blynk.virtualWrite(6,rssi);
   //----------------------------------------------------
  display.setTextSize(1);        // i have used large font to display temperature, it can be varied as per your taste
  display.setCursor(5,50);
  display.print("IP  ");
 display.println(WiFi.localIP().toString());
 Blynk.virtualWrite(20,WiFi.localIP().toString());
//---------------------------------------------------------
temp();
//ADC();
display.display();
display.clearDisplay();

}
