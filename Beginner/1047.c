/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1047
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

int main() {
   int beginHours, beginMinutes, endHours, endMinutes, totalHours, totalMinutes;

   scanf("%d %d %d %d", &beginHours, &beginMinutes, &endHours, &endMinutes);

   if(beginHours == endHours && beginMinutes == endMinutes) {
      totalHours = 24;
      totalMinutes = 0;
   } else if(beginHours == endHours) {
      totalHours = 0;
      totalMinutes = (beginMinutes > endMinutes) ?
         60 - beginMinutes + endMinutes : endMinutes - beginMinutes;
   } else {
      totalHours = (beginHours > endHours) ?
         24 - beginHours + endHours : endHours - beginHours;
      totalMinutes = (beginMinutes > endMinutes) ?
         60 - beginMinutes + endMinutes : endMinutes - beginMinutes;

      if(beginMinutes > endMinutes) --totalHours;
   }

   printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totalHours, totalMinutes);

   return 0;
}
