/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1072
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int cases, num, i, in = 0;

   scanf("%d", &cases);

   for(i = 0; i < cases; i++) {
      scanf("%d", &num);
      if(num >= 10 && num <= 20)
         in++;
   }

   printf("%d in\n%d out\n", in, cases - in);

   return 0;
}
