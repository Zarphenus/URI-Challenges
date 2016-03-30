/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1045
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>
#include <math.h>

int main() {
   double a, b, c, swap;

   scanf("%lf %lf %lf", &a, &b, &c);

SORT:if(a < b) {
        swap = a;
        a = b;
        b = swap;
     }

     if(b < c) {
        swap = b;
        b = c;
        c = swap;
     }

     if(!(a >= b && b >= c)) goto SORT;

     if(a >= b + c)
        printf("NAO FORMA TRIANGULO\n");

     if(pow(a, 2) == pow(b, 2) + pow(c, 2))
        printf("TRIANGULO RETANGULO\n");

     if(pow(a, 2) > pow(b, 2) + pow(c, 2) && a < b + c)
        printf("TRIANGULO OBTUSANGULO\n");

     if(pow(a, 2) < pow(b, 2) + pow(c, 2))
        printf("TRIANGULO ACUTANGULO\n");

     if(a == b && b == c)
        printf("TRIANGULO EQUILATERO\n");

     if((a == b && b != c) || (b == c && c != a) || (b == c && a != c))
        printf("TRIANGULO ISOSCELES\n");

     return 0;
}
