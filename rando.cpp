#include "rando.h"
//#include <stdlib.h>


/**
 * Worry if only one child is smiling or if all children are smiling
**/
bool Rando::shouldWorry(bool childASmile, bool childBSmile, bool childCSmile)
{
	if( childASmile && childBSmile && childCSmile )
		return true;
	else if( childASmile ^ childBSmile ^ childCSmile )
		return true;
	else
		return false;
}
/**
 * Determines if first or second are evenly divisible by the other.
**/
bool Rando::isDivisbleBy(int first, int second)
{
	if(first % second == 0 && second % first == 0)
		return true;
	else
		return false;
}

/**
 * Given a number, num, says whether or not that number is prime
 * (that is, only evenly divisible by itself and 1. For the sake
 * of this function, do NOT consider 0 prime)
**/
bool Rando::isPrime(int num)
{
	for(int test = 2; test < num; test++)	
	{
		if(num % test == 0)
			return false;
	}
	return true;
}

/**
 * Given two numbers, first and second, return the value of the one
 * that is closest to zero without actually being zero.
**/
int Rando::nearestToZero(int a, int b)
{
	if(a == 0 && b != 0)
		return b;
	else if(b == 0 && a != 0)
		return a;
	else if(a < b)
		return a;
	else
		return b;
}
