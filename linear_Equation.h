#ifndef LINEAR_EQUATION_FILE
#define LINEAR_EQUATION_FILE

#include <stdlib.h>
#include "linear_Graph.h"
#include "colored_output.h"

float solve(float a, float b)
{
    return -(b/a);
}

void linearequation()
{
    float a=0, b=0;
    float solution;
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


    solution = solve(a,b);
    printf("\nValue of x is : %f\n", solution);
    red();
    //plotting graph
    Init_grid();
    float x;
    float y;
    for(x=-10;x<=10;x+=0.1)
    {
        y = (a * x) + b;
        Plot(rintf(x*4),rintf(y*2));
    }
    Show_grid();
    reset();
    
}
#endif