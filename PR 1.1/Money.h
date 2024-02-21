//////////////////////////////////////////////////////////////////////////////
// Money.h 
// заголовний файл – визначення класу
#pragma once

class Money {
private:
    int first;
    int second;

public:
    bool Init(int, int);
    void Read();
    void Display() const;
    int summa() const;

    // Константний метод зчитування для поля first
    int getFirst() const {
        return first;
    }

    // Константний метод зчитування для поля second
    int getSecond() const {
        return second;
    }

    // Метод запису для поля first
    void setFirst(int value) {
        first = value;
    }

    // Метод запису для поля second
    void setSecond(int value) {
        second = value;
    }
};

