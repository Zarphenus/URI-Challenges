#include <stdio.h>

int main() {
   float a, b;
   int newCalc;

   while(1) {
      do {
         scanf("%f", &a);
         if(a < 0.0f || a > 10.0f) printf("nota invalida\n");
      } while(a < 0.0f || a > 10.0f);

      do {
         scanf("%f", &b);
         if(b < 0.0f || b > 10.0f) printf("nota invalida\n");
      } while(b < 0.0f || b > 10.0f);

      printf("media = %.2f\n", (a + b) / 2);

      do {
         printf("novo calculo (1-sim 2-nao)\n");
         scanf("%d", &newCalc);
      } while(newCalc < 1 || newCalc > 2);

      if(newCalc == 2) break;
   }
   return 0;
}
