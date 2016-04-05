/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1066
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int num, isZero = 0, positive = 0, evenNums = 0, i;

   for(i = 0; i < 5; i++) {
      scanf("%d", &num);
      if(num % 2 == 0)
         evenNums++;

      if(num > 0)
         positive++;
      else if(num == 0)
         isZero++;
   }

   printf("%d valor(es) par(es)\n", evenNums);
   printf("%d valor(es) impar(es)\n", 5 - evenNums);
   printf("%d valor(es) positivo(s)\n", positive);
   printf("%d valor(es) negativo(s)\n", 5 - isZero - positive);

   return 0;
}
