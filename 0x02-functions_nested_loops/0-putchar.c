#include "main.h"
#include <unlstd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * on error, -1 is returned, and error is set appriopriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
