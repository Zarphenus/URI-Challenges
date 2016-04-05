/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1080
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_VALUE 100

int main() {
   int * values, i, maxValue = 0, maxIndex = 0;
   values = (int*) malloc(MAX_VALUE * sizeof(int));

   for(i = 0; i < MAX_VALUE; i++) {
      scanf("%d", &values[i]);
      if(maxValue < values[i]) {
         maxValue = values[i];
         maxIndex = i + 1;
      }
   }

   printf("%d\n%d\n", maxValue, maxIndex);

   return 0;
}
