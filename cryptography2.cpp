#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ukr");
    int a, m;
    cout << "---------- Завдання 2 ----------\n" << "Розв'язування рiвняння виду a mod m = x\n";
    cout << "Введiть a: ";
    cin >> a;
    cout << "Введiть m: ";
    cin >> m;
    cout << "Отже шукане x = " << a % m;
}
