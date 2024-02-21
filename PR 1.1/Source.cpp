//////////////////////////////////////////////////////////////////////////////
// Source.cpp 
// головний файл проекту – функція main

#include "Money.h"
#include <iostream>
using namespace std;

Money makeMoney(int x, int y) {
    Money m;
    if (!m.Init(x, y))
        cout << "Wrong arguments to Init!" << endl;
    return m;
}


int main() {
    Money m;
    m.Read();
    m.Display();
    cout << "Sum: " << m.summa() << endl << endl;

    int x, y;
    cout << "Input money value:" << endl << endl;
    cout << " Nominal = "; cin >> x;
    cout << " Quantity = "; cin >> y;
    m.setFirst(x);
    m.setSecond(y);
    m.Display();
    cout << "Sum: " << m.summa() << endl;

    cin.get();
    return 0;
}
