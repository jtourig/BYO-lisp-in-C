/* using editline lib to make sane edits on the input command line */

#include <stdio.h>
#include <stdlib.h>					//gives access to free()
#include <editline/readline.h>
//#include <editline/history.h>		// this doesn't exist on macOS

int main(int argc, char ** argv) {
	
	/* print version and exit help */
	puts("Lispy Version 0.0.0.0.1");
	puts("< Ctrl+c > to EXIT\n");

	/* infinite loop (hence ctrl-c) */
	while (1) {
		
		/* output prompt, get input */
		char * input = readline("lispy> ");

		/* add input to history */
		add_history(input);

		/* print input back to user */
		printf("No, you're a %s\n", input);
		
		/* free up input */
		free(input);
	}
	return 0;
}
