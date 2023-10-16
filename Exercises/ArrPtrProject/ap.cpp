#include <iostream>
using namespace std;

int main() {
    const int ArraySize = 5;
    int numbers[ArraySize] = {2, 3, 5, 0, 1};  
    int sum = 0; 
    int* ptr = numbers;  

    for (int i = 0; i < ArraySize; i++) {
        sum += *ptr;  
        ptr++;  
    }

    cout << "Sum of the elements: " << sum << endl;

    return 0;
}

