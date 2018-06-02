#include <stdio.h>

int main(void)
{
	int a = 1;
	int b = 2;
	int c = 3;
	printf("a > b && c > b: %d\n", a > b && c > b);
	printf("a > b || c > b: %d\n", a > b || c > b);
	printf("!(a > b): %d\n", !(a > b));

	return 0;
}



