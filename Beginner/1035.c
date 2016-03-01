/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1035
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
   int a, b, c, d;
   bool accept = true;

   scanf("%d %d %d %d", &a, &b, &c, &d);

   accept = ((b > c) && (d > a) &&
         (c + d > a + b)    &&
         (c > 0 && d > 0)   &&
         (a%2 == 0));

   if(accept)
      printf("Valores aceitos\n");
   else
      printf("Valores nao aceitos\n");

   return 0;
}
