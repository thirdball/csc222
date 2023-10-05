#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> numbers = {8, 2, 2, 7, 3, 3, 3, 4, 5, 5, 67, 4, 5};
    int consecutiveCount = 1;  // Start with 1 to account for the first occurrence
    int targetNumber = numbers[0];  // Initialize with the first number

    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] == targetNumber) {
            consecutiveCount++;
            if (consecutiveCount == 3) {
                cout << "Consecutive values fround for " << targetNumber << "." << endl;
                break;
            }
        } else {
            consecutiveCount = 1;  // Reset consecutive count if the current number is different
            targetNumber = numbers[i];  // Update the target number
        }
    }

    if (consecutiveCount < 3) {
        cout << "Consecutive numbers not found" << endl;
    }

    return 0;
}


