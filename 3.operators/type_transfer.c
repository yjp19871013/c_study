#include <stdio.h>

int main(void)
{
	int a = 1;
	float b = 2.2;
	long c = 12;

	printf("a + c = %ld\n", a + c);
	printf("a + b = %f\n", a + b);
	printf("a + (int)b = %d\n", a + (int)b);

	return 0;
}


