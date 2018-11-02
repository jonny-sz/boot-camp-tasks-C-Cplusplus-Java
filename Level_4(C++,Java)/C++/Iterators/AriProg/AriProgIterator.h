#ifndef ARIPROGITERATOR_H
#define ARIPROGITERATOR_H

class AriProgIterator {
    private:
        int first;
        int step;
        int limit;
        int currentIndex;
        int currentValue;
    public:        
        AriProgIterator(int first=1, int step=1, int limit=5);
        ~AriProgIterator();
        
        int value() const;
        
        bool end() const;
        bool begin() const;
        void next();
        void prev();
        void move(int index);
        void reset();
        
        void operator++();
        void operator++(int);
        void operator--();
        void operator--(int);
        int operator*() const;
};

#endif //ARIPROGITERATOR_H
