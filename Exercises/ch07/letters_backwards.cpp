#include <iostream>
#include <string>
using namespace std;

string backwards(string g) {
    string reversed = g;
    int last = g.length() - 1;

    for (int i = 0; i<= last; i++){
    reversed[i]= g[last-1];
}
return reversed;
}

int main(){
    string word = "bananas";
    cout << word << " backwards is " << backwards(word) << endl;
    return 0;
}

