void check()
{
 float  rssi = WiFi.RSSI();
   Blynk.virtualWrite(6,rssi);
   Blynk.virtualWrite(20,WiFi.localIP().toString());

 //--------------------------//проверка состояни автоматики-------------------------------
   e = EEPROM.read(address); 
if (e ==1)
{
  
 // led5.on();
  Blynk.virtualWrite(1, 1);
   digitalWrite(14,HIGH);

}
if (e ==0)
{
 // led5.off();
   Blynk.virtualWrite(1, 0);
   digitalWrite(14, LOW);
}

}
