#include <stdio.h>

int main(void) {

	float x, result;

	for (x = 0; x <= 3; x+=0.5) {
		result = (x*x) + (3*x) + 2;

		printf("f(%.1f) = %.2f\n", x, result);
	}

	return 0;
}
