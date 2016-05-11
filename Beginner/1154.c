#include <stdio.h>

int main() {
   int age, sum = 0, count = 0;

   do {
      scanf("%d", &age);
      if(age >= 0) {
         sum += age;
         count++;
      }
   } while(age >= 0);

   printf("%.2f\n", (float)sum / count);
}
