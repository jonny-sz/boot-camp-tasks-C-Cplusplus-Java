#ifndef FACTORIALITERATOR_H
#define FACTORIALITERATOR_H

class FactorialIterator {
    private:
        int current;
        int limit;
        long long factorial;
    public:        
        FactorialIterator(int limit=5);
        ~FactorialIterator();
        
        long long value() const;
        
        bool end() const;
        bool begin() const;
        void next();
        void prev();
        void reset();
        
        void operator++();
        void operator++(int);
        void operator--();
        void operator--(int);
        long long operator*() const;
};

#endif //FACTORIALITERATOR_H
