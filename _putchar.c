#include "main.h"
/**
 *_putchar - function that writes the character c to standard output
 *@c: the character to write
 *Return: 1 on success otherwise -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
