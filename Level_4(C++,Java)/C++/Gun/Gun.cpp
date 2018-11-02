#include "Gun.h"

Gun::Gun(const std::string& model, int capacity) {
    this->amount = 0;
    this->capacity = capacity;
    this->isReady = 0;
    this->model = model;
    this->totalShots = 0;
}

Gun::~Gun() {}

int Gun::getAmount() const {
    return this->amount;
}

int Gun::getCapacity() const {
    return this->capacity;
}

bool Gun::ready() const {
    return this->isReady;
}

const std::string& Gun::getModel() const {
    return this->model;
}

int Gun::getTotalShots() const {
    return this->totalShots;
}

void Gun::prepare() {
    this->isReady = !(this->isReady);
    
    std::cout << this->model << " prepare!" << std::endl;
}

void Gun::reload() {
    this->amount = this->capacity;
    this->isReady = 0;
    
    std::cout << this->model << " reloded!" << std::endl;
}

void Gun::shoot() {
    if ( this->amount == 0 ) {
        throw OutOfRounds();
    }
    if ( !(this->isReady) ) {
        throw NotReady();
    }
    
    this->totalShots += 1;
    this->amount -= 1;
    
    std::cout << "Bang!" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Gun& gun) {
    out << gun.getModel() << ": " << "Ammunition[" << gun.getAmount() << '/' << gun.getCapacity() << "] Ready[";
    
    if ( gun.ready() ) {
        out << "yes] ";
    } else {
        out << "no] ";
    }
    
    out << "Total shots[" << gun.getTotalShots() << ']';
}
