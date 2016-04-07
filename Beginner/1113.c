/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1113
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int x, y;

   scanf("%d %d", &x, &y);

   while(x != y) {
      if(x > y)
         printf("Decrescente\n");
      else
         printf("Crescente\n");

      scanf("%d %d", &x, &y);
   }

   return 0;
}
