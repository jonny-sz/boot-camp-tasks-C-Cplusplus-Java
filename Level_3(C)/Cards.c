#include <stdio.h>

typedef enum {
    CLUB, 
    DIAMOND, 
    HEART, 
    SPADE
} Suit;

typedef enum {
    ONE = 1, 
    TWO, 
    THREE, 
    FOUR, 
    FIVE, 
    SIX, 
    SEVEN, 
    EIGHT, 
    NINE, 
    TEN, 
    JACK,
    QUEEN, 
    KING
} Face;

typedef struct {
    Suit c_suit;
    Face c_face;
} Card;

void print(Card* card) {
    printf("Suit: %d face: %d\n", card->c_suit, card->c_face);
}

int main() {
    Card card = {CLUB, KING};
    
    print(&card);
    
    return 0;
}
