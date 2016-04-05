/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1064
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int positives = 0, i;
   float num, avg = 0.0f;

   for(i = 0; i < 6; i++) {
      scanf("%f", &num);
      if(num > 0.0f) {
         positives++;
         avg += num;
      }
   }

   avg /= positives;

   printf("%d valores positivos\n%.1f\n", positives, avg);

   return 0;
}
