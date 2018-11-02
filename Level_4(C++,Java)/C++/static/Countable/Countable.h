#ifndef COUNTABLE_H
#define COUNTABLE_H

class Countable {
    public:
        static int total;
        
    public:
        Countable();
        Countable(const Countable& copy);
        ~Countable();
        
        Countable& operator=(const Countable& copy);
};

#endif //COUNTABLE_H
