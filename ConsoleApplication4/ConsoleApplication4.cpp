﻿// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()

{
	int x[3][3], d = 0;

	cout << "Type 9 Numbers\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> x[i][j];
		}
	}
	d = x[0][0] * (x[1][1] * x[2][2] - x[1][2] * x[2][1])
		- x[0][1] * (x[1][0] * x[2][2] - x[1][2] * x[2][0])
		+ x[0][2] * (x[1][0] * x[2][1] - x[1][1] * x[2][0]);

	cout << "\nDeterminant Is: " << d << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
