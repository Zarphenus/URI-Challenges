/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1101
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int x, y, swap, sum = 0;

   scanf("%d %d", &x, &y);

   while(x > 0 && y > 0) {
      if(x > y) {
         swap = x;
         x = y;
         y = swap;
      }

      while(x <= y) {
         printf("%d ", x);
         sum += x++; 
      }

      printf("Sum=%d\n", sum);

      sum = 0;
      scanf("%d %d", &x, &y);
   }

   return 0;
}
