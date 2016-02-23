#include <stdlib.h>
#include <stdio.h>


float ft_celsius_2_fahrenheit(float celsius);

float ft_celsius_2_fahrenheit(float celsius)
{
	float fahrenheit;
	
	fahrenheit = 1.8 * celsius + 32;
	
	return fahrenheit;
}


