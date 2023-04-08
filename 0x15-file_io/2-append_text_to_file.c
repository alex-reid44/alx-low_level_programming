/*
 * File: 2-append_text_to_file.c
 * Auth: Alex reid
 */
#include "main.h"
/**
 * append_text_to_file - append text to the end of file
 * @filename: name of file to be pointed
 * @text_content: the text that will be added at the of the line.
 * Return: 1 on success and fail -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int t, x, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	t = open(filename, O_WRONLY | O_APPEND);
	x = write(t, text_content, len);

	if (t == -1 || x == -1)
		return (-1);

	close(t);

	return (1);
}
