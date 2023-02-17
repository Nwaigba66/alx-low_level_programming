#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
char mp;
for (mp = 'a' ; mp <= 'z' ; mp++)
{
	putchar(mp);
}
for (mp = 'A' ; mp <= 'Z' ; mp++)
{
	putchar(mp);
}
putchar('\n');
return (0);
}
