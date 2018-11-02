#ifndef GEOPROGITERATOR_H
#define GEOPROGITERATOR_H

class GeoProgIterator {
    private:
        long long first;
        long long step;
        int limit;
        int currentIndex;
        long long currentValue;
    public:        
        GeoProgIterator(long long first=1, long long step=2, int limit=5);
        ~GeoProgIterator();
        
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

#endif //GEOPROGITERATOR_H
