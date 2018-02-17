BLYNK_WRITE(V7) //кнопка на мобиле привязана к V14 вкл  и 
{
int s = param.asInt();
if ( s == 1)
{ 
//  pe.digitalWrite(ledOut, HIGH);   

display.drawRect(1, 1, display.width()-1, display.height()-1, WHITE);  
 display.setTextSize(2);        // i have used large font to display temperature, it can be varied as per your taste
  display.setCursor(10,25);
  display.print("Audio OFF");
   terminal.println("Audio OFF") ;
    terminal.flush();
 //  terminal.println(currentTime) ;
  //----------------------------------------------------
 display.display();
 display.clearDisplay();
}
else
{
  // pe.digitalWrite(ledOut, LOW);
// Ewrite_a1();
 display.drawRect(1, 1, display.width()-1, display.height()-1, WHITE);   
  display.setTextSize(2);        // i have used large font to display temperature, it can be varied as per your taste
  display.setCursor(10,25);
  display.print("Audio ON");
   terminal.println("Audio ON") ;
    terminal.flush();
  //----------------------------------------------------
 display.display();
 display.clearDisplay();
}
  }
