#include "main.h"
/**
* main interface - copies the content of one file to another file
* @argc      : number arguments
* @argv      : array of pointers to the arguments
* Return     : 0 on success
* Description: exit code  97 - if the argument count is incorrect
*              exit code  98 - if file_from does not exist or cannot be read
*              exit code  99 - if file_to cannot be created or written to
*              exit code 100 - if file_to or file_from cannot be closed
*/
void close_file(int);
char *create_buffer(char *);

int main(int argc, char *argv[])
{
    int from, to, count, r, w;
    char *buff;

    count = 1024;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    buff = create_buffer(argv[2]);
    from = open(argv[1], O_RDONLY);
    to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

    if (from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    else if (to == -1)
    {
	    dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	    exit(99);
    }
    else
    {
        while (count == 1024)
        {
            r = read(from, buff, 1024);
            w = write(to, buff, r);
            
            if (r == -1)
            {
	            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	            exit(98);
            }
            else if (w != r)
            {
	            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	            exit(99);
            }

            count--;
        }

    }

    close_file(from);
    close_file(to);
    free(buff);
    return (0);
}

/**
 * close_file - closes a file
 * @fd: file descriptor for the file to be closed
 */
void close_file(int fd)
{
    if (close(fd) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @filename: name of the file that buffer is storing chars for
 * Return   : pointer to the newly-allocated buffer
 */
char *create_buffer(char *filename)
{
    char *buff;

    buff = malloc(3000 * sizeof(char));

    if (buff == NULL)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
    }

    return (buff);
}
