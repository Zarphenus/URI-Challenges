/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1050
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>
#include <string.h>

int main() {
   int  ddd;
   char city[20];

   scanf("%d", &ddd);

   switch(ddd) {
      case 61:
         strcpy(city, "Brasilia");
         break;

      case 71:
         strcpy(city, "Salvador");
         break;

      case 11:
         strcpy(city, "Sao Paulo");
         break;

      case 21:
         strcpy(city, "Rio de Janeiro");
         break;

      case 32:
         strcpy(city, "Juiz de Fora");
         break;

      case 19:
         strcpy(city, "Campinas");
         break;

      case 27:
         strcpy(city, "Vitoria");
         break;

      case 31:
         strcpy(city, "Belo Horizonte");
         break;

      default:
         strcpy(city, "DDD nao cadastrado");
   }

   printf("%s\n", city);

   return 0;
}
