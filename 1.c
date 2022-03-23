#include<stdio.h>
/**
 * main - prints name and ask for correct
 * answer
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int x, a;
for (x = 1; x <= 3; x++)
{
printf("\nChioma!");
}
printf("\nHow many times did i call you : ");
scanf("%d", &a);
if (a == 3)
{
printf("\ndont give up keep pushing dear");
}
else
{
printf("\nif you like dont listen");
}
printf("\n");
return (0);
}
