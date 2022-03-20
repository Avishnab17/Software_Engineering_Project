#ifndef CUBIC_EQUATION_FILE
#define CUBIC_EQUATION_FILE
#include <stdlib.h>
#include<math.h>
#include<conio.h>
#include"cubic_Graph.h"
#include "colored_output.h"

void cubicequation()
{

   double a, b, c, d, e, f, g, h, i, j, k, l, m, n, p, r, s, t, u, x1, x2, x3;

   int w;
   blue();
   printf("\n\ta*x^3+b*x^2+c*x+d:\n\n");
   cyan();
   printf("Enter value of a : ");

   scanf("%lf", &a);

   printf("\nEnter value of b : ");

   scanf("%lf", &b);

   printf("\nEnter value of c : ");

   scanf("%lf", &c);

   printf("\nEnter value of d : ");

   scanf("%lf", &d);

   e = 2.7182818284590;
   yellow();
   f = ((3 * c / a) - (b * b / (a * a))) / 3; // ** bracketed (a*a)!

   g = ((2 * b * b * b / (a * a * a)) - (9 * b * c / (a * a)) + (27 * d / a)) / 27; // ** brackets!

   h = (g * g / 4) + (f * f * f / 27);

   i = sqrt(((g * g / 4) - h));

   j = exp(log10(i) / log10(e) / 3);

   k = acos((-1) * (g / (2 * i)));

   l = j * (-1);

   m = cos(k / 3);

   n = sqrt(3) * sin(k / 3);

   p = (b / 3 * a) * (-1);

   r = (-1) * (g / 2) + sqrt(h);

   s = exp(log10(r) / log10(e) / 3);

   t = (-1) * (g / 2) - sqrt(h);

   u = exp(log10(t) / log10(e) / 3);

   if (h > 0)
      w = 1;

   if (h <= 0)
      w = 3;

   if ((f == 0) && (g == 0) && (h == 0))
      w = 2;

   switch (w)
   {

   case 1:

      x1 = (s + u) - (b / 3 * a);

      x2 = (-1) * (s + u) / 2 - (b / 3 * a);

      x3 = (s - u) * sqrt(3) / 2;

      printf("\nA 3 pont:\n x1 = %lf\n\nStationary Points :\n %lf +i*%lf\n %lf -i*%lf", x1, x2, x3, x2, x3);

      break;

   case 2:

      x1 = exp(log10(d / a) / log10(e) / 3) * (-1);

      printf("\n There is a line:\n%lf", x1);

      break;

   case 3:

      x1 = 2 * j * cos(k / 3) - (b / 3 * a);

      x2 = l * (m + n) + p;

      x3 = l * (m - n) + p;

      printf("\nA 3 Roots:\nx1 = %lf\nx2 = %lf\nx3 = %lf", x1, x2, x3);

      break;
   }

   //getch();
   red();
   // plotting graph
   INIT_grid();
   float x;
   float y;
   printf("\n");
   for (x = -10; x <= 10; x += 0.1)
   {
      y = (a * (pow(x, 3))) + (b * (pow(x, 2))) + (c * x) + d;
      PLOT(rintf(x * 4), rintf(y * 2));
   }
   SHOW_grid();
   reset();
}
#endif