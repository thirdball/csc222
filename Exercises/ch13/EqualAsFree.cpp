#include <iostream>
using namespace std;

struct Card
{
    int suit, rank;

    Card();
    Card(int s, int r);
};

Card::Card() {
    suit = 0; rank = 0;
}

Card::Card(int s, int r) {
    suit = s; rank = r;
}

bool equals(const Card c1, const Card c2){
    if (c1.rank == c2.rank && c1.suit == c2.suit){
        return true;
    } else {
    return false;}
}
int main(){
Card card1(1, 11);
Card card2(1, 11);

if (equals(card1, card2)) {
    cout << "Yup, that's the same card." << endl;
}
}