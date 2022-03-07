#ifndef LINEAR_EQUATION_FILE
#define LINEAR_EQUATION_FILE
#include <stdlib.h>

float solve(float a, float b)
{
    return -(b/a);
}

void linearequation()
{
    float a=0, b=0;
    float solution;
    printf("Enter value of a : ");
    scanf("%f",&a);
    printf("Enter value of b : ");
    scanf("%f",&b);
    while(a==0){
        printf("There is no solution for this linear equation!");
        printf("Enter value of a again : ");
        scanf("%f",&a);
    }
    solution = solve(a,b);
    printf("Value of x is : %f", solution);
}

#endif