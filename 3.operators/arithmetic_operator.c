#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 2;
	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a %% b = %d\n", a % b);
	printf("a++ = %d, ++a = %d\n", a++, ++a);
	printf("b-- = %d, --b = %d\n", b--, --b);

	int c = a++;
	int d = a--;
	printf("c = %d\n", c);
	printf("d = %d\n", d);

	return 0;
}


