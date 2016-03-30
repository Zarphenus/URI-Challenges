/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1067
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int num, odds = 1;

   scanf("%d", &num);

   while(odds <= num) {
      printf("%d\n", odds);
      odds += 2;
   }

   return 0;
}
