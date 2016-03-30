/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1044
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int a, b, multiplicity;

   scanf("%d %d", &a, &b);

   multiplicity = (a > b) ? a%b : b%a;

   if(multiplicity == 0) printf("Sao Multiplos\n");
   else                  printf("Nao sao Multiplos\n");

   return 0;
}
