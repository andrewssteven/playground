#include <stdio.h>
/**
* main - prints even and odd numbers from 7 to 15
* Return: Always 0 (success)
*/
void main()
{
	int a;

	for (a = 7; a <= 15; a++)
		{
		if ( a % 2 == 1)
		printf("%d is Odd\n", a);
		else
		printf("%d is Even\n", a);
		}
}
