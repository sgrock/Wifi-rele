void Ewrite1(){
  val = 1;  // flag вкл автоматики
  // value from 0 to 255.
   EEPROM.write(address, val);
   EEPROM.commit();
  
}
void Ewrite0()
{
   val = 0;// flag выкл автоматики
  // value from 0 to 255.
   EEPROM.write(address, val);
   EEPROM.commit();
  
}

void Eread()
{
  e = EEPROM.read(address);

}

