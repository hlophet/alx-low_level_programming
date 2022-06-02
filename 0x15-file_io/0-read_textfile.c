#include "main.h"
/**
 * read_textfile - reads a text file and prints the contents onto the stdout
 * @filename: pointer to the name of the file
 * @letters : number of letters to be read and printed
 * Return   : 0 - if filename is NULL or function fails,
 *            actual number of letters (in bytes) to read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t o, r, w;
char *buff;

if (filename == NULL)
return (0);

buff = malloc(sizeof(char) * letters);

if (buff == NULL)
return (0);

o = open(filename, O_RDONLY);
r = read(o, buff, letters);
w = write(STDOUT_FILENO, buff, r);

if (o == -1 || r == -1 || w == -1 || w != r)
{
free(buff);
return (0);
}

close(o);
free(buffer);
return (w);
}
