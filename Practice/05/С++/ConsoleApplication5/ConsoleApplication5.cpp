// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x;
	double x0;
	double v0;
	double t;
	double a = 9.8;
	cout << "x=x0+v0*t-a*t*t/2" << '\n' << "Введите параметры x0, v0 и t" << '\n' << "x0=";
	cin >> x0;
	cout << ' ' << "v0=";
	cin >> v0;
	cout << ' ' << "t=";
	cin >> t;
	x = x0 + v0 * t - a * t * t / 2;
	//if (x >= 0)
	//{
		//cout << "x=" << x; //endl;
	//}
	//else
	//{
		//cout << "x=" << -x; //endl; 
	//}
	cout << '\n' << "x=" << x;
}

