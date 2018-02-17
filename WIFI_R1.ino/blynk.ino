BLYNK_WRITE(V1) //кнопка на мобиле привязана к V1 вкл  и отк автом режима
{ 
int s = param.asInt();
if ( s == 1)
{ 
   
 Ewrite1(); //установка flag вкл автоматики
 //led5.on();
 digitalWrite(14,HIGH);

}
else
{
 Ewrite0() ;//снятие flag вкл автоматики
//  led5.off();
  Blynk.virtualWrite(7, 1);//погасить кн выкл насоса
  digitalWrite(14, LOW);
}
}
