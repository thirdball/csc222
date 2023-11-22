#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum Suit {CLUBS, DIAMONDS, HEARTS, SPADES};
enum Rank {ACE=1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT,
           NINE, TEN, JACK, QUEEN, KING};

struct Card
{
    Rank rank;
    Suit suit;

    Card();
    Card(Suit s, Rank r);
};

Card::Card()
{
    suit = CLUBS;
    rank = ACE;
}

Card::Card(Suit s, Rank r)
{
    suit = s;
    rank = r;
}

struct Deck
{
    vector<Card> cards;

    Deck(int n);
    Deck();

    void print_deck();
};

Deck::Deck(int size)
{
    vector<Card> temp(size);
    cards = temp;
}

Deck::Deck()
{
    vector<Card> temp(52);
    cards = temp;
    int i = 0;
    for (Suit suit = CLUBS; suit <= SPADES; suit = Suit(suit+1)) {
        for (Rank rank = ACE; rank <= KING; rank = Rank(rank+1)) {
            cards[i].suit = suit;
            cards[i].rank = rank;
            i++;
        }
    }
}

void Deck::print_deck()
{
    string suits[] = {"CLUBS", "DIAMONDS", "HEARTS", "SPADES"};
    string ranks[] = {"ACE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT",
                      "NINE", "TEN", "JACK", "QUEEN", "KING"};

    for (int i = 0; i < cards.size(); i++){
        cout << ranks[cards[i].rank] << " OF " << suits[cards[i].suit] << endl;
    }
}
