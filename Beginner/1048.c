/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1048
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   float salary, incrPerc;

   scanf("%f", &salary);

   if(salary >= 0.00f && salary <= 400.00f) incrPerc = 0.15;
   else if(salary >= 400.01f && salary <= 800.00f) incrPerc = 0.12;
   else if(salary >= 800.01f && salary <= 1200.00f) incrPerc = 0.10;
   else if(salary >= 1200.01f && salary <= 2000.00f) incrPerc = 0.07;
   else if(salary > 2000.00f) incrPerc = 0.04;

   printf("Novo salario: %.2f\n", salary + (salary * incrPerc));
   printf("Reajuste ganho: %.2f\n", salary * incrPerc);
   printf("Em percentual: %.0f %\n", incrPerc * 100.00f);

   return 0;
}
