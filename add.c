:x
/**
*main - prints the sum of two integers
*followed by a new line
*
*Return: Always 0 (success)
*/
int main(void)
{
	int a, b, sum;

	printf("Enter Two Integers : ");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("\nAddition = %d", sum);
return (0);
}
