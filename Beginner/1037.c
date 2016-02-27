#include <stdio.h>

int main() {
	float value;

	scanf("%f", &value);

	if(value < 0.00f || value > 100.00f)
		printf("Fora de intervalo\n");
	else {
		if(value >= 0.00f && value <= 25.00f)
			printf("Intervalo [0,25]\n");
		else if(value >= 25.00001f && value <= 50.00f)
			printf("Intervalo (25,50]\n");
		else if(value >= 50.00001f && value <= 75.00f)
			printf("Intervalo (50,75]\n");
		else
			printf("Intervalo (75,100]\n");
	}

	return 0;
}
