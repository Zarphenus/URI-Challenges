#include <stdio.h>

int main() {
   int alc = 0, gas = 0, die = 0, opt, end = 0;

   while(end == 0) {
      scanf("%d", &opt);

      switch(opt) {
         case 1:
            ++alc;
            break;

         case 2:
            ++gas;
            break;

         case 3:
            ++die;
            break;

         case 4:
            end = 1;
            break;
      }
   }

   printf("MUITO OBRIGADO\n");
   printf("Alcool: %d\n", alc);
   printf("Gasolina: %d\n", gas);
   printf("Diesel: %d\n", die);

   return 0;
}
