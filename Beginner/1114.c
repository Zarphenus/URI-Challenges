/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1114
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

#define CORRECT_PASS 2002

int main() {
   int pass;

   do {
      scanf("%d", &pass);

      if(pass == CORRECT_PASS)
         printf("Acesso Permitido\n");
      else
         printf("Senha Invalida\n");
   } while(pass != CORRECT_PASS);

   return 0;
}
