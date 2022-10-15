#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ukr");
    int a, b, m;
    cout << "---------- Завдання 4 ----------\n" << "Розв'язування рiвняння виду a*x = b mod m\n";
    cout << "Введiть a: ";
    cin >> a;
    cout << "Введiть b: ";
    cin >> b;
    cout << "Введiть m: ";
    cin >> m;
    cout << "Результат: \nx = " << (b / a) % m;
}