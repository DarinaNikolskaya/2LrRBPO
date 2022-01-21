#pragma once
#include <iostream>
#include <math.h>
extern double x;
extern double result;
static void f()
{
	result = ((x + 2 / (sqrt(2 * x))) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - sqrt(2)) / (x + 2));
}
