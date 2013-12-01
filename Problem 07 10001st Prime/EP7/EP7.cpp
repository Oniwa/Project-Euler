// EP7.cpp : Defines the entry point for the console application.
// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10 001st prime number?
// Written by: John Barksdale
// Date: 2/3/12

#include "stdafx.h"
#include <stdint.h>
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int64_t i = 2;
	int64_t number = 2;
	int y = 0;
	int64_t prime;
	int exit = 1;
	
	do{

	for(i = 2; y <= 10001; i++)
	{
			
		if((number%i == 0) && (number/i ==1))
		{
			prime = number;
			y++;
			number++;
			i=2;
		}
		else if((number%i == 0) && (number/i !=1))
		{
			number++;
			i= 2;
		}
	}
	printf("%d%",prime);
	
	cin >> exit;
	
	}while(exit !=2);
	
	return 0;
}

