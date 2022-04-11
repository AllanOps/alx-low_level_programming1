#include <stdio.h>
#define FILENAME __FILE__

/**
 * main - prints the filename of where its been compiled from
 *
 * Return always 0
 */

int main(void)
{
	printf("%s\n", FILENAME);

	return 0;
}
