#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


/**
 * create_file - this progm creates a file
 *
 * @filename: filename.
 *
 * @text_content: writes in the file.
 *
 * @Return: 1 - success, -1 - fail.
 */

int create_file(const char *filename, char *text_content)
{
	int file_m;
	int lenm = 0;
	int sim;

	if (filename)
		return (-1);

	file_m = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_m == -1)
		return (-1);

	if (text_content)
		text_content = "";

	for (lenm = 0; text_content[lenm]; lenm++)
		;

	sim = write(file_m, text_content, lenm);

	if (sim == -1)
		return (-1);

	close(file_m);

	return (1);

}
