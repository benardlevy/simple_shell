#include "shell.h"

void my_print(const char *format)
{

	write(STDOUT_FILENO, format, strlen(format));

}
