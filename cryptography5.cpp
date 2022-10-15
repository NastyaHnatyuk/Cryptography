#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ukr");
    int a, b, p;
    cout << "---------- Завдання 5 ----------\n" << "Генерацiя простих чисел у дiапазонi вiд А до В\n";
    cout << "Введiть a: ";
    cin >> a;
    cout << "Введiть b: ";
    cin >> b;
    for (int i = a;i <= b;i++) {
        if (i == 1 || i == 0) continue;
        p = 1;
        for (int j = 2;j <= i / 2;++j) {
            if (i % j == 0) {
                p = 0;
                break;
            }
            
        }
        if (p == 1) cout << "simple numnber: " << i << endl;
    }

}