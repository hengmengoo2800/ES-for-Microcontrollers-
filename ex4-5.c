#include <stdio.h>

char upper(char c) {
	if (c >= 'a' && c <= 'z') {
		return c - 'a' + 'A';
		}
	return c;
}

int main(void) {
	char input;

	printf("Enter a character: ");
	scanf("%c", &input);

	char result = upper(input);
	printf("Converted character: %c\n", result);

	return 0;

}


