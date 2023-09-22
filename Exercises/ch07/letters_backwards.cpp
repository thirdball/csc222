#include <iostream>
#include <string>
using namespace std;

string word = "banana";

int main(){
int index = word.length();
while (index > -1) {
    char letter = word[index];
    cout << letter;
    index = index - 1;
}}