#include "Date.h"
#include <assert.h>
#include <string>

using namespace std;


Date::Date(){

}


Date::Date(int day, int month, int year) : _day(day),_month(month), _year(year)
{

}

int Date::month()
{
	return _month;
}

int Date::day()
{
	return _day;
}

int Date::year()
{
    return _year;
}

string toString(Date d)
{
    return to_string(d.day()) + "/" + to_string(d.month()) + "/" + to_string(d.year()) ;
}
