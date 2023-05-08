#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to be created
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int f, w, len = 0;
if (!filename)
return (-1);
f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (f == -1)
return (-1);
if (text_content)
{
while (text_content[len])
len++;
w = write(f, text_content, len);
}
else
{
w = write(f, "", 0);
}
if (w == -1)
{
close(f);
return (-1);
}
close(f);
return (1);
}
