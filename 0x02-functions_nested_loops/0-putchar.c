#include <stdio.h>
/**
 * _putchar - writes the char c to stdout
 * @c: the character to print
 * *Return: on success 1
 * On error, -1 is returned, and errorNumber is set accordingly
 */
 int _putchar(char c)
 {
        return(write(1, &c, 1));
 }
 int main(void)
 {
        _putchar();
        return(0);
 }

