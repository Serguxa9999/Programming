#pragma first
#include<iostream>
using namespace std;
int Factorial(int x);
void main()
{
	int number;
	cout << "number: " << endl;
	cin>> number;
	for (int x = 0; x <= number; x++)
	{
		cout << x << "!" << " = " << Factorial(x) << endl;
	}
}
int Factorial(int x)
{
	int otvet = 1;
	for (int i = 1; i <= x; i++)
	{
		otvet = otvet * i;
	}
	return otvet;
}