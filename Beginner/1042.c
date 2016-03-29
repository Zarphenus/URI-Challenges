/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1042
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ITEMS_LENGTH 3

int * bubblesort(int * its) {
   int swap, i;
   bool isSwaped = false;

   for(i = 0; i < ITEMS_LENGTH - 1; i++) {
      if(its[i] > its[i + 1]) {
         swap = its[i];
         its[i] = its[i + 1];
         its[i + 1] = swap;
         if(!isSwaped) isSwaped = true;
      }
   }

   if(isSwaped)
      return bubblesort(its);
   else
      return its;
}

int main() {
   int * items, * sorted, i;

   items = (int *) malloc(ITEMS_LENGTH * sizeof(int));

   for(i = 0; i < ITEMS_LENGTH; i++)
      scanf("%d", &items[i]);

   sorted = (int *) malloc(ITEMS_LENGTH * sizeof(int));

   for(i = 0; i < ITEMS_LENGTH; i++)
      sorted[i] = items[i];

   sorted = bubblesort(sorted);

   for(i = 0; i < ITEMS_LENGTH; i++)
      printf("%d\n", sorted[i]);

   printf("\n");

   for(i = 0; i < ITEMS_LENGTH; i++)
      printf("%d\n", items[i]);

   return 0;
}
