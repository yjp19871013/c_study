#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int size = 10;
	int len = size * sizeof(int);
	int *arr = (int *)malloc(len);
	if (NULL == arr) {
		printf("malloc error\n");
		return 1;
	}

	memset(arr, 0, len);
	for (int i = 0; i < size; i++) {
		arr[i] = i;
	}


	for (int i = 0; i < size; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	free(arr);

	return 0;
}



