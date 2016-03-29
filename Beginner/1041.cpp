/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1041
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <iostream>

using namespace std;

int main() {
   float xAxe, yAxe;
   int quadrant;

   cin >> xAxe >> yAxe;

   if(xAxe > 0.0)
      if(yAxe > 0.0)
         quadrant = 1;
      else if(yAxe < 0.0)
         quadrant = 4;
      else
         quadrant = 0;
   else if(xAxe < 0.0)
      if(yAxe > 0.0)
         quadrant = 2;
      else if(yAxe < 0.0)
         quadrant = 3;
      else
         quadrant = 0;
   else
      if(yAxe == 0.0)
         quadrant = -1;
      else
         quadrant = -2;

   switch(quadrant) {
      case -2:
         cout << "Eixo Y" << endl;
         break;

      case -1:
         cout << "Origem" << endl;
         break;

      case 0:
         cout << "Eixo X" << endl;
         break;

      case 1:
         cout << "Q1" << endl;
         break;

      case 2:
         cout << "Q2" << endl;
         break;

      case 3:
         cout << "Q3" << endl;
         break;

      case 4:
         cout << "Q4" << endl;
         break;
   }

   return 0;
}
