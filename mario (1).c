#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int pyramid_height = 0;
    // do while loop validates user input and retrives and stores integer
    do
    {
        printf("height: ");
    pyramid_height = GetInt();
    }
   while (pyramid_height < 1 || pyramid_height > 23);
   // for loop prints rows for user input of height 
  //next for loop prints spaces and gradually decreases as rows increase
   //last for loop prints # as rows increase with initial # of 2
  for(int i = 0; i < pyramid_height; i++)
  {
      for(int j=0; j < pyramid_height-i-1; j++)
      {
      printf(" ");
      }
      for(int k=0; k < i+2; k++)
      {
          printf("#");
      }
      printf("\n");
      
  }
  return 0;
  
}

    
    
