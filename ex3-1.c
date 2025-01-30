#include <stdio.h>

char toLowerCase(char c) {
	if (c >= 'A' && c <= 'Z') {
		return c + ('a' - 'A'); /* ASCII values of characters */
	}

	return c;
}


int main(void) {
	char c = 'B';
	printf("Lowecase of %c is %c\n", c, toLowerCase(c));	
	return 0;

}
