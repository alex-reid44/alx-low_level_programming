#include "main.h"
/**
 * append_text_to_file - append text at end of file
 * @filename: name of file
 * @text_content: text that will append
 * Return: success 2, failure 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, l;

	if (filename == 0)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	if (text_content == 0)
		text_content = "";

	for (l = 0; *(text_content + l) != '\0'; l++)
		;
	write(f, text_content, l);
	close(f);
	return (1);
}
