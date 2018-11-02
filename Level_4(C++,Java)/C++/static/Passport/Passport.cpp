#include "Passport.h"

const int Passport::startId = 100000;
const int Passport::finalId = 999999;
int Passport::lastId = startId;
std::string Passport::lastSeries = "AA";

void Passport::validateSeries() {
    if ( lastSeries[0] == 'Z' && lastSeries[1] == 'Z' && lastId > finalId ) {
        throw OutOfSeries();
    }
    if ( lastSeries[1] == 'Z' && lastId > finalId ) {
        lastSeries[0] += 1;
        lastSeries[1] = 'A';
        lastId = startId;
    } else if ( lastId > finalId ) {
        lastSeries[1] += 1;
        lastId = startId;
    }
}

void Passport::validateNewSeries(const std::string& newSeries) {
    if ( newSeries.size() != lastSeries.size() ) {
        throw InvalidSeries();
    }
    if ( newSeries[0] < lastSeries[0] || newSeries[0] > 'Z' ) {
        throw InvalidSeries();
    }
    if ( newSeries[1] < 'A' || newSeries[1] > 'Z' ) {
        throw InvalidSeries();
    }
    if ( newSeries[0] == lastSeries[0] && newSeries[1] < lastSeries[1] ) {
        throw InvalidSeries();
    }
}

Passport::Passport(const std::string& surname, const std::string& name, const Date& dateOfBirth) {
    validateSeries();
    this->id = lastId;
    this->series = lastSeries;
    this->name = name;
    this->surname = surname;
    this->dateOfBirth = dateOfBirth;
    lastId += 1;
}

Passport::Passport(const Passport& copy) {
    validateSeries();
    this->id = lastId;
    this->series = lastSeries;
    this->name = copy.name;
    this->surname = copy.surname;
    this->dateOfBirth = copy.dateOfBirth;
    lastId += 1;
}

Passport::~Passport() {}

int Passport::getId() const {
    return this->id;
}

const std::string& Passport::getSeries() const {
    return this->series;
}

const std::string& Passport::getName() const {
    return this->name;
}

const std::string& Passport::getSurname() const {
    return this->surname;
}

const Date& Passport::getDate() const {
    return this->dateOfBirth;
}

Passport& Passport::operator=(const Passport& copy) {
    this->name = copy.name;
    this->surname = copy.surname;
    this->dateOfBirth = copy.dateOfBirth;
    
    return *this;
}

void Passport::setSeries(const std::string& newSeries) {
    validateNewSeries(newSeries);
    
    lastSeries = newSeries;
    lastId = startId;
}

void Passport::setSeries(const std::string& newSeries, int newId) {
    validateNewSeries(newSeries);
    
    if ( newId < startId || newId > finalId ) {
        throw InvalidId();
    }
    
    lastSeries = newSeries;
    lastId = newId;
}

std::ostream& operator<<(std::ostream& out, const Passport& pass) {
    out << "--------------------------------" << '\n';
    out << "     Passport: " << pass.getSeries() << ' ' << pass.getId() << '\n';
    out << "      Surname: " << pass.getSurname() << '\n';
    out << "         Name: " << pass.getName() << '\n';
    out << "Date of birth: " << pass.getDate();
}
