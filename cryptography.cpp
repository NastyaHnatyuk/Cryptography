#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ukr");
    cout << "---------- Завдання 1 ----------" << endl;
    int a = 156, m;
    cout << "a = 156" << endl << "Введiть модуль: ";
    cin >> m;
    cout << "Результат = " << a%m;
}
