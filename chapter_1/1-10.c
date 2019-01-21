#include <stdio.h>

main() {
	int c;
	int b;


	b = '\\';

	while((c = getchar()) != EOF) {
		if (c == '\n') {
			putchar(b);
			putchar('n');
		}
		else if (c == '\t') {
			putchar(b);
			putchar('t');
		}
		else if (c == '\\') {
			putchar(b);
			putchar(b);
		}
		else {
			putchar(c);
		}
	}
}