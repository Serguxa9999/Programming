#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int x, n, k(1);
    std::cin >> x >> n;
    if (n < 0) {
        while(n<0){
            k *= x;
            n -= -1;
        }
        x = 1 / k;
        cout << k << endl;
    }
    else if (n > 0) {
        while (n >= 1) {
            k *= x;
            n -= 1;
            }
        cout << k << endl;
        }
    else{ cout << "Ответ: 1" << endl; }
}
