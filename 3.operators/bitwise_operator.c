#include <stdio.h>

int main(void)
{
	int a = 1;
	int b = 4;
	printf("a = 0x%08x\n", a);
	printf("b = 0x%08x\n", b);

	printf("a & b: 0x%08x\n", a & b);
	printf("a | b: 0x%08x\n", a | b);
	printf("a ^ b: 0x%08x\n", a ^ b);
	printf("~a: 0x%08x\n", ~a);
	printf("a << 2: 0x%08x\n", a << 2);
	printf("a >> 1: 0x%08x\n", a >> 1);

	printf("a | (1 << 2): 0x%08x\n", a | (1 << 2));
	printf("b & ~(1 << 2): 0x%08x\n", b & ~(1 << 2));

	return 0;
}


