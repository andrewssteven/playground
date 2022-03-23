#include <stdio.h>
/**
 * main - prints even numbers from 7 to 15
 * Return: Always 0 (success)
 */
int main()
{
        int g;

        for (g = 7; g < 15; g++)
        {
        if (g % 2 == 0)
        {
                printf("%dis even\n", g);
        }
        else
        {
                printf("%dis odd\n", g);
        }
        }
        return (0);
}
