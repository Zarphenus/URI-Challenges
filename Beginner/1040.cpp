/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1040
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   float grade1, grade2, grade3, grade4, exGrade, finalGrade;
   
   cin >> grade1 >> grade2 >> grade3 >> grade4;

   finalGrade = 0.2*grade1 + 0.3*grade2 + 0.4*grade3 + 0.1*grade4;

   cout << fixed;
   cout << "Media: " << setprecision(1) << finalGrade << endl;
   if(finalGrade >= 7.0)
      cout << "Aluno aprovado." << endl;
   else if(finalGrade < 5.0)
      cout << "Aluno reprovado." << endl;
   else {
      cout << "Aluno em exame." << endl;

      cin >> exGrade;

      cout << "Nota do exame: " << setprecision(1) << exGrade << endl;

      finalGrade = (finalGrade + exGrade) / 2;

      if(finalGrade >= 5.0)
         cout << "Aluno aprovado." << endl;
      else
         cout << "Aluno reprovado." << endl;

      cout << "Media final: " << setprecision(1) << finalGrade << endl;
   }

   return 0;
}
