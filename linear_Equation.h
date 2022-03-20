#ifndef LINEAR_EQUATION_FILE
#define LINEAR_EQUATION_FILE

#define BUFFER_SIZE 1000

#include <stdlib.h>
#include <string.h>
#include "linear_Graph.h"
#include "colored_output.h"
#include "store_root_values.h"

float solve(float a, float b)
{
    return -(b/a);
}


void linearequation()
{
    blue();
    printf("\n\ta*x+b\n");
    float a=0, b=0;
    float solution1;
    cyan();    
    printf("\nEnter value of a : ");
    scanf("%f",&a);

    printf("\n");
    cyan();
    while(a==0){
        printf("\nThere is no solution for this linear equation!\n");
        printf("\nEnter value of a again : ");
        scanf("%f",&a);
    }

    printf("Enter value of b : ");
    scanf("%f",&b);

    yellow();
    solution1=solve(a,b);
    printf("\nValue of x is : %f\n", solution1);
    
    red();
    //plotting graph
    Init_grid();
    float x;
    float y;
    for(x=-10;x<=10;x+=0.1)
    {
        y = (a * x) + b;
        Plot(rintf(x*4),rintf(y*1));
    }
    Show_grid();
    reset();

    // storing results in txt file
    FILE *fptr;
    fptr=fopen("Stored_roots_values.txt","a");

   fprintf(fptr,"\nLinear Equation :  %0.1f *x + %0.1f    Root = %0.3f ",a,b,solution1);
   fptr=freopen("Stored_roots_values.txt","r",fptr);
   green1();
   printf("\nSuccessfully appended data\n If you want to view stored value, PRESS 5\n");
   printf("\n");
   fclose(fptr);reset();
    
}
#endif