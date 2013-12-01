// EP3.cpp : Defines the entry point for the console application.
// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?
// Written By: John Barksdale
// Date: 1/26/12


#include "stdafx.h"
#include <iostream>
#include <stdint.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	int exit;
	double num0 = 600851475143;
	int i;
	double prime = 0;
	double check;
	double lprime = 0;
	do
	{
		while(num0 / prime != 1)
		{
			for(i = 2; (num0 / i) - (int64_t)(num0 / i) != 0; i++)
			{
				;
			}
			check = (num0 / i) - (int64_t)(num0 / i);
			prime = i;
			num0 = num0 / i;
			if( prime > lprime)
			{
				lprime = prime;
			}			
			printf("prime %e check %e num0 %e lprime %e\n",prime, check, num0, lprime);
		}
			
		cin >> exit;

	} while ( exit != 2);

	return 0;

}

