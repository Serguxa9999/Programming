﻿// ConsoleApplication28.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

void print_factorization(unsigned int n) {
    if (n < 4) { cout << n; }
    else {
        std::vector<int> b;
        int i = 2;
        int j = 0;
        int w = 1;
        int w1 = 1;
        int n1 = n;
        while (i) {
            if (!(n1 % i)) {
                n1 = n1 / i;
                b.push_back(i);
                i = 2;
            }
            else { i++; }
            if ((n1 / i) == 1) {

                b.push_back(n1);
                i = 0;
            }
        }
        while ((b.size()) > 0) {
            if ((b.size()) == 1) {
                cout << b[0];
                b.clear();
            }
            else {
                for (int q = 0; q < (b.size() - 1); q++) {
                    if (b.size() < 2) {
                        q = b.size() + 10;
                    }
                    else {
                        if (b[q] == b[q + 1]) {
                            if (q == (b.size() - 2)) {
                                cout << b[0] << "^" << b.size();
                                b.clear();
                            }
                        }
                        else {
                            w = b[0];
                            w1 = q + 1;
                            auto begin = b.cbegin();
                            b.erase(begin, begin + q + 1);
                            if (w1 > 1) {
                                cout << w << "^" << w1 << "*";
                            }
                            else cout << w << "*";
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int a;
    cin >> a;

    print_factorization(a);

    cout << "\n";

    system("pause");
    return 0;
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
