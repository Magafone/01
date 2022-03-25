#include <iostream>
using std::cout; using std::cin;

int sm_to_m;
int sm, m, smmod;
const int M = 100; // постоянная, количество см в м

int main()
{
    setlocale(0,"russian");
    cout << "Введите значение в сантиметрах: _____\b\b\b\b\b\n";
    cin >> sm; // переменная (сантиметры)
   cout << "Результат преобразования: " << sm_to_m(m) << " м, " << sm_to_m(smmod) << " см\n";
    system("pause");
    return 0;
}

int sm_to_m(int m, int smmod) // smmod - остаток от деления sm на m
{
    m = sm / M;
    smmod = sm % M;
    return m, smmod;
}
