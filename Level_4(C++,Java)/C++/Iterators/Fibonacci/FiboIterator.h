#ifndef FIBOITERATOR_H
#define FIBOITERATOR_H

#include <cstdlib>

class FiboIterator {
    private:
        int current;
        int limit;
        long long* fibo;
        int maxIndex;
        bool isNegativeRange;
    public:        
        FiboIterator(int limit=5);
        ~FiboIterator();
        
        long long value();
        
        bool end() const;
        bool begin() const;
        void next();
        void prev();
        void reset();
        
        void operator++();
        void operator++(int);
        void operator--();
        void operator--(int);
        long long operator*();
};

#endif //FIBOITERATOR_H
