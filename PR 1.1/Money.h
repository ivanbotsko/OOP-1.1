//////////////////////////////////////////////////////////////////////////////
// Money.h 
// ���������� ���� � ���������� �����
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

    // ����������� ����� ���������� ��� ���� first
    int getFirst() const {
        return first;
    }

    // ����������� ����� ���������� ��� ���� second
    int getSecond() const {
        return second;
    }

    // ����� ������ ��� ���� first
    void setFirst(int value) {
        first = value;
    }

    // ����� ������ ��� ���� second
    void setSecond(int value) {
        second = value;
    }
};

