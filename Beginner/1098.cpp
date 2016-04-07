/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1098
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <iostream>

using namespace std;

int main() {
   float i = 0, j = 1;

   while(i <= 2.1) {
      cout << "I=" << i << " J=" << j + i << endl;
      cout << "I=" << i << " J=" << j + 1 + i << endl;
      cout << "I=" << i << " J=" << j + 2 + i << endl;
      i += 0.2;
   }

   return 0;
}
