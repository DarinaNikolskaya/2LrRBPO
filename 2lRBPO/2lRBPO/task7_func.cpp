#include <iostream>
#include <math.h>
static double x = 7;
static double result;
static void f()
{
	result = ((x + 2 / (sqrt(2 * x))) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - sqrt(2)) / (x + 2));
}
