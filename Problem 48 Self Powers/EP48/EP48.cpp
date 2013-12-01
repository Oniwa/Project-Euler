// EP48.cpp : Defines the entry point for the console application.
// The series, 1^1 + 2^2 + 3^3 + ... + 10^10 = 10405071317.
// Find the last ten digits of the series, 1^1 + 2^2 + 3^3 + ... + 1000^1000.

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <stdint.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int i;
	int64_t answer = 0;
	int exit;

	do{
	for(i=1; i<=1000; i++)
	{
		answer = answer + pow(i*1.0,i);
	}
	
	printf("%I64d",answer);

	cin >> exit;

	}while( exit != 2);
	
	return 0;
}

