// StatementTask.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cmath>

// Dependencies
using namespace std;

int main()
{
	// Declare variables
	double  x, y, result;
	
	// Get values
	cout << "Please enter x: "; cin >> x;
	cout << "Please enter y: "; cin >> y;

	if ((x * y) > 0.5 && (x * y) < 10)
	{
		result = exp(x - abs(y));
	}
	else if((x * y) > 0.1 && (x * y) < 0.5)
	{
		result = pow(abs(x + y), 1.0 / 3);
	}
	else {
		result = 2 * pow(x, 2);
	}


	// Stop to see result
	cout << "\nResult:";
	cout << result;

	// Spacing
	cout << "\n";
	cout << "\n";
	system("pause");
    return 0;
}

