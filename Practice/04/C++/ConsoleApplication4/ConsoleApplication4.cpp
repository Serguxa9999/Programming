// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a;
	double b;

	cout << "Введите два числа" << '\n';
	cin >> a;
	cout << '\n';
	cin >> b;

	double c=a;
	a = b;
	b = c;

    cout << "\n\n" << a << '\n' << b;

	double x;
	double y;

	cout << "\n\n" << "Введите два числа" << '\n';
	cin >> x;
	cout << '\n';
	cin >> y;

	x+=y;
	y = x - y;
	x -= y;
	cout << "\n\n" << x << '\n' << y;
}