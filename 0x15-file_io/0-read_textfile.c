#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 * @filename: file to be read
 * @letters: number of letters it should read and print
 * Return:  number of letters it could read and print, or 0 if file cannot be
 * opoened or read, or filename is NULL, or if write fails or does not write
 * the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int f, r, w;
char *buff;
if (filename == NULL)
return (0);
f = open(filename, O_RDONLY);
if (f == -1)
return (0);
buff = malloc(letters + 1);
if (buff == NULL)
{
close(f);
return (0);
}
r = read(f, buff, letters);
if (r == -1)
{
close(f);
free(buff);
return (0);
}
buff[r] = '\0';
w = write(STDOUT_FILENO, buff, r);
if (w == -1)
{
close(f);
free(buff);
return (0);
}
close(f);
free(buff);
return (r);
}
