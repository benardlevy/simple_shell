#include "shell.h"

void exec_instruction(const char *instruction)
{

	pid_t child_pid = fork(); 
	//create a child process//

	if (child_pid == -1) 
	
	{
        perror("fork");
        exit(EXIT_FAILURE);
	} 
	
	else if (child_pid == 0) 
	
	{
	// Child process//
	execlp(instruction, instruction, (char *)NULL);
	perror("execlp");
	exit(EXIT_FAILURE);
	} 

	else 

	{
         // Parent process//
         wait(NULL);
	}

}


#include "shell.h"



void exec_instruction(const char *instruction) 
{
    
	pid_t child_pid = fork();

	if (child_pid == -1) 
	
	{
        my_print("Error forking process.\n");
        exit(EXIT_FAILURE);
    	} 
	
	else if (child_pid == 0) 

	{
        // Child process//

        // Parse the command and its arguments//
        char *args[128]; // Maximum 128 arguments//
        int arg_count = 0;

        char *token = strtok((char *)instruction, " ");
        while (token != NULL) 

	{
	args[arg_count++] = token;
	token = strtok(NULL, " ");
        }
        args[arg_count] = NULL; // Null-terminate the arguments array//

        // Execute the command//
        execvp(args[0], args);

        // If execvp fails, print an error message//
        my_print("Error executing command.\n");
        exit(EXIT_FAILURE);
	}
 
	else
 
	{
        // Parent process//
        wait(NULL);
	}

}
