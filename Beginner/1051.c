/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1051
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   float salary, taxes;

   scanf("%f", &salary);

   if(salary > 4500.00f)
      taxes = (salary - 4500.00f) * 0.28f + 1500.00f * 0.18f + 1000.00f * 0.08f;
   else if(salary > 3000.00f)
      taxes = (salary - 3000.00f) * 0.18f + 1000.00f * 0.08f;
   else if(salary > 2000.00f)
      taxes = (salary - 2000.00f) * 0.08f;
   else
      taxes = 0.0f;

   if(taxes != 0.0f)
      printf("R$ %.2f\n", taxes);
   else
      printf("Isento\n");

   return 0;
}
