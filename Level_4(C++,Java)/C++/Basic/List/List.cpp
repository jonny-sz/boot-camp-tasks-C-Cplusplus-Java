#include "List.h"

#define LIMIT 100

List::List(int capacity, double multiplier) : capacity(capacity), current(0), multiplier(multiplier) {
    this->array = (int*)malloc(sizeof(int)*capacity);
    
    if ( this->array == NULL ) {
        throw OutOfMemoryException();
    }
}

List::~List() {
    free(this->array);
}

int List::size() const {
    return current;
}

int List::max_size() const {
    return capacity;
}

void List::erase(int index) {
    int newCapacity;
    
    if ( this->current == 0 ) {
        throw ZeroLenException();
    }
    
    for ( int i = index + 1; i < this->current; i++ ) {
        this->array[i-1] = this->array[i];
    }
    
    this->current -= 1;
    
    newCapacity = this->current * multiplier;
    
    if ( newCapacity < this->capacity && this->capacity >= LIMIT ) {
        int* newArray = (int*)realloc(this->array, newCapacity*sizeof(int));
            
        if ( newArray == NULL ) {
            throw OutOfMemoryException();
        }
            
        this->capacity = newCapacity;
        this->array = newArray;
    }
}

void List::insert(int value, int index) {
    int newCurrent = this->current;
    
    this->push_back(value);
    
    if ( index < 0 ) {
        index = 0;
    }
    
    if ( index < newCurrent ) {
        for ( int i = newCurrent; i > index; i-- ) {
            this->array[i] = this->array[i-1];
        }
        
        this->array[index] = value;
    }
}

int List::find(int value) const {
    for ( int i = 0; i < this->current; i++ ) {
        if ( this->array[i] == value ) {
            return i;
        }
    }
    return -1;
}

void List::push_back(int value) {
    if ( this->current == this->capacity ) {
        int newCapacity = this->capacity * multiplier;
        int* newArray = (int*)realloc(this->array, newCapacity*sizeof(int));
        
        if ( newArray == NULL ) {
            throw OutOfMemoryException();
        }
        
        this->capacity = newCapacity;
        this->array = newArray;
    }
    
    this->array[current] = value;
    
    this->current += 1;
}

int List::pop_back() {
    int newCapacity;
    
    if ( this->current == 0 ) {
        throw ZeroLenException();
    }
    
    this->current -= 1;
    
    newCapacity = this->current * multiplier;
    
    if ( newCapacity < this->capacity && this->capacity >= LIMIT ) {
        int* newArray = (int*)realloc(this->array, newCapacity*sizeof(int));
            
        if ( newArray == NULL ) {
            throw OutOfMemoryException();
        }
            
        this->capacity = newCapacity;
        this->array = newArray;
    }
    
    return this->array[current];
}

void List::sort() {
    for ( int i = 1; i < this->current; i++ ) {
        int j = i;
        int tmp = this->array[i];
        
        for ( int prev = j - 1; j > 0 && tmp < this->array[prev]; j--, prev-- ) {
            this->array[j] = this->array[prev];
        }
        this->array[j] = tmp;
    }
}

int List::operator[](int index) const {
    return this->array[index];
}

bool List::operator==(const List& other) const {
    if ( this->current != other.current ) {
        return false;
    }
    
    for ( int i = 0; i < this->current; i++ ) {
        if ( this->array[i] != other.array[i] ) {
            return false;
        }
    }
    
    return true;
}

bool List::operator!=(const List& other) const {
    return !this->operator==(other);
}

std::ostream& operator<<(std::ostream& out, const List& list) {
    int last = list.size() - 1;
    
    out << " (" << list.size() << '/' << list.max_size() << ") :\n";
    
    for ( int i = 0; i < last; i++ ) {
        out << list[i] << ' ';
    }
    out << list[last];
    
    return out;
}
