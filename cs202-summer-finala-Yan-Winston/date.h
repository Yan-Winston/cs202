#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;
class date{
    private:
        int month, day, year; 
    public:
        date();
        date(int, int, int);
        date(const date&);

        int getDay();
        int getYear();
        int getMonth();

        void setDay(int);
        void setYear(int);
        void setMonth(int);
        
        int calculateDays();

        friend std::istream& operator>>(std::istream& stream, const date& c);
};
#endif