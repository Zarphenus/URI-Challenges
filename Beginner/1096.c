/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1096
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int i = -1, j = 5;

   while(i != 9 || j != 5) {
      if(j == 5) {
         j = 8;
         i += 2;
      }

      --j;
      printf("I=%d J=%d\n", i, j);
   }

   return 0;
}
