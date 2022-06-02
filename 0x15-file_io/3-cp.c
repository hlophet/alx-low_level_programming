#include "main.h"
/**
* main interface - copies the content of one file to another file
* @argc: number arguments
* @argv: array of pointers to the arguments
* Return: 0 on success
* Description: exit code  97 - if the argument count is incorrect
*              exit code  98 - if file_from does not exist or cannot be read
*              exit code  99 - if file_to cannot be created or written to
*              exit code 100 - f file_to or file_from cannot be closed
*/
int main(int argc, char *argv[])
{
int from, to, count, r, w;
char buff[1024];

count = 1024;

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
}

from = open(argv[1], O_RDONLY);

if (from == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
}

to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

if (to == -1)
{
	close(from);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

while (count == 1024)
{
r = read(from, buff, 1024);

if (r == -1)
{
	close(from), close(to);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
}

w = write(to, buff, r);

if (w > r || w = -1)
{
	close(from), close(to);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

count--;
}

if ((close(from) == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);
}

if (close(to) == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);
}

return (0);
}
