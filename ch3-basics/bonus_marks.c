/* ch3 bonus 1-3 */

#include <stdio.h>

int repeat_hello_world(int n); /* need to include prototype declaration before use */

int main(int argc, char ** argv) {
	
	puts("For loop...");
	for (int i = 0; i < 5; i++) {
		puts("Hello, World!");
	}

	puts("While loop...");
	int times = 0;
	while (times < 5) {
		puts("Hello, World");
		times += 1;
	}

	puts("From a function...");
	repeat_hello_world(5);

	return 0;
}

int repeat_hello_world(int n) {
	for ( ; n > 0; n--) {
		puts("Hello, World!");
	}
	return 0;
}
