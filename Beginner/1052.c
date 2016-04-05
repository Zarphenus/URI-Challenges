/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1052
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>
#include <string.h>

int main() {
   int month;
   char monName[20] = "";

   scanf("%d", &month);

   switch(month) {
      case 1:
         strcpy(monName, "January");
         break;

      case 2:
         strcpy(monName, "February");
         break;

      case 3:
         strcpy(monName, "March");
         break;

      case 4:
         strcpy(monName, "April");
         break;

      case 5:
         strcpy(monName, "May");
         break;

      case 6:
         strcpy(monName, "June");
         break;

      case 7:
         strcpy(monName, "July");
         break;

      case 8:
         strcpy(monName, "August");
         break;

      case 9:
         strcpy(monName, "September");
         break;

      case 10:
         strcpy(monName, "October");
         break;

      case 11:
         strcpy(monName, "November");
         break;

      case 12:
         strcpy(monName, "December");
         break;
   }

   if(strcmp(monName, "") != 1) printf("%s\n", monName);

   return 0;
}
