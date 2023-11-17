ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

void my_prompt(void);
void my_print(const char *format);
void read_instruction(char *instruction, size_t size);
void exec_instruction(const char *instruction);

#endif /* SHELL_H */
