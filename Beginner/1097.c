/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1097
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int i = -1, j = 7 + i - 3;

   while(i != 9 || j != 13) {
      if(j == 7 + i - 3) {
         i += 2;
         j = 7 + i;
      }

      --j;
      printf("I=%d J=%d\n", i, j);
   }

   return 0;
}
