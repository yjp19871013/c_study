#include "function.h"

int add(int a, int b) {
	return a + b;
}

void add_use_pointer(int a, int b, int *result) {
	*result = a + b;
}

int global_int = 100;
static int global_int_static = 100;
