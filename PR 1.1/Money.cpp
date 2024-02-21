//////////////////////////////////////////////////////////////////////////////
// Money.cpp 
// פאיכ נואכ³חאצ³¿ – נואכ³חאצ³ÿ לועמה³ג ךכאסף
// Money.cpp 
#include "Money.h"
#include <iostream>

using namespace std;

bool Money::Init(int x, int y) {
    if ((x == 1 || x == 2 || x == 5 || x == 10 || x == 20 || x == 50 || x == 100 || x == 200 || x == 500) && y >= 0) {
        setFirst(x);
        setSecond(y);
        return true;
    }
    else {
        return false;
    }
}

void Money::Read() {
    int x, y;
    do {
        cout << "Input money value:" << endl;
        cout << " Nominal = "; cin >> x;
        cout << " Quantity = "; cin >> y;
    } while (!Init(x, y));
}

void Money::Display() const {
    cout << endl;
    cout << " Nominal = " << getFirst() << endl;
    cout << " Quantity = " << getSecond() << endl;
}

int Money::summa() const {
    return getFirst() * getSecond();
}
