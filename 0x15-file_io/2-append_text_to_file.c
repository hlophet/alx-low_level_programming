#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename    : pointer to the name of the file
 * @text_content: string to add to the end of file filename
 * Return       : 1 on success,
 *            or -1 - if file does not exist and the user
 *                    lacks write permissions, function fails
 *                    or filename is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
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

o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, len);

if (o == -1 || w == -1)
return (-1);

close(o);
return (1);
}
