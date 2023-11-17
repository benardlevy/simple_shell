#include "shell.h"
/*
 * 
 */

int main(void)
{

	 char instruction[128];

	while (true)

	{
	my_prompt();
        read_instruction(instruction, sizeof(instruction));
        exec_instruction(instruction);
	}

	return 0;

}
