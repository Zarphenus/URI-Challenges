#include <stdio.h>
#include <stdlib.h>

int main() {
   int *vicPoints, players, rounds, playerPoints, i, winner, higherScore = 0;

   scanf("%d %d", &players, &rounds);

   vicPoints = (int*) calloc(players, sizeof(int));

   while(rounds > 0) {
      for(i = 0; i < players; i++) {
         scanf("%d", &playerPoints);
         vicPoints[i] += playerPoints;
      }
      --rounds;
   }

   for(i = 0; i < players; i++) {
      if(vicPoints[i] >= higherScore) {
         higherScore = vicPoints[i];
         winner = i + 1;
      }
   }

   printf("%d\n", winner);

   return 0;
}
