//
// Created by thiago on 30/10/22.
//

#include "date/date.h"


//Date Date::default_date{16,12,1990};
//
//Date::Date(int dd, int mm, int yy)
//{
//    d = dd ? dd : default_date.d;
//    m = mm ? mm : default_date.m;
//    y = yy ? yy : default_date.y;
//}
//
//void Date::set_default(int d, int m, int y)
//{
//    default_date = {d,m,y};
//}

// void Date::Date(int dd, int mm, int yy) {
//
//}

//(int dd, int mm, int yy)
// {
//     d = dd;
//     m = mm;
//     y = yy;
// }

void Date::addYear(int n)
{
    y += n;
}

void Date::addMonth(int n)
{
    m += n;
}

void Date::addDay(int n)
{
    d += n;
}

int Date::getDay()
{
    return d;
}

Date::Date(int d, int m, int y) : d(d), m(m), y(y) {}
