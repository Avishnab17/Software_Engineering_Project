#include <stdlib.h>
#include <stdbool.h>
#include "linear_Equation.h"
#include "cubic_Equation.h"
#include "quadratic_Equation.h"
#include  "colored_output.h"


int mathematics_Menu()
{
    float result;
  
    int choice, num;
    green();
    printf("\n\n\n\n\n\t~~~~~~~\tWELCOME TO MATHS MATE EQUATION SOLVER\t~~~~~~~\t\n\n");
    printf("                    \n\n\t\t~~~~\tLET'S SOLVE EQUATIONS!\t~~~~\t\n\n\n");
    reset();
      
      while(true)
    {
      printf("\nWhich type of equation you have to solve? :\n");
      printf("\nChoose from the choices below:\n");
      printf("\n");
      printf("1. Linear equation\n");
      printf("2. Quadratic equation\n");
      printf("3. Cubic equation\n");
      printf("4. Exit\n");
   
 
      printf("Choice : ");
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

         
          default:
          red();
          printf("Wrong input, try again!\n");
          reset();
     
       }
     }
      return 0;
}
