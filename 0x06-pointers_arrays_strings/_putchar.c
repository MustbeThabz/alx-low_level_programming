#include <unistd.h>

/**
 * _putchar - writes the charcter c to stdout
 * @c: char to printed
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}