#include <stdio.h>
/**
* main - prints a multiplication table of a given number
* Return: Always 0 (success)
*/
int main()
{
	int number;
	int counter;

	printf("Enter a number : ");
	scanf("%d", &number);

	for (counter = 0; counter <= 12; counter++)
	{
	printf("%d * %d = %d\n", number, counter, number * counter);
	}
return (0);
}
