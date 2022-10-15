#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ukr");
    int a, b, m;
    cout << "---------- Завдання 3 ----------\n" << "Розв'язування рiвняння виду a^b mod m = x\n";
    cout << "Введiть a: ";
    cin >> a;
    cout << "Введiть b: ";
    cin >> b;
    cout << "Введiть m: ";
    cin >> m;
    cout << "Результат: \nx = " << (a^b) % m;
}
