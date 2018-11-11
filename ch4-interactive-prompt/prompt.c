/* basic interactive prompt from ch4, takes and prints back input */

#include <stdio.h>

/* input buffer, size 2048 chars */
static char input[2048];

int main(int argc, char ** argv) {
	
	/* print version and exit help */
	puts("Lispy Version 0.0.0.0.1");
	puts("Ctrl + c to EXIT\n");

	/* infinite loop (hence ctrl-c) */
	while (1) {
		
		/* output prompt */
		fputs("lispy> ", stdout);

		/* read a line of user input <= 2048 chars */
		fgets(input, 2048, stdin);

		/* print input back to user */
		printf("No, you're a %s", input);
	}

	return 0;
}
