// Compute power using Pow.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float base, exp, result;

	cout << "Enter The Number 1: ";
	cin >> base;
	cout << "Enter The Number 2: ";
	cin >> exp;

	result = pow(base, exp);

	cout << "Power of " << base << " ^ " << exp << " = " << result << "\n";

    return 0;
}

