#include "shell.h"

void read_instruction(char *instruction, size_t size) 
{
    if (fgets(instruction, size, stdin) == NULL) 
	{
        if (feof(stdin)) 
	{
            my_print("\n");
            exit(EXIT_SUCCESS);
        } 
	else 
	{
            my_print("Error while reading input.\n");
            exit(EXIT_FAILURE);
        }
    }
    instruction[strcspn(instruction, "\n")] = '\0'; // Remove newline//
}



#include "shell.h"

void read_instruction(char *instruction, size_t size)
{

	if (fgets(instruction, size, stdin) == NULL) 
	{
         if (feof(stdin)) 
	{
             my_print("\n");
             exit(EXIT_SUCCESS);
         } 
	 else 
	{
        my_print("Error while reading input.\n");
             exit(EXIT_FAILURE);
         }
     }
    instruction[strcspn(instruction, "\n")] = '\0'; // Remove newline//
 }
