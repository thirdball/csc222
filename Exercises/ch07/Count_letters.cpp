#include <iostream>
#include <string>
using namespace std;

int main(){
string state = "Mississippi";
char a = 's';

int count = 0;
int index = 0;

while (index < state.length()) {
    if (state[index] == a) {
        count = count + 1;
    }
    index = index + 1;
}
cout << count << endl;
}