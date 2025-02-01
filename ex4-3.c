#include <stdio.h>

unsigned int rotateLeft(unsigned int num, unsigned int n) {
	unsigned int bits = sizeof(num) * 8;
	n = n % bits;
	
	return (num << n) | (num >> (bits - n));

}


int main(void) {
	unsigned int num = 0x5AA5;
	unsigned int n;

	printf("Enter number of bits to rotate: ");
	scanf("%u", &n);

	unsigned int rotateNum = rotateLeft(num, n);

	printf("Original number: 0x%X\n", num);
	printf("Rotated number: 0x%X\n", rotateNum);

	return 0;

}





