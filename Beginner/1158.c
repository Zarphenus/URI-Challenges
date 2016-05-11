#include <stdio.h>

int main() {
   int cases, num, length, sum = 0;

   scanf("%d", &cases);

   while(cases-- != 0) {
      scanf("%d %d", &num, &length);
      if(num % 2 == 0) num++;

      while(length-- != 0) {
         sum += num;
         num += 2;
      }

      printf("%d\n", sum);
      sum = 0;
   }

   return 0;
}
