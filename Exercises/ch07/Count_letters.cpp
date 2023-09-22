#include <iostream>
#include <string>
using namespace std;

string state = "Mississippi";
int count = 0;
int index = 0;

while (index < state.length()) {
    if (state[index] == 'i') {
        count = count + 1;
    }
    index = index + 1;
}
cout << count << endl;
