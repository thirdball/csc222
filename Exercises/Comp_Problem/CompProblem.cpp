#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> numbers = {8, 2, 2, 7, 3, 3, 3, 4, 5, 5, 67, 67, 67, 67, 4, 5};
    int ConsecutiveCount = 1;  // Start with 1 to account for the first occurrence
    int TargetNumber = numbers[0];  // Initialize with the first number

    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] == TargetNumber) {
            ConsecutiveCount++;
            if (ConsecutiveCount == 3) {
                cout << "Consecutive values found for " << TargetNumber << "." << endl;
                break;
            }
        } else {
            ConsecutiveCount = 1;  // Reset consecutive count if the current number is different
            TargetNumber = numbers[i];  // Update the target number
        }
    }

    if (ConsecutiveCount < 3) {
        cout << "Consecutive numbers not found" << endl;
    }

    return 0;
}


