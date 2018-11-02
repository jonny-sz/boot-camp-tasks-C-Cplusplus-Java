#ifndef ARMY_FIELD_H
#define ARMY_FIELD_H

#include <iostream>

template <class T>
class Field {
    private:
        T value;
        T limit;
    
        T validate(T result);
        
    public:
        Field(T value);
        ~Field();
        
        const T getValue() const;
        const T getLimit() const;
        
        const bool operator==(const Field& other) const;
        const bool operator!=(const Field& other) const;
        const bool operator<=(const Field& other) const;
        const bool operator>=(const Field& other) const;
        const bool operator<(const Field& other) const;
        const bool operator>(const Field& other) const;
        
        void operator+=(const Field& other);
        void operator-=(const Field& other);
        void operator*=(const Field& other);
        void operator/=(const Field& other);
        
        T operator+(const Field& other);
        T operator-(const Field& other);
        T operator*(const Field& other);
        T operator/(const Field& other);
        
        const bool operator==(T value) const;
        const bool operator!=(T value) const;
        const bool operator<=(T value) const;
        const bool operator>=(T value) const;
        const bool operator<(T value) const;
        const bool operator>(T value) const;
        
        void operator+=(T value);
        void operator-=(T value);
        void operator*=(T value);
        void operator/=(T value);
        
        T operator+(T value);
        T operator-(T value);
        T operator*(T value);
        T operator/(T value);
        
        Field operator=(const Field& other);
        Field operator=(T value);
};

template <class T>
std::ostream& operator<<(std::ostream& out, const Field<T>& field);

#endif //ARMY_FIELD_H
