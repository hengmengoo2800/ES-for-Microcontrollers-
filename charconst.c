#include <stdio.h>

int main(void) {
	int c, nl=0;
	while ((c=getchar()) != EOF)
		if (c=='\n')
			nl++;

	printf("The number of lines is %d\n", nl);
	return 0;

}
