#ifndef QUADRATIC_EQUATION_FILE
#define QUADRATIC_EQUATION_FILE
#include <stdio.h>  
#include <math.h>  
#include "quadratic_graph.h"
#include "colored_output.h"
#include "store_root_values.h"

int quadraticequation()  
{  
    float a, b, c;  
    float root1, root2;  
    float root_part, denom; 
    blue();
    printf("   \n\ta*x^2+b*x+c   \n"); 
    cyan();
    
    printf("\nEnter value of a: ");  
    scanf("%f",&a);  
    printf("\nEnter value of b: "); 
    scanf("%f",&b);  
    printf("\nEnter value of c: ");
    scanf("%f",&c); 
  
  
    if(a == 0)  
    {   blue();
        printf("If a is zero, equation becomes linear and not quadratic\n");  
        printf("Please enter non-zero number for a\n");  
    }  
    else  
    {  
        root_part = sqrt(b * b - 4 * a * c);  
        denom     = 2 * a;  
  
        root1     = ( - b + root_part ) / denom;  
        root2     = ( - b - root_part ) / denom;  
        yellow();
        printf("Root1 = %f\nRoot2 = %f", root1, root2);  
    }  
    printf("\n");
    
    //plotting graph
    init_grid();
    float x;
    float y;
    red();
    for(x=-10;x<=10;x+=0.1)
    {
        y = (a * (pow(x,2))) + (b*x) + c;
        plot(rintf(x*4),rintf(y*2));
    }
    show_grid();
    reset();

    // storing results in txt file
    FILE *fptr;
    fptr=fopen("Stored_roots_values.txt","a");

    green1();
   fprintf(fptr,"\nQuadratic Equation : %0.1f *x^2 + %0.1f *x + %0.1f  Root1 = %0.3f    Root2 = %0.3f ",a,b,c,root1,root2);
   fptr=freopen("Stored_roots_values.txt","r",fptr);
   printf("\nSuccessfully appended data\n");
   readFile(fptr);
   printf("\n");
   fclose(fptr);

    return 0;  
}  
#endif