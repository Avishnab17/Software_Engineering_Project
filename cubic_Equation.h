#ifndef CUBIC_EQUATION_FILE
#define CUBIC_EQUATION_FILE
#include <stdlib.h>
#include<math.h>
#include<cubic_Equation.h>

void cubicequation()
{
       const double PI = 4.0 * atan( 1.0 );

   double a, b, c, d;
   printf("Solve ax^3 + bx^2 + cx + d = 0    ( a/=0, b, c, d all real)\n");
   printf("\nInput a b c d (separated by spaces): ");
   scanf("%lf %lf %lf %lf",&a,&b,&c,&b);

   // Reduced equation: X^3 - 3pX - 2q = 0, where X = x-b/(3a)
   double p = ( b * b - 3.0 * a * c ) / ( 9.0 * a * a );
   double q = ( 9.0 * a * b * c - 27.0 * a * a * d - 2.0 * b * b * b ) / ( 54.0 * a * a * a );
   double offset = b / ( 3.0 * a );

   // Discriminant
   double discriminant = p * p * p - q * q;

   printf("Roots:\n");
   if ( discriminant > 0 )           // set X = 2 sqrt(p) cos(theta) and compare 4 cos^3(theta)-3 cos(theta) = cos(3 theta)
   {
      double theta = acos( q / ( p * sqrt( p ) ) );
      double r = 2.0 * sqrt( p );
      for ( int n = 0; n < 3; n++ ) 
      printf("%f\n",(r * cos( ( theta + 2.0 * n * PI ) / 3.0 ) - offset));
   }
   else 
   {
      double gamma1 = cbrt( q + sqrt( -discriminant ) );
      double gamma2 = cbrt( q - sqrt( -discriminant ) );

      printf("%f", gamma1 + gamma2 - offset);

      double re = -0.5 * ( gamma1 + gamma2 ) - offset;
      double im = ( gamma1 - gamma2 ) * sqrt( 3.0 ) / 2.0;
      if ( discriminant == 0.0 )                // Equal roots (hmmm, floating point ...)
      {
         printf("Re\n");
       
      }
      else
      {
         printf("%f + %f i \n",re,im);
         printf("%f - %f i ",re,im);
      }
   }
   //plotting graph
    INIT_grid();
    float x;
    float y;
    for(x=-10;x<=10;x+=0.1)
    {
         y = (a * (pow(x,3))) + (b*(pow(x,2))) + (c*x) + d;
        PLOT(rintf(x*4),rintf(y*2));
    }
    SHOW_grid();
}
#endif