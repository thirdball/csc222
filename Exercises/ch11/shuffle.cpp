#include <iostream>
#include <cstdlib>   
#include <ctime>    
using namespace std;

void shuffle(int arr[], int size) {
    srand(time(0));
    for (int i = size - 1; i > 0; i--) {
        int a = rand() % (i + 1);
        int temp = arr[i];
        arr[i] = arr[a];
        arr[a] = temp;
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    shuffle(array, size);

    cout << "\nShuffled Array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    return 0;
}

