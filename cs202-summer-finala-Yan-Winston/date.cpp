#include "date.h"
#include <iostream>
using namespace std;
date::date(){
    day = 0;
    month = 0;
    year = 0;
}
date::date(int m, int d, int y){
    day = d;
    month = m;
    year = y;
}
date::date(const date& oldDate){
    day = oldDate.day;
    month = oldDate.month;
    year = oldDate.year;
}

int date::getDay(){
    return day;
}
int date::getYear(){
    return year;
}
int date::getMonth(){
    return month;
}

void date::setDay(int d){
    day = d;
}
void date::setYear(int y){
    year = y;
}
void date::setMonth(int m){
    month = m;
}
int date::calculateDays(){
    long int dayTotal = year * 365 + day; //total number days + year days
    const int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //calculate the number of days in the years
    for(int i = 0; i < month -1; i++){ //don't include current month because hasn't finished
        dayTotal +=monthDays[i];
    }
    int yearTemp = year;
    if(month <=2){
        yearTemp--;   
    }
    //leap years happen if 4, 400, but not 100
    int leapYearDays = (yearTemp/4) -(yearTemp/100) +(yearTemp/400);
    dayTotal += leapYearDays;
    return dayTotal;
}