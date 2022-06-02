#include "main.h"
/**
 * create_file - creates a new file
 * @filename    : pointer to the name of the file to be created
 * @text_content: pointer to a string to write into the file
 * Return       : 1 - upone success,
 *            or -1 - if function fails
 */
int create_file(const char *filename, char *text_content)
{
int o, w, len;

len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[len] != '\0')
len++;

}

o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(o, text_content, len);

if (o == -1 || w == -1)
return (-1);

close(o);
return (1);
}
