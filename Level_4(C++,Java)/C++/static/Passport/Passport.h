#ifndef PASSPORT_H
#define PASSPORT_H

#include <iostream>
#include "Date.h"

class InvalidId {};
class InvalidSeries {};
class OutOfSeries {};

class Passport {
    private:
        int id;
        std::string series;
        std::string name;
        std::string surname;
        Date dateOfBirth;
        
        void validateSeries();
    private:
        static const int startId;
        static const int finalId;
        static int lastId;
        static std::string lastSeries;
        
        static void validateNewSeries(const std::string& newSeries);
        
    public:
        Passport(const std::string& name, const std::string& surname, const Date& dateOfBirth);
        Passport(const Passport& copy);
        ~Passport();
        
        int getId() const;
        const std::string& getSeries() const;
        const std::string& getName() const;
        const std::string& getSurname() const;
        const Date& getDate() const;
        
        Passport& operator=(const Passport& copy);
    public:
        static void setSeries(const std::string& newSeries);
        static void setSeries(const std::string& newSeries, int newId);
};

std::ostream& operator<<(std::ostream& out, const Passport& pass);

#endif //PASSPORT_H
