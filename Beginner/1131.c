#include <stdio.h>

int main() {
   int numGrenais = 1, vicInter = 0, vicGremio = 0,
       goalsInter, goalsGremio, draws = 0, newGrenal;

   while(1) {
      scanf("%d %d", &goalsInter, &goalsGremio);

      if(goalsInter > goalsGremio)
         vicInter++;
      else if(goalsInter < goalsGremio)
         vicGremio++;
      else
         draws++;

      printf("Novo grenal (1-sim 2-nao)\n");
      scanf("%d", &newGrenal);
      if(newGrenal == 2)
         break;
      else
         numGrenais++;
   }

   printf("%d grenais\n", numGrenais);
   printf("Inter:%d\n", vicInter);
   printf("Gremio:%d\n", vicGremio);
   printf("Empates:%d\n", draws);

   if(vicInter > vicGremio)
      printf("Inter venceu mais\n");
   else if(vicInter < vicGremio)
      printf("Gremio venceu mais\n");
   else
      printf("Nao houve vencedor");

   return 0;
}
