/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1095
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int i = -2, j = 65;

   while(j > 0) {
      j -= 5;
      i += 3;
      printf("I=%d J=%d\n", i, j);
   }

   return 0;
}
