#include <stdio.h>

int main(void) {
	int signed_num = -8;
	unsigned int unsigned_num = 8;

	printf("Original signed number: %d\n", signed_num);
	printf("Original unsigned number: %d\n", unsigned_num);
	
	int signed_shifted = signed_num >> 1;
	unsigned int unsigned_shifted = unsigned_num >> 1;

	printf("Signed number after arithmetic shift: %d\n", signed_shifted);
	printf("unsigned number after arithmetic shift: %d\n", unsigned_shifted);

	if (signed_shifted == -4) {
		printf("The signed right shift is arithmetic (MSB propagated).\n");
	} else {
		printf("The signed right shift is logical (zeroes propagated).\n");
	}	

	return 0;

}
