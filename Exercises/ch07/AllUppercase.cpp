#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string string_to_upper(string a){

int index = 0;
while (index <= a.length()) {
    char letter = a[index];
    char bletter = toupper(letter);
    cout << bletter <<endl;
    index = index + 1;
}
return 0;
}

int main(){

string bigword = string_to_upper("aaaaahhh");

cout << bigword << endl;

}