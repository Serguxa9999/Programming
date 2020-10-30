
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int x, i(1), j(2);
    cin >> x;
    while (j <= x) {
        i *= j;
        j += 1;
    }
    cout << "Ответ:"<<i;
}
