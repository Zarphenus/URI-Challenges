/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1075
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int num, i;

   scanf("%d", &num);

   for(i = 2; i < 10000; i++)
      if(i % num == 2)
         printf("%d\n", i);

   return 0;
}
