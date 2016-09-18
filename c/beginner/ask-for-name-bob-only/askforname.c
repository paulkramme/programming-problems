#include<stdio.h>
#include<string.h>

int main(void)
{
	char name[256];
	puts("Hey! What's your name?");
	scanf("%s", name);
	if(strcmp(name, "Bob") == 0 || strcmp(name, "Alice") == 0)
	{
		printf("Hello %s! Nice to meet you!\n", name);
	}
	else
	{
		puts("Nothing for you...");
	}
	return 0;
}
