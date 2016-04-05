/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1070
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int i, num;

   scanf("%d", &num);

   num = (num % 2 == 0) ? num + 1 : num;

   for(i = 0; i < 6; i++) {
      printf("%d\n", num);
      num += 2;
   }

   return 0;
}
