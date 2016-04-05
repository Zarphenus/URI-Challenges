/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1071
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int begin, end, swap, sum = 0;

   scanf("%d %d", &begin, &end);

   if(begin > end) {
      swap = begin;
      begin = end;
      end = swap;
   }

   begin++;
   begin = (begin % 2 == 0) ? begin + 1 : begin;

   while(begin < end) {
      sum += begin;
      begin += 2;
   }

   printf("%d\n", sum);

   return 0;
}
