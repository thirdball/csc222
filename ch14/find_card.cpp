#include <iostream>
#include <math.h>
using namespace std;

int find_card(const Card& card, const vector<Card>& deck)
{
    for (int i = 0; i < deck.size(); i++) {
        if (deck[i].equals(card)) return i;
    }
    return -1;
}