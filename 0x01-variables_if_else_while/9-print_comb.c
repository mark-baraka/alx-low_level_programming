#include <stdio.h>
/**
 * main - printing numbers from 0-9 with commas and space between them
 *
 * Description: using the main function
 * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 * Return: 0
 */
int main(void)
{
int c = 0;

while (c < 10)
{
	putchar(48 + c);

	if (c != 9)
	{
		putchar(',');
		putchar(' ');
	}
	c++;
}
putchar('\n');
return (0);
}
