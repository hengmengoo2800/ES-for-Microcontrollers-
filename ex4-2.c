#include <stdio.h>

int numberOfBits() {
	return sizeof(int) * 8;

}

int main(void) {
	printf("The number of bits in an interger on this machine is: %d\n", numberOfBits());
	return 0;

}
