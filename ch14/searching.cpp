#include <vector>
#include <iostream>
using namespace std;

struct Deck;
struct Card
{
    int suit, rank;

    Card();
    Card(int s, int r);
    
    bool equals(const Card& other) const;
    static int find(const Card& card, const Deck& deck);

};

struct Deck
{
    vector<Card> cards;
};

Card::Card() {
    suit = 0; rank = 0;
}

Card::Card(int s, int r) {
    suit = s; rank = r;
}

bool Card::equals(const Card& other) const {
    return (suit == other.suit) && (rank == other.rank);
}

vector<Card> build_deck() {
    vector<Card> deck;
    int i = 0;
    for (int suit = 0; suit <= 3; suit++) {
        for (int rank = 1; rank <= 13; rank++) {
            deck.push_back(Card(suit, rank));
            i++;
        }
    }
    return deck;
}

int Card::find(const Card& card, const Deck& deck)
{
    for (int i = 0; i < deck.cards.size(); i++) {
        if (deck.cards[i].equals(card)) return i;
    }
    return -1;
}

int main(){
    vector<Card> deck = build_deck();
    int index = Card::find(deck[17], {deck});
    cout << "Your card was found at index " << index << "." << endl;
    return 0;
}
