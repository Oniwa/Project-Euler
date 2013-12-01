// EP6.cpp : Defines the entry point for the console application.
// The sum of the squares of the first ten natural numbers is,
// 12 + 22 + ... + 102 = 385
// The square of the sum of the first ten natural numbers is,
// (1 + 2 + ... + 10)2 = 552 = 3025
// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025  385 = 2640.
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
// Written By: John Barksdale
// Date: 2/2/12


#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int squareofsums = 0;
	int sumofsquare = 0;
	int difference;
	int exit = 1;
	do
	{

	for(int i = 1; i <=100; i++)
	{
		squareofsums = squareofsums + i;
		sumofsquare = sumofsquare + i*i;
	}
	
	squareofsums = squareofsums * squareofsums;
	
	difference = squareofsums - sumofsquare;

	printf("%d %d %d",difference, squareofsums, sumofsquare);
	cin >> exit;
	}while(exit != 0);

	return 0;
}

