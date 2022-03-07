#include <stdlib.h>
#include <stdbool.h>
#include "linear_Equation.h"
#include "cubic_Equation.h"
#include "quadratic_Equation.h"

int mathematics_Menu()
{
    float result;
  
    int choice, num;
 
    printf("\n\n\n\n\n\t~~~~\tSOLVING EQUATIONS!\t~~~~\t\n\n\n\n\n");
      
      while(true)
    {
      printf("\nWhich type of equation you have to solve? :\n");
      printf("\nChoose from the choices below:\n");
      printf("\n");
      printf("1. Linear equation\n");
      printf("2. Quadratic equation\n");
      printf("3. Cubic equation\n");
      printf("4. Exit\n");
      printf("5. Return to main menu\n");
 
 
      scanf("%d",&choice);
 
      switch (choice)
      {
          case 1: {
             linearequation();
             break;
         }
          case 2: {
             quadraticequation();
             break;
         }
          case 3: {
             cubicequation();
             break;
          }

          case 4: {
              exit(0);
          }

          case 5:{
              return 0;
          }
         
          default:
          printf("Wrong input, try again!\n");
     
       }
     }
      return 0;
}
