/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1077
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int num, i;

   scanf("%d", &num);

   if(num > 1 && num < 1000)
      for(i = 1; i <= 10; i++)
         printf("%d x %d = %d\n", i, num, i * num);

   return 0;
}
