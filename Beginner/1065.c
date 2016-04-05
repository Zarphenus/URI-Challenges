/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1065
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int num, evenNums = 0, i;

   for(i = 0; i < 5; i++) {
      scanf("%d", &num);
      if(num % 2 == 0)
         evenNums++;
   }

   printf("%d valores pares\n", evenNums);

   return 0;
}
