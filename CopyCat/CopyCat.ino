/*
Objective:
Copy the red fairy by holding down the corresponding buttons.
IMPORTANT:
You must hold down the button until the red fairy changes so the note can play.

*/

#include <MeggyJrSimple.h>    // Required code, line 1 of 2.

boolean alive = true;

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

void dotChecker()
{
  CheckButtonsDown();      //When "example" button is hit, play note
  
  if(Button_Left)
  {
    Tone_Start(ToneG5, 100);
    DrawPx(1,4,FullOn);
    if(ReadPx(1,4) == Red)
    {
      Tone_Start(ToneG6, 100);
    }
   DisplaySlate();
  }
  
   if(Button_Right)
  {
    Tone_Start(ToneA5, 100);
    DrawPx(3,4,FullOn);
    if(ReadPx(3,4) == Red)
    {
      Tone_Start(ToneA5, 100);
    }
    DisplaySlate();
  }
  
   if(Button_Up)
  {
    Tone_Start(ToneB5, 100);
    DrawPx(2,5,FullOn);
    if(ReadPx(2,5) == Red)
    {
      Tone_Start(ToneB5, 100);
    }
   DisplaySlate();
  }
  
   if(Button_Down)
  {
    Tone_Start(ToneD6, 100);
    DrawPx(2,3,FullOn);
    if(ReadPx(2,3) == Red)
    {
      Tone_Start(ToneD5, 100);
    }
   DisplaySlate();
  }
  
   if(Button_A)
  {
    Tone_Start(ToneE5, 100);
    DrawPx(6,4,FullOn);
    if(ReadPx(6,4) == Red)
    {
      Tone_Start(ToneE5, 100);
    }
   DisplaySlate();
  }
  
   if(Button_B)
  {
    Tone_Start(ToneF5, 100);
    DrawPx(5,4,FullOn);
    if(ReadPx(5,4) == Red)
    {
      Tone_Start(ToneF5, 100);
    }
   DisplaySlate();
  }
  
}


void ButtonsNeutral()      // Dots when none are lit
{
  DrawPx(5,4,DimBlue);
  DrawPx(6,4,DimBlue);
  DrawPx(1,4,DimBlue);
  DrawPx(3,4,DimBlue);
  DrawPx(2,5,DimBlue);
  DrawPx(2,3,DimBlue);
  DisplaySlate();
}

void lightAButton()      // Dots when only A button is lit
  {
  DrawPx(6,4,Red);
  DrawPx(5,4,DimBlue);
  DrawPx(1,4,DimBlue);
  DrawPx(3,4,DimBlue);
  DrawPx(2,5,DimBlue);
  DrawPx(2,3,DimBlue);
  DisplaySlate();
  delay(500);
    
  }
  
void lightBButton()   // Dots when only B button is lit
  {
  DrawPx(5,4,Red);
  DrawPx(6,4,DimBlue);
  DrawPx(1,4,DimBlue);
  DrawPx(3,4,DimBlue);
  DrawPx(2,5,DimBlue);
  DrawPx(2,3,DimBlue);
    DisplaySlate();
    
  }
  
void lightRightButton()  //Dots when only Right button is lit
  {
  DrawPx(5,4,DimBlue);
  DrawPx(6,4,DimBlue);
  DrawPx(1,4,DimBlue);
  DrawPx(3,4,Red);
  DrawPx(2,5,DimBlue);
  DrawPx(2,3,DimBlue);
    DisplaySlate();
   
  }

void lightLeftButton()  //Dots only when Left button is lit
  {
  DrawPx(5,4,DimBlue);
  DrawPx(6,4,DimBlue);
  DrawPx(1,4,Red);
  DrawPx(3,4,DimBlue);
  DrawPx(2,5,DimBlue);
  DrawPx(2,3,DimBlue);
    DisplaySlate();
  }

void lightUpButton()    //Dots only when Up button is lit
  {
  DrawPx(5,4,DimBlue);
  DrawPx(6,4,DimBlue);
  DrawPx(2,5,Red);
  DrawPx(1,4,DimBlue);
  DrawPx(3,4,DimBlue);
  DrawPx(2,3,DimBlue);
    DisplaySlate();
  }

void lightDownButton()   //Dots only when Down button is lit
  {
  
  DrawPx(1,4,DimBlue);
  DrawPx(3,4,DimBlue);
  DrawPx(2,3,Red);
  DrawPx(5,4,DimBlue);
  DrawPx(6,4,DimBlue);
  DrawPx(2,5,DimBlue);
  DisplaySlate();
 
  }



void loop()          // Loop has red dot order for "Mary Had a Little Lamb"
{
  dotChecker();
  ButtonsNeutral();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  lightUpButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  dotChecker();
  ButtonsNeutral();
  lightRightButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightLeftButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightRightButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightUpButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightUpButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightUpButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightRightButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightRightButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightRightButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightUpButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightDownButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightDownButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightUpButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightRightButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightLeftButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightRightButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightUpButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightUpButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightUpButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightUpButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightRightButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightRightButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightUpButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightRightButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  lightLeftButton();
  delay(1000);
  dotChecker();
  ButtonsNeutral();
  ClearSlate();
  DisplaySlate();
  delay(5000);
  
  

  }
  
  
  

