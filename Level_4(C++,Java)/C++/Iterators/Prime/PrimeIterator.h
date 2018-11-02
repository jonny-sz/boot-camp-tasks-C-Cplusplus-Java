#ifndef PRIMEITERATOR_H
#define PRIMEITERATOR_H

#include <cstdlib>
#include <cmath>

class PrimeIterator {
    private:
        int current;
        int limit;
        int* prime;
        int maxIndex;
        int tmpValue;
        
        bool isPrime(int* prime, int n);
    public:        
        PrimeIterator(int limit=5);
        ~PrimeIterator();
        
        int value();
        
        bool end() const;
        bool begin() const;
        void next();
        void prev();
        void reset();
        
        void operator++();
        void operator++(int);
        void operator--();
        void operator--(int);
        int operator*();
};

#endif //PRIMEITERATOR_H
