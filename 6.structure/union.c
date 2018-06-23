#include <stdio.h>
#include <string.h>

union myunion {
	char a[4];
	int b;
};

int main(void) {
	union myunion u;
	memset(&u, 0, sizeof(u));
	strncpy(u.a, "123", 3);

	printf("u.a = %s\n", u.a);
	printf("u.b = %d\n", u.b);

	printf("&u.a = %p\n", u.a);
	printf("&u.b = %p\n", &u.b);
	printf("sizeof(u)=%ld\n", sizeof(u));

	return 0;
}




