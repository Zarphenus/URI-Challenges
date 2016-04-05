/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1060
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int positives = 0, i;
   float num;

   for(i = 0; i < 6; i++) {
      scanf("%f", &num);
      if(num > 0.0f) positives++;
   }

   printf("%d valores positivos\n", positives);

   return 0;
}
