#include <MeggyJrSimple.h>    // Required code, line 1 of 2.
 

 void setup()                    // run once, when the sketch starts
 {
 
  MeggyJrSimpleSetup();      // Required code, line 2 of 2.
  MeggyJrSimpleSetup();      // Required code, line 2 of 2

}                            // End setup()

int x = random(5);

void Draw()
{
if(x==0)
    {
      DrawPx(1,4,Red);
    }
 
 struct Point        // Defined struct
{
  int x; 
  int y;
};

Point s1 = {1,4};    //Defines points in array 
Point s2 = {2,3};
Point s3 = {2,5};
Point s4 = {3,4};
Point s5 = {5,4};
Point s6 = {6,4};
Point lightArray[6] = {s1, s2, s3, s4, s5, s6};
}

void aButton()
  {
    DrawPx(5,4,White);
    DisplaySlate();
  }

void bButton()
{
  DrawPx(6,4,White);
  DisplaySlate();
}

void leftButton()
{
  DrawPx(1,4,White);
  DisplaySlate();
}

void rightButton()
{
  DrawPx(3,4,White);
  DisplaySlate();
}

void upButton()
{
  DrawPx(2,5,White);
  DisplaySlate();
}

void downButton()
{
  DrawPx(2,3,White);
  DisplaySlate();
}


void loop()
{
  aButton();
  bButton();
  upButton();
  downButton();
  leftButton();
  rightButton();
  DisplaySlate();
  CheckButtonsDown();
  
  
}
