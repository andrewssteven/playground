#include<stdio.h>
/**
*main - prints the greater of two numbers
i*
*Return: Always 0 (success)
*/
int main(void)
{
	int a, b;

	printf("Enter Two Numbers : ");
	scanf("%d %d", &a, &b);
	if(a > b)
{
	printf("%da is greater\n", a);
}
{
	else
	printf("%db is greater\n", b);
}
return (0);
}
