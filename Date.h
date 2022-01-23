#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>

class Date
{
    public:
        Date();
        Date(int day, int month, int year);
        int month();
        int day();
        int year();

    private:
        int _month;
        int _day;
        int _year;
};

std::string toString(Date d);

#endif
