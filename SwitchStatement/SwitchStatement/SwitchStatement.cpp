// SwitchStatement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <clocale>  
#include <windows.h>


// Dependencies
using namespace std;

int main()
{
	// Console encoding (Russian language)
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// Declare variables
	int  card;
	std::string result;

	// Get values
	cout << "Please enter number of your card: "; cin >> card;

	switch (card)
	{
		case 6:
			result = "�������";
			break;

		case 7:
			result = "������";
			break;

		case 8:
			result = "��������";
			break;

		case 9:
			result = "�������";
			break;

		case 10:
			result = "�������";
			break;

		case 11:
			result = "�����";
			break;

		case 12:
			result = "����";
			break;

		case 13:
			result = "������";
			break;

		case 14:
			result = "���";
			break;

		default:
			result = "Invalid number of card. Please choose from 6 to 14!";
			break;
	}
	


	// Stop to see result
	cout << "\n���� �����: " + result;

	// Spacing
	cout << "\n";
	cout << "\n";
	system("pause");
	return 0;
}

