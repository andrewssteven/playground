#include <stdio.h>
/**
* main - print the value of a pointer
* Return: Always 0 (success)
*/
int main(void)
{
	int *p;
	int n;

	n = 19;
	p = &n;

printf("The address of 'n' : %p\n", &n);
printf("The value of 'p' : %p\n", p);
return (0);
}
