// EP1.cpp : Defines the entry point for the console application.
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.
// Written By: John Barksdale
// Date: 1/26/12

#include "stdafx.h"
#include <iostream>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{	
	double exit;
	
	do{
	double i;
	double answer = 0;
	

	for( i = 1; i < 1000; i++)
	{
		if(( i/3 - (int)i/3 == 0) || ( i/5 - (int)i/5 == 0))
			answer += i;
		else
			;


	}

	printf("%e",answer);

	cin >> exit;
	} while ( exit != 2);
	return 0;
}

