#include "main.h"

/**
 * append_text_to_file - appends text at end of file.
 * @filename: Pointer to name of file.
 * @text_content: String to add to end of file.
 *
 * Return: if function fails or filename is NULL - -1.
 *         if file does not exist user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, z, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	z = write(o, text_content, len);

	if (o == -1 || z == -1)
		return (-1);

	close(o);

	return (1);
}
