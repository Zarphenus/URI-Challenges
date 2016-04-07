/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1099
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int cases, x, y, oddSum = 0, i, swap;

   scanf("%d", &cases);

   for(i = 0; i < cases; i++) {
      scanf("%d %d", &x, &y);

      if(x > y) {
         swap = x;
         x = y;
         y = swap;
      }

      x = (x % 2 == 0) ? x + 1 : x + 2;

      while(x < y) {
         oddSum += x;
         x += 2;
      }

      printf("%d\n", oddSum);
      oddSum = 0;
   }

   return 0;
}
