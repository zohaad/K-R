#include <stdio.h>

/* one or more blanks to a single blank */
/* strategy: save last character, if next character is a blank as well, don't putchar() */

main() {
	int c, s;
	s = 0; /* the "state", 0 means previous character wasn't a blank, 1 means it was */

	while((c = getchar()) != EOF){
		if (s == 1)
			if (c == ' ')
				continue;
		s = 0;
		if (c == ' ')
			s = 1;
		putchar(c);
	}
}