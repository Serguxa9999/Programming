// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c, D, x1, x2, x, xn;
    cout << "Введите коэффициенты a, b и c"<< '\n';
    cin >> a;
    cin >> b;
    cin >> c;
    if(a!=0) {
        D = (b * b) + (-4 * a * c);
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        x = -b / 2 * a;
        if (D > 0) { cout << "Корни уравнения:" << ' ' << x1 << ' ' << x2 << endl; }
        else if (D == 0) { cout << "Корень уравнения:" << ' ' << x << endl; }
        else { cout << "Корней нет" << endl; }
    }
    else {
        if (b != 0) { 
                xn=c/b; 
                cout << "Корень уравнения: " <<xn << endl;
        }
        else {
            if (c==0)
            {cout << "Бесконечно много корней" << endl;}
            else {cout << "Корней нет" << endl;}
        }
    }
}

