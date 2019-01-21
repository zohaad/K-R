#include <stdio.h>

/* print Fahrenheit-Celcius table
	for fahr = 0, 20, ..., 300 */
main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;		/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	fahr = lower;

	/* Ex 1-3: heading above the table */
	printf("%10s %15s\n", "Fahrenheit", "Celsius");
	while(fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%10.0f %15.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}