#include <stdio.h>
#include <math.h>

int main() {
   int i;
   float sum;

   for(i = 1; i <= 20; i++)
      sum += ((2 * i) - 1) / pow(2, i - 1);

   printf("%.2f\n", sum);

   return 0;
}
