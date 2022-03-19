#ifndef LINEAR_EQUATION_FILE
#define LINEAR_EQUATION_FILE
<<<<<<< HEAD
#include <stdio.h>  
#include <math.h>  
#include "linear_equation.h"

=======
#include <stdlib.h>
#include "linear_Graph.h"
>>>>>>> 05ed53a34415447fe871ed076332fabeb5e928f4
float solve(float a, float b)
{
    return -(b/a);
}

void linearequation()
{
    float a=0, b=0;
    float solution;

    printf("\nEnter value of a : ");
    scanf("%f",&a);

    printf("\n");

    while(a==0){
        printf("\nThere is no solution for this linear equation!\n");
        printf("\nEnter value of a again : ");
        scanf("%f",&a);
    }

    printf("\n"); 

    printf("\nEnter value of b : ");
    scanf("%f",&b);

    solution = solve(a,b);

    printf("\nValue of x is : %f\n", solution);

    //plotting graph
    Init_grid();
    float x;
    float y;
    for(x=-10;x<=10;x+=0.1)
    {
<<<<<<< HEAD
        y = (a*x) + b;
        plot(rintf(x*4),rintf(y*2));
=======
        y = (a * x) + b;
        Plot(rintf(x*4),rintf(y*2));
>>>>>>> 05ed53a34415447fe871ed076332fabeb5e928f4
    }
    Show_grid();
    
}

#endif