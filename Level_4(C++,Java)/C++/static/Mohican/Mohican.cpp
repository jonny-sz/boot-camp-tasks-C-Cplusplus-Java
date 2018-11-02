#include "Mohican.h"

int Mohican::lastId = 0;
Mohican* Mohican::lastMohican = nullptr;

Mohican::Mohican(const std::string& name) : prev(nullptr), next(nullptr) {
    lastId += 1;
    this->name = name;
    this->id = lastId;
    if ( lastMohican != nullptr ) {
        this->prev = lastMohican;
        this->prev->next = this;
    }
    lastMohican = this;
}

Mohican::Mohican(const Mohican& copy) {
    lastId += 1;
    this->id = lastId;
    this->name = copy.name;
    this->prev = nullptr;
    this->next = nullptr;
    if ( lastMohican != nullptr ) {
        this->prev = lastMohican;
        this->prev->next = this;
    }
    lastMohican = this;
}

Mohican::~Mohican() {
    if( this->prev == nullptr && this->next != nullptr ) {
        this->next = nullptr;
    } else if ( this->prev != nullptr && this->next != nullptr ) {
        this->prev->next = this->next;
        this->next->prev = this->prev;
    } else if ( this->prev != nullptr && this->next == nullptr ) {
        this->prev->next = nullptr;
        lastMohican = this->prev;
    } else {
        lastMohican = nullptr;
    }
}

const std::string& Mohican::getName() const {
    return this->name;
}

int Mohican::getId() const {
    return this->id;
}

Mohican& Mohican::operator=(const Mohican& copy) {
    this->name = copy.name;
    
    return *this;
}

Mohican& Mohican::getLastMohican() {
    if ( lastMohican == nullptr ) {
        throw NoOneMahican();
    }
    return *lastMohican;
}

std::ostream& operator<<(std::ostream& out, const Mohican& mohican) {
    out << "Mohican " << mohican.getName();
    out << " id: " << mohican.getId();
    
    return out;
}
