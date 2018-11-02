#include "Field.h"

template <class T>
Field<T>::Field(T value) {
    this->value = value;
    this->limit = value;
}

template <class T>
Field<T>::~Field() {}

template <class T>
T Field<T>::validate(T result) {
    if ( result > this->limit ) {
        return this->limit;
    }
    if ( result < 0 ) {
        return 0;
    }
    
    return result;
}

template <class T>
const T Field<T>::getValue() const {
    return this->value;
}

template <class T>
const T Field<T>::getLimit() const {
    return this->limit;
}

template <class T>
const bool Field<T>::operator==(const Field& other) const {
    return this->value == other.value;
}

template <class T>
const bool Field<T>::operator!=(const Field& other) const {
    return !(*this == other);
}

template <class T>
const bool Field<T>::operator<=(const Field& other) const {
    return this->value <= other.value;
}

template <class T>
const bool Field<T>::operator>=(const Field& other) const {
    return this->value >= other.value;
}

template <class T>
const bool Field<T>::operator<(const Field& other) const {
    return this->value < other.value;
}

template <class T>
const bool Field<T>::operator>(const Field& other) const {
    return this->value > other.value;
}

template <class T>
void Field<T>::operator+=(const Field& other) {
    T result = this->value + other.value;
    
    this->value = this->validate(result);
}

template <class T>
void Field<T>::operator-=(const Field& other) {
    T result = this->value - other.value;
    
    this->value = this->validate(result);
}

template <class T>
void Field<T>::operator*=(const Field& other) {
    T result = this->value * other.value;
    
    this->value = this->validate(result);
}

template <class T>
void Field<T>::operator/=(const Field& other) {
    T result = this->value / other.value;
    
    this->value = this->validate(result);
}

template <class T>
T Field<T>::operator+(const Field& other) {
    return this->value + other.value;
}

template <class T>
T Field<T>::operator-(const Field& other) {
    return this->value - other.value;
}

template <class T>
T Field<T>::operator*(const Field& other) {
    return this->value * other.value;
}

template <class T>
T Field<T>::operator/(const Field& other) {
    return this->value / other.value;
}

template <class T>
const bool Field<T>::operator==(T value) const {
    return this->value == value;
}

template <class T>
const bool Field<T>::operator!=(T value) const {
    return this->value != value;
}

template <class T>
const bool Field<T>::operator<=(T value) const {
    return this->value <= value;
}

template <class T>
const bool Field<T>::operator>=(T value) const {
    return this->value >= value;
}

template <class T>
const bool Field<T>::operator<(T value) const {
    return this->value < value;
}

template <class T>
const bool Field<T>::operator>(T value) const {
    return this->value > value;
}

template <class T>
void Field<T>::operator+=(T value) {
    T result = this->value + value;
    
    this->value = this->validate(result);
}

template <class T>
void Field<T>::operator-=(T value) {
    T result = this->value - value;
    
    this->value = this->validate(result);
}

template <class T>
void Field<T>::operator*=(T value) {
    T result = this->value * value;
    
    this->value = this->validate(result);
}

template <class T>
void Field<T>::operator/=(T value) {
    T result = this->value / value;
    
    this->value = this->validate(result);
}

template <class T>
T Field<T>::operator+(T value) {
    return this->value + value;
}

template <class T>
T Field<T>::operator-(T value) {
    return this->value - value;
}

template <class T>
T Field<T>::operator*(T value) {
    return this->value * value;
}

template <class T>
T Field<T>::operator/(T value) {
    return this->value / value;
}

template <class T>
Field<T> Field<T>::operator=(const Field& other) {
    this->value = other.value;
    this->limit = other.limit;
    
    return *this;
}

template <class T>
Field<T> Field<T>::operator=(T value) {
    this->value = value;
    this->limit = limit;
    
    return *this;
}

template <class T>
std::ostream& operator<<(std::ostream& out, const Field<T>& field) {
    out << '[' << field.getValue() << '/' << field.getLimit() << ']';
    
    return out;
}

template class Field<int>;
template class Field<float>;
template class Field<double>;

template std::ostream& operator<<(std::ostream& out, const Field<int>& field);
template std::ostream& operator<<(std::ostream& out, const Field<float>& field);
template std::ostream& operator<<(std::ostream& out, const Field<double>& field);
