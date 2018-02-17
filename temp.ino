void temp()

  {
   float t = dht.readTemperature();
  display.setTextSize(1);        // i have used large font to display temperature, it can be varied as per your taste
  display.setCursor(5,20);
  //display.print("T- ");
  display.print(t,0);  
  display.print(".C");
  Blynk.virtualWrite(4, t);
   float h = dht.readHumidity();
   display.setCursor(5,30);
   display.print(h,0);  
   display.print(" %"); 
   Blynk.virtualWrite(8, h);
  }

