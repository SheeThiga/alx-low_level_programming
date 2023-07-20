#include "main.h"

/**
 * _isdigit - function checks if character is a digit
 * @c: - parameter of function
 * Return: 1 on successs 0 on failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
