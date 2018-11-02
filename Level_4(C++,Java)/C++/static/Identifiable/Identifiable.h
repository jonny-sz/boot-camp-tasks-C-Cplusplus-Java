#ifndef IDENTIFIABLE_H
#define IDENTIFIABLE_H

class Identifiable {
    private:
        int id;
    private:
        static int lastId;
    
    public:
        Identifiable();
        Identifiable(const Identifiable& copy);
        ~Identifiable();
        
        int getId() const;
        
        Identifiable& operator=(const Identifiable& copy);
};

#endif //IDENTIFIABLE_H
