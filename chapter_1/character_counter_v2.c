#include <stdio.h>

/* count characters in input v2 */
main() {
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		; /* null statement */
	printf("%.0f\n", nc);
}