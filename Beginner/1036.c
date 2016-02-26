/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1036
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, delta, root1, root2;

	scanf("%f %f %f", &a, &b, &c);

	if(a == 0.0f)
		printf("Impossivel calcular\n");
	else {
		delta = pow(b, 2) - (4 * a * c);
		if(delta < 0.0f)
			printf("Impossivel calcular\n");
		else {
			root1 = ((-b) + sqrt(delta))  / (2 * a);
			root2 = ((-b) - sqrt(delta))  / (2 * a);

			printf("R1 = %.5f\n", root1);
			printf("R2 = %.5f\n", root2);
		}
	}

	return 0;
}
