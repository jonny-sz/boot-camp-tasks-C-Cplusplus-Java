class IndexException {};

template <typename T>
class TArrayIterator {
    private:
        int current;
        T* array;
        int limit;
    public:
        TArrayIterator(T array[], int limit) {
            this->array = array;
            this->limit = limit;
            this->current = 0;
        }
        
        ~TArrayIterator() {}
        
        T value() {
            if ( this->end() ) {
                this->current -= 1;
            }
            if ( this->begin() ) {
                this->current += 1;
            }
            return this->array[current];
        }
        
        bool end() const {
            return this->current >= this->limit;
        }
        
        bool begin() const {
            return this->current < 0;
        }
        
        void next() {
            if ( this->end() ) {
                return;
            }
            if ( this->begin() ) {
                this->current += 1;
            }
            
            this->current += 1;
        }
        
        void prev() {
             if ( this->begin() ) {
                return;
            }
            if ( this->end() ) {
                this->current -= 1;
            }
            
            this->current -= 1;
        }
        
        void reset() {
            this->current = 0;
        }
        
        void move(const int index) {
            if ( index >= this->limit ) {
                throw IndexException();
            }
            
            this->current = index;
        }
        
        void operator++() {
            this->next();
        }
        
        void operator++(int) {
            this->operator++();
        }
        
        void operator--() {
            this->prev();
        }
              
        void operator--(int) {
            this->operator--();
        }
        
        T operator*() {
            return this->value();
        }
        
        T operator[](const int index) const {
            if ( index >= limit ) {
                throw IndexException();
            }
            
            return this->array[index];
        }
};
