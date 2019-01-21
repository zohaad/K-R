#include <stdio.h>

/* Ex: 1-4. Celsius to Fahrenheit converter */

main() {
	float celsius, fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;

	printf("%8s %10s\n", "Celsius", "Fahrenheit");

	while(celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%8.0f %10.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}