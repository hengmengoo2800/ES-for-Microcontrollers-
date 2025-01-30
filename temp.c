#include <stdio.h>

int main(void) {
	
	int C;
	float F;

	printf("Celsius		Fahrenheit\n");

	for (C=0; C<=100; C=C+10) {

		F = C*(9.0/5.0) + 32;
		printf("%d\t\t%.1f\n", C, F);

	}

	return 0;

}
