/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1074
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>
#include <string.h>

int main() {
   int cases, num, i;
   char parity[7], sign[10];

   scanf("%d", &cases);

   for(i = 0; i < cases; i++) {
      scanf("%d", &num);

      if(num % 2 == 0)
         strcpy(parity, "EVEN");
      else
         strcpy(parity, "ODD");

      if(num > 0)
         strcpy(sign, "POSITIVE");
      else
         strcpy(sign, "NEGATIVE");

      if(num == 0)
         printf("NULL\n");
      else
         printf("%s %s\n", parity, sign);
   }

   return 0;
}
