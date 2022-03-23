#include<stdio.h>
/**
*main - prints the division of two numbers
*followed by a new line
*
*Return: Always 0 (success)
*/
int main(void)
{
	int A, B, sum;

	printf("Enter Two Numbers : ");
	scanf("%d %d", &A, &B);
	sum = A / B;
	printf("\nDivision = %d", sum);
return (0);
}
