#include <stdio.h> 

int isEven(int number) {
	return (number % 2 == 0);
}
int isOdd(int number) {
	return (number  % 2 != 0);
}


int main(void) {
	int number = 7;
	if(isEven(number)) {
		printf("%d is even\n", number);
	} else {
		printf("%d is odd\n", number);
	}

}

