#include <iomanip>
#include "Date.h"

void Date::validate(int day, int month, int year) {
    bool isLeapYear = false;
    int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    if ( year < 1 ) {
        throw InvalidDate("Invalid year!");
    }
    
    if ( month < 1 || month > 12 ) {
        throw InvalidDate("Invalid month!");
    }
    
    if ( year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0 )) {
        isLeapYear = true;
    }
    
    if ( isLeapYear ) {
        days[2] = 29;
        
        if ( day > days[month] || day < 1) {
            throw InvalidDate("Invalid day!");
        }
    } else {
        if ( day > days[month] || day < 1) {
            throw InvalidDate("Invalid day!");
        }
    }
}

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {
    this->validate(day, month, year);
}

Date::~Date() {
    
}

int Date::getDay() const {
    return this->day;
}

int Date::getMonth() const {
    return this->month;
}

int Date::getYear() const {
    return this->year;
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
    out << std::setfill('0') << std::setw(2) << date.getDay() << '.' 
        << std::setfill('0') << std::setw(2) << date.getMonth() << '.' 
        << date.getYear();
}
