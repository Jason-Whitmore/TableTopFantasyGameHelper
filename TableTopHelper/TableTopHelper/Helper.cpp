#include "Helper.h"

double Helper::randomDouble(double lower, double upper)
{
	double delta = upper - lower;

	double r = lower;

	double scalar = (double)rand() / RAND_MAX;

	return r + (delta * scalar);
}
