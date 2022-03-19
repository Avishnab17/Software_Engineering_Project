#ifndef QUADRATIC_EQUATION_FILE
#define QUADRATIC_EQUATION_FILE
#include <stdio.h>  
#include <math.h>  
#include "quadratic_graph.h"

int quadraticequation()  
{  
    float a, b, c;  
    float root1, root2;  
    float root_part, denom;  
  
    printf("Enter values of a, b and c\n");  
    scanf("%f%f%f", &a, &b, &c);  
  
    if(a == 0)  
    {  
        printf("If a is zero, equation becomes linear and not quadratic\n");  
        printf("Please enter non-zero number for a\n");  
    }  
    else  
    {  
        root_part = sqrt(b * b - 4 * a * c);  
        denom     = 2 * a;  
  
        root1     = ( - b + root_part ) / denom;  
        root2     = ( - b - root_part ) / denom;  
  
        printf("Root1 = %f\nRoot2 = %f", root1, root2);  
    }  
    printf("\n");
    //plotting graph
    init_grid();
    float x;
    float y;
    for(x=-10;x<=10;x+=0.1)
    {
        y = (a * (pow(x,2))) + (b*x) + c;
        plot(rintf(x*5),rintf(y*4));
    }
    show_grid();

    return 0;  
}  
#endif