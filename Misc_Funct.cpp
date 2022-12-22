//Uses a subroutine in a main file to manipulate some numeric data
// Misc_Funct.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include "Subroutine.cpp"
using namespace std;



int main()


{
	float x = 0, y = 0, N;

	cout << "Please type numbers:";  // ask for a set of numbers
	cin >> x >> y;

	int a{};
	
	N = x + y + sub_prog(a);
	
	
	cout << "Total Value is..." << N;


	return 0;
}