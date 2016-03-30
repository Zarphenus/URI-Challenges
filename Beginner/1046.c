/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1046
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int begin, end, totalTime;

   scanf("%d %d", &begin, &end);

   if(begin == end)
      totalTime = 24;
   else
      totalTime = (begin > end) ? 24 - begin + end : end - begin;

   printf("O JOGO DUROU %d HORA(S)\n", totalTime);

   return 0;
}
