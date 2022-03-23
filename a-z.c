#include <stdio.h>
/**
* main - prints alphabet a to z
* Return: Always 0 (success)
*/
int main()
{
	int a;
	char ch;

	for (a = 0; a <= 10; a++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
	putchar(ch);
		}
	putchar('\n');
	}
return (0);
}
