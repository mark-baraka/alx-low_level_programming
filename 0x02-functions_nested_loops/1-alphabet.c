#include "main.h"
/**
 * print_alphabet - print alphabet lowercas
 * Return: Always 0.
 * print_alphabeis a function
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
