#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print 0, 1, -9
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int n = 0;
for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
