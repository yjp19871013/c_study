#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct user {
	char username[255];
	char password[255];
	int age;
};

typedef struct {
	char username[255];
	char password[255];
	int age;
} USER, *PUSER;

int main(void) {
	struct user user1 = {"user1", "123456", 20};
	struct user user2;
	memset(&user2, 0, sizeof(user2));
	strncpy(user2.username, "user2", sizeof(user2.username) - 1);
	strncpy(user2.password, "123456", sizeof(user2.password) - 1);
	user2.age = 30;

	printf("user1:\n");
	printf("username=%s, password=%s, age=%d\n", user1.username, user1.password, user1.age);

	printf("user2:\n");
        printf("username=%s, password=%s, age=%d\n", user2.username, user2.password, user2.age);

	USER user3 = {"user3", "123456", 10};
        PUSER user4 = (PUSER)malloc(sizeof(USER));
        memset(user4, 0, sizeof(USER));
        strncpy(user4->username, "user4", sizeof(user4->username) - 1);
        strncpy(user4->password, "123456", sizeof(user4->password) - 1);
        user4->age = 40;

        printf("user3:\n");
        printf("username=%s, password=%s, age=%d\n", user3.username, user3.password, user3.age);

        printf("user4:\n");
        printf("username=%s, password=%s, age=%d\n", user4->username, user4->password, user4->age);

	free(user4);

	return 0;
}



