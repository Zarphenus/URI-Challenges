/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1079
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int cases, i;
   float a, b, c;

   scanf("%d", &cases);

   for(i = 0; i < cases; i++) {
      scanf("%f %f %f", &a, &b, &c);
      printf("%.1f\n", 0.2 * a + 0.3 * b + 0.5 * c);
   }

   return 0;
}
