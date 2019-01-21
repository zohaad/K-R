#include <stdio.h>

main() {
	printf("%d\n", getchar() != EOF); /* can be used to verify that ^D is the EOF character */
}