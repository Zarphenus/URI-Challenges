#include <stdio.h>

int main() {
   int x, y, val = 1, i;

   scanf("%d %d", &x, &y);

   while(val <= y) {
      for(i = 0; i < x && val <= y; i++) {
         if(i > 0)
            printf(" %d", val++);
         else
            printf("%d", val++);
      }
      printf("\n");
   }

   return 0;
}
