#include <stdio.h>
main()
{
	float celcius,fahrenheit;
	printf("Enter Temperature In Celcius: \n");
	scanf("%f" , &celcius);
	fahrenheit = (9.0/5.0 * celcius) + 32;
	printf("The Temperature In Fahrenheit Is: %f\n" , fahrenheit);
}
