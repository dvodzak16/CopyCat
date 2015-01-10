#include <MeggyJrSimple.h>    // Required code, line 1 of 2.

int x = 0;

 void setup()                    // run once, when the sketch starts
 {
 
  MeggyJrSimpleSetup();      // Required code, line 2 of 2.
  MeggyJrSimpleSetup();      // Required code, line 2 of 2

}                            // End setup()

void deathScreen()
{      
  for(int i = 0; i < 8; i++)       //Easier way of making the screen red, credit to Mr. Kiang
      {
        for(int x = 0; x < 8; x++)
        {
          DrawPx(i,x,1); //Draws the colors out
        }
      }
  DisplaySlate(); // Diplsays slate
  
}

void ButtonsNeutral()
{
  DrawPx(5,4,DimBlue);
  DrawPx(6,4,DimBlue);
  DrawPx(1,4,DimBlue);
  DrawPx(3,4,DimBlue);
  DrawPx(2,5,DimBlue);
  DrawPx(2,3,DimBlue);
  DisplaySlate();
}

void lightAButton()
  {
  DrawPx(6,4,Red);
  DrawPx(5,4,DimBlue);
  DrawPx(1,4,DimBlue);
  DrawPx(3,4,DimBlue);
  DrawPx(2,5,DimBlue);
  DrawPx(2,3,DimBlue);
    DisplaySlate();
    delay(200);
  }
  
void lightBButton()
  {
  DrawPx(5,4,Red);
  DrawPx(6,4,DimBlue);
  DrawPx(1,4,DimBlue);
  DrawPx(3,4,DimBlue);
  DrawPx(2,5,DimBlue);
  DrawPx(2,3,DimBlue);
    DisplaySlate();
    delay(200);
  }
  
void lightRightButton()
  {
  DrawPx(5,4,DimBlue);
  DrawPx(6,4,DimBlue);
  DrawPx(1,4,DimBlue);
  DrawPx(3,4,Red);
  DrawPx(2,5,DimBlue);
  DrawPx(2,3,DimBlue);
    DisplaySlate();
    delay(200);
  }

void lightLeftButton()
  {
  DrawPx(5,4,DimBlue);
  DrawPx(6,4,DimBlue);
  DrawPx(1,4,Red);
  DrawPx(3,4,DimBlue);
  DrawPx(2,5,DimBlue);
  DrawPx(2,3,DimBlue);
    DisplaySlate();
  }

void lightUpButton()
  {
  DrawPx(5,4,DimBlue);
  DrawPx(6,4,DimBlue);
  DrawPx(2,5,Red);
  DrawPx(1,4,DimBlue);
  DrawPx(3,4,DimBlue);
  DrawPx(2,3,DimBlue);
    DisplaySlate();
    delay(200);
  }

void lightDownButton()
  {
  DrawPx(1,4,DimBlue);
  DrawPx(3,4,DimBlue);
  DrawPx(2,3,Red);
  DrawPx(5,4,DimBlue);
  DrawPx(6,4,DimBlue);
  DrawPx(2,5,DimBlue);
  
  
    DisplaySlate();
    delay(200);
  }
  
//----------------------------------

void aButton()
  {
    CheckButtonsDown();
   
    if(Button_A){
    DrawPx(6,4,FullOn);
    DisplaySlate();
    
  }
  }

void bButton()
{
  CheckButtonsDown();
  if(Button_B){
  DrawPx(5,4,FullOn);
  DisplaySlate();
}
}

void leftButton()
{
  CheckButtonsDown();
  if(Button_Left){
  DrawPx(1,4,FullOn);
  DisplaySlate();
}
}

void rightButton()
{
  CheckButtonsDown();
  if(Button_Right){
  DrawPx(3,4,FullOn);
  DisplaySlate();
}
}

void upButton()
{
  CheckButtonsDown();
  if(Button_Up){
  DrawPx(2,5,FullOn);
  DisplaySlate();
  }
}

void downButton()
{
  CheckButtonsDown();
  if(Button_Down){
  DrawPx(2,3,FullOn);
  DisplaySlate();
  }
}


void loop()
{
  CheckButtonsPress();
  ButtonsNeutral();
  delay(2000);
  lightDownButton();
  if(Button_Down)
  {
    Tone_Start(ToneG6, 500);
    Tone_Update();
    ClearSlate();
    ButtonsNeutral();
    DisplaySlate();
  }
  else
  {
    delay(5000);
    ClearSlate();
    deathScreen();
  }
  
  aButton();
  bButton();
  upButton();
  downButton();
  leftButton();
  rightButton();
  DisplaySlate();
  
  
  
  
}
