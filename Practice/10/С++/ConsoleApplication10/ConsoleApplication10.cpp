﻿// ConsoleApplication10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    long long int s, l1, r1, l2, r2, x1, x2;
    cin >> s >> l1 >> r1 >> l2 >> r2;
    if (s > pow(10, 15)) { cout << "Слишком большое s" << endl; }
    else if (s < -pow(10, 15)) { cout << "Слишком маленькое s" << endl; }
    else {
        if (l1 > pow(10, 15)) { cout << "Слишком большое l1" << endl; }
        else if (l1 < -pow(10, 15)) { cout << "Слишком маленькое l1" << endl; }
        else {
            if (r2 > pow(10, 15)) { cout << "Слишком большое r2" << endl; }
            else if (r2 < -pow(10, 15)) { cout << "Слишком маленькое r2" << endl; }
            else {
                if (l2 > pow(10, 15)) { cout << "Слишком большое l2" << endl; }
                else if (l2 < -pow(10, 15)) { cout << "Слишком маленькое l2" << endl; }
                else {
                    if (r1 > pow(10, 15)) { cout << "Слишком большое r1" << endl; }
                    else if (r1 < -pow(10, 15)) { cout << "Слишком маленькое r1" << endl; }
                    else {
                        if ((l1 <= r1) && (l2<=r2)){
                            if ((l1 + l2 <= s) && (r1 + r2 >= s)) {
                                x2 = s - l1;
                                if ((x2 - r2) > 0) {
                                    x1 = l1 + x2 - r2;
                                    x2 = s - x1;
                                    cout << x1 << " " << x2;
                                }
                                else if (x1 = l1) { cout << x1 << " " << x2 << endl; }
                            }
                            else { cout << -1 << endl; }
                        }
                        else { cout << "Неверные данные диапазона" << endl; }
                    }

                }
            }
        }
    }
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
