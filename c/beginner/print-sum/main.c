#include<stdio.h>

int main(void)
{
	long long number = 0;
	long long iteration = 0;
	long long sum = 0;
	puts("Enter a number to which the program should sum");
	scanf("%lli", &number);
	while(iteration <= number)
	{
		sum += iteration;
		++iteration;
	}
	printf("%lli\n", sum);
	return 0;
}
