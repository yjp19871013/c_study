#include <stdio.h>

int main(void) {
	int a = 0;
	int *ptr_a = &a;
	printf("*ptr_a = %d\n", *ptr_a);
	printf("ptr_a = %p\n", ptr_a);

	*ptr_a = 10;
	printf("new *ptr_a = %d, a = %d\n", *ptr_a, a);

	int arr [5] = {1, 2, 3, 4, 5};
	char str[5] = "abc\n";
	float float_arr[3] = {1.1, 2.2, 3.3};

	arr[2] = 30;
	int *int_arr = arr;
	printf("arr[0] = %d\n", *int_arr);

	printf("*(int_arr + 2) = %d, *(arr + 2) = %d, arr[2] = %d\n", *(int_arr + 2), *(arr + 2), arr[2]);

	return 0;
}
