/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1094
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int cases, amount, total = 0, aRabbits = 0, aRats = 0, aFrogs = 0, i;
   char type;

   scanf("%d", &cases);

   for(i = 0; i < cases; i++) {
      scanf("%d %c", &amount, &type);

      total += amount;

      switch(type) {
         case 'C': case 'c':
            aRabbits += amount;
            break;

         case 'R': case 'r':
            aRats += amount;
            break;

         case 'S': case 's':
            aFrogs += amount;
            break;
      }
   }

   printf("Total: %d cobaias\n", total);
   printf("Total de coelhos: %d\n", aRabbits);
   printf("Total de ratos: %d\n", aRats);
   printf("Total de sapos: %d\n", aFrogs);
   printf("Percentual de coelhos: %.2f %\n",
         100.0f * ((float)aRabbits) / total);
   printf("Percentual de ratos: %.2f %\n",
         100.0f * ((float)aRats) / total);
   printf("Percentual de sapos: %.2f %\n",
         100.0f * ((float)aFrogs) / total);

   return 0;
}
