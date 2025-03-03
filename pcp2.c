#include <stdbool.h>

bool canThreePartsEqualSum(int* arr, int arrSize) {
    int totalSum = 0;
    
    for (int i = 0; i < arrSize; i++) {
        totalSum += arr[i];
    }

    if (totalSum % 3 != 0) {
        return false;
    }

    int target = totalSum / 3;
    int currentSum = 0, count = 0;

    for (int i = 0; i < arrSize; i++) {
        currentSum += arr[i];

        if (currentSum == target) {
            count++;
            currentSum = 0; 
        }

        if (count == 2 && i < arrSize - 1) { 
            return true;
        }
    }

    return false;
}
