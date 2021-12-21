#include <stdio.h>

int
main ()
{
  //int enteredNumber = 3; //odd
  /*
     1  
    121  
   12321 
  1234321
  */
  int enteredNumber = 4; //even
  /*
     11   
    1221  
   123321 
  12344321
  */
  int number = 1;
  int row = 4;
  //1 3 5 7
  int column = row * 2 - 1;
  //2 4 6 8
  if (enteredNumber % 2 == 0)
    {
      column = row * 2;
    }

  int y_inc = 1;
  for (int y = row; y > 0; --y)
    {
      //satirin basindaki bosluklar
      int startSpaceLoop = 0;
      if(enteredNumber % 2 == 0){
          startSpaceLoop = 1;
      }
      for (int space = startSpaceLoop; space < column / 2; ++space)
	{
	  printf (" ");
	}
      int maxNumInRow = -1;
      //artan sayilar
      for (int n = 0; n < y_inc; ++n)
	{
	  printf ("%d", number + n);
	  maxNumInRow = number + n;
	}
      //azalan sayilar

      if (enteredNumber % 2 == 0)
	{
	  for (int n = maxNumInRow - 1; n >= 0; --n)
	    {
	      printf ("%d", number + n);
	    }
	}
      else
	{
	  for (int n = maxNumInRow - 2; n >= 0; --n)
	    {
	      printf ("%d", number + n);
	    }
	}

      //satirin sonundaki bosluklar
      //bunun yerine sadece /n yeterli olacaktir
      for (int space = startSpaceLoop; space < column / 2; ++space)
	{
	  printf (" ");
	}
      printf ("\n");
      ++y_inc;
      column -= 2;
    }
}
