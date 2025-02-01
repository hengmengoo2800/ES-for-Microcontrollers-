#include <stdio.h>

/*void testShift() {
	unsigned int x = 0x80000000;
	int y = -1;

	if ((x >> 1) > 0) {
		printf("Logical right shift for unsigned int.\n");
	} else {
		printf("Arithmetic right shift for unsigned int.\n");
	}

	if ((y >> 1) < 0) {
		printf("Arithmetic right shift for signed int.\n");
	} else {
		printf("Logical right shift for signed int.\n");
	}
}

int main(void) {
	testShift();
	return 0;

} */

void testShift() {
	unsigned int x = 0x80000000;
	int y = -1;

	printf((x >> 1) > 0 ? "Logical right shift for unsigned int.\n" : "Arithmetic right shift for unsigned int.\n");

	printf((y >> 1) < 0 ? "Arithmetic right shift for signed int.\n" : "Logical right shift for signed int.\n");

}

int main(void) {
	testShift();
	return 0;

}
