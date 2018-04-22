#include <stdio.h>

/*
Print a Fahrenheit-Celsiu table for fahr = 0, 20, ... ,300
floating point version
*/

main()
{
	float fahr, cels;
	int lower, upper, step;

	lower = 0;		//lower limit of temperature table
	upper = 300;	//upper limit of temperature table
	step  = 20; 	//step size of temperature table

	printf("\nFahrenheit -> Celsius table\n\n");

	fahr = lower;
	while (fahr <= upper)
	{
		cels = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f |%6.1f\n", fahr, cels);
		fahr = fahr + step;
	}
	return 0;
}