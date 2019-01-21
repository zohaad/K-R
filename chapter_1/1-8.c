#include <stdio.h>

main() {
	int c, b, t, nl;
	
	b  = 0;
	t  = 0;
	nl = 0;

	while((c = getchar()) != EOF) {
		if(c == ' ') /* I think they mean spaces by "blanks" */
			++b;
		if(c == '\t')
			++t;
		if(c == '\n')
			++nl;
	}
	printf("%s %d, %s %d, %s %d\n", "blanks:", b, "tabs:", t, "newlines:", nl);

}