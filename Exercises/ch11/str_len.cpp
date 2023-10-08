#include <iostream>
using namespace std;

int str_len(const char* str) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    const char* stringy = "elephant";
    int length = str_len(stringy);
    cout << "The length of the string is " << length << endl;
    return 0;
}

