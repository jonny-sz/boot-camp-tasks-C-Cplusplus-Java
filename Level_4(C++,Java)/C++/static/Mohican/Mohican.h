#ifndef MOHICAN_H
#define MOHICAN_H

#include <iostream>

class NoOneMahican {};

class Mohican {
    private:
        int id;
        Mohican* prev;
        Mohican* next;
        std::string name;
    private:
        static int lastId;
        static Mohican* lastMohican;
        
    public:
        Mohican(const std::string& name);
        Mohican(const Mohican& copy);
        ~Mohican();
        
        int getId() const;
        const std::string& getName() const;
        
        Mohican& operator=(const Mohican& copy);
    public:    
        static Mohican& getLastMohican();
};

std::ostream& operator<<(std::ostream& out, const Mohican& mohican);

#endif //MOHICAN_H