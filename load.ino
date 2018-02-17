 void load()
{
 
 display.drawRect(1, 1, display.width()-1, display.height()-1, WHITE);

// 1 – rotation угол поворота экрана в градусах: 0 = 0, 1 = 90, 2 = 180, 3 = 270.

   //==================================================================================
  // display.drawRect (1, 1, 127, 25, 1); //
// 3 – x0 начальная координата прямоугольника,
// 2 – y0 начальная координата прямоугольника,
// 12 – w ширина прямоугольника в пикселях,
// 10 – h высота прямоугольника в пикселях,
// 1 – color цвет прямоугольника (светится)
   // display.fillRect (3, 3, 125, 20, 1);
  display.setTextColor(1); 
  display.setTextSize(2);        // i have used large font to display temperature, it can be varied as per your taste
  display.setCursor(10,5);
  display.print("Loading..");
  display.drawRect (5, 38, 120, 20, 1); //
  display.display();
  // uint8_t color = 1;
  int16_t y=40;
  int16_t h=15;
 for (int16_t i=0; i<115; i+=3) {
    //y+=1;
  // h+=1;
  display.fillRect(7, y, i, h, 1);
   display.display();
 }
  
  display.clearDisplay();
   display.display();
}
