#include "palindrome.h"
/**
 * is_palindrome - verify is the input is palindrome
 * @n: number
 * Return: 0/1
 */
int is_palindrome(unsigned long n)
{
	unsigned long ver_aux = n;
	unsigned long num_rev1 = 0;

	while (ver_aux != 0)
	{
		num_rev1 = num_rev1 * 10;
		num_rev1 = num_rev1 + ver_aux % 10;
		ver_aux = ver_aux / 10;
	}
	if (n == num_rev1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
