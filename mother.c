#include<stdio.h>
/**
*main - print output three times and ask for input,
*if input is not 3 print negative
*
*Return: Always 0 (success)
*/
int main(void)
{
	int x;

	printf("steven");
	printf("steven");
	printf("steven");
	printf("how many times were you called");
	printf("Enter the number : ");
	scanf("%d", &x);
	if (x == 3)
	{
	printf("I know you won't listen");
	else
	printf("Remember who you are");
	}
return (0);
}
