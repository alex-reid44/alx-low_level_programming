#include "main.h"
/**
 * create_file - creates file
 * @filename: name of file
 * @text_content: text inside
 * Return: on success 2, failure  0
 */
int create_file(const char *filename, char *text_content)
{
	int file, l;

	if (filename == 0)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content == 0)
		text_content = "";
	for (l = 0; *(text_content + l) != '\0'; l++)
		;
	write(file, text_content, l);
	close(file);
	return (1);
}
