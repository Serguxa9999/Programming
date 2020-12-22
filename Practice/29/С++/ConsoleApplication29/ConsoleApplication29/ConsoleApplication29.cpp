// ConsoleApplication29.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
struct Student {
    string name;
    int group, math, phys, hist, prog;
};
using namespace std;
int main()
{
    setlocale(LC_ALL, "russian");
    vector<int> Students;
    Student st;
    vector<int> arr;
    cout << "Name:\n";
    string a;
    st.name = a;
    cin >> a;
    cout << "Group:\n";
    st.group = arr[1];
    cin >> arr[1];
    cout << "Math score:\n";
    st.math = arr[2];
    cin >> arr[2];
    cout << "Assesment in physics:\n";
    st.phys = arr[3];
    cin >> arr[3];
    cout << "The assesment of history:\n";
    st.hist = arr[4];
    cin >> arr[4];
    cout << "Based on the programming:\n";
    st.prog = arr[5];
    cin >> arr[5];
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
