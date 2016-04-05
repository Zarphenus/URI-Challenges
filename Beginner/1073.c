/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1073
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int num, even = 2;

   scanf("%d", &num);

   if(num % 2 != 0) num--;

   while(even <= num) {
      printf("%d^2 = %d\n", even, even * even);
      even += 2;
   }

   return 0;
}
