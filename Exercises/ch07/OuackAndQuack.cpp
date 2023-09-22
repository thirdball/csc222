#include <iostream>
#include <string>
using namespace std;

string suffix = "ack";
int main(){
char letter = 'J';
while (letter <= 'Q') {
    if (letter == 'O'||letter == 'Q'){
        cout << letter << "u" << suffix <<endl;
    }
    else{
    cout << letter + suffix << endl; }
    letter++;
}}