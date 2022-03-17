#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void main() {
int c;

c = getchar();
while (c != EOF) {
    putchar(c);
    c = getchar();
 }
}
