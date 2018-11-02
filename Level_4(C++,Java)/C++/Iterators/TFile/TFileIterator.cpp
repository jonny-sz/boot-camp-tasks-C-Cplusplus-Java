#include <fstream>

template <typename T>
class TFileIterator {
    private:
        std::ifstream fin;
        T currentValue;
        bool eof;
    public:
        TFileIterator(const char* name) : eof(false) {
            this->fin.open(name);
            this->fin >> this->currentValue;
        }
        
        ~TFileIterator() {
            this->fin.close();
        }
        
        T value() const {
            return this->currentValue;
        }
        
        bool end() const {
            return this->eof;
        }
        
        void next() {
            T tmp;
            if ( this->fin >> tmp ) {
                this->currentValue = tmp;
                return;
            }
            this->eof = true;
        }
        
        void operator++() {
            this->next();
        }
        
        void operator++(int) {
            this->operator++();
        }
        
        T operator*() const {
            return this->value();
        }
};
