#include <stdio.h>

int isLeapYear(int year) {
	return (year % 4 ==0) && (year % 100 != 0 || year % 400 == 0);
}

int main(void) {
	int year = 2000;
	if(isLeapYear(year)) {
		printf("%d is a leap year.\n", year);
	} else {
		printf("%d is not a leap year.\n", year);
	}
	return 0;
}



