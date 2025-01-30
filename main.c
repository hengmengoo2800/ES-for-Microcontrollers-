#include <stdio.h>

int main(void) {
	int i;

	i = 1;
	printf("\ti\ti\ti\n");
	printf("\t\t Squared Cubed\n\n");
	while (i < 11)
	{
		printf("\t%d\t%d\t%d\n", i, i*i, i*i*i);
		i=i+1;
	}
	return 0;
}
