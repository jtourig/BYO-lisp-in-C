/* bonus 2 - purposefully omit main() */

#include <stdio.h>

int nope() {
	/* there's nothing here! */
	return -1;
}

/*
  Compilation fails:
 	Undefined symbols for architecture x86_64:
	"_main", referenced from:
	implicit entry/start for main executable
	ld: symbol(s) not found for architecture x86_64
	clang: error: linker command failed with exit code 1 (use -v to see invocation)
*/
