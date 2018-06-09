#include <stdio.h>
#include "function.h"

int main(void) {
	int a = 10;
	int b = 20;
	printf("a + b = %d\n", add(a, b));

	int result = 0;
	add_use_pointer(a, b, &result);
	printf("a + b = %d\n", result);

	printf("global_int = %d\n", global_int);
}

