#include <stdio.h>

int main() {
   int num, i;

   scanf("%d", &num);

   while(num != 0) {
      for(i = 1; i <= num; i++) {
         if(i == 1)
            printf("%d", i);
         else
            printf(" %d", i);
      }
      printf("\n");
      scanf("%d", &num);
   }
   return 0;
}
