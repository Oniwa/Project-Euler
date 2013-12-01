// EP5.cpp : Defines the entry point for the console application.
// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
// Written By: John Barksdale
// Date: 1/28/2012


#include "stdafx.h"
#include <iostream>
#include <stdint.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int exit;
	int i;
	int64_t num = 2;
	int64_t answer;
	
		
	do
	{
		
		for(i = 1; i <= 20; i++)
		{

			answer = num % i;
			
			if( answer == 0)
			{
				;
			}
			else
			{
				num++;
				i = 0;
			}
		}
		
		cout << num;

		cin >> exit;
	
	}while(exit != 2);
	
	return 0;
}

