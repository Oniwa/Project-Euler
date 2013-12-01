// EP4.cpp : Defines the entry point for the console application.
// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 99.
// Find the largest palindrome made from the product of two 3-digit numbers.
// Written By: John Barksdale
// Date: 1/29/2012


#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i;
	int j;
	int answer;

	for(i = 100; i <= 999; i++)
		for( j = 100; j <= 999; j++)
		{
			answer = i * j;
			printf("i: %d j: %d answer: %d \n", i , j , answer);
		}
	
	return 0;
}

