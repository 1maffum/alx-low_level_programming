#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints a message to the standard error
 * without using printf or puts functions
 *
 * Return: Always 1
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = 0;

	while (message[len] != '\0')
		len++;

	if (write(STDERR_FILENO, message, len) == -1)
		return 1;

	return 1;
}
