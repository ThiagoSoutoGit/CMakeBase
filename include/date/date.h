//
// Created by thiago on 30/10/22.
//

#ifndef MODERNCMAKEEXAMPLE_DATE_H
#define MODERNCMAKEEXAMPLE_DATE_H


class Date
{
    int d, m, y;
//    static Date default_date;

public:
//    Date(int dd, int mm, int yy);
//    static void set_default(int d, int m, int y);
    Date(int d, int m, int y);

    void addYear(int n);
    void addMonth(int n);
    void addDay(int n);
    int getDay();
};


#endif //MODERNCMAKEEXAMPLE_DATE_H
