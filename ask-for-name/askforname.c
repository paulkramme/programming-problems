#include<stdio.h>

int main(void)
{
	char name[256];
	puts("Hey! What's your name?");
	scanf("%s", name);
	printf("Hello %s! Nice to meet you!\n", name);
	return 0;
}
