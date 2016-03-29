/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1043
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   float a, b, c;

   scanf("%f %f %f", &a, &b, &c);

   if(a + b <= c || c + b <= a || a + c <= b)
      printf("Area = %.1f\n", ((a + b) * c) / 2.0f);
   else
      printf("Perimetro = %.1f\n", a + b + c);

   return 0;
}
