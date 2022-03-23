#include <stdlib.h>
#include <stdbool.h>
#include "linear_Equation.h"
#include "cubic_Equation.h"
#include "quadratic_Equation.h"
#include "colored_output.h"
#include "store_root_values.h"
#include "view_stored_roots.h"
#include "delete_lines.h"

int mathematics_Menu()
{
    float result;
  
    int choice, num;
    red();
    printf("\nProject by : BOOTUN Avishna, DOOKHEET Vaishnavi and MUNOGEE Yashi");
    green();
    printf("\n\n\n\n\n\t~~~~~~~\tWELCOME TO MATHS MATE EQUATION SOLVER\t~~~~~~~\t\n\n");
    printf("                    \n\n\t\t~~~~\tLET'S SOLVE EQUATIONS!\t~~~~\t\n\n\n");
    reset();
      
      while(true)
    {
      
      printf("\n\nWhich type of equation you have to solve? :\n");
      printf("\nChoose from the choices below:\n");
      printf("\n");
      printf("1. Linear equation\n");
      printf("2. Quadratic equation\n");
      printf("3. Cubic equation\n");
      printf("4. Store root values\n");
      printf("5. View stored values\n");
      printf("6. Delete the number of lines\n");
      printf("7. Exit\n");
   
 
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
             //storeroot();
             break;
          }
          case 5: {
             view_stored_roots();
             break;
          }
          case 6:{
             delete();
             break;
          }
          case 7: {
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
