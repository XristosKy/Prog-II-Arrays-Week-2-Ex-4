//
//  main.cpp
//  Prog II (Arrays)-4
//
//  Created by Christos Kyriakou on 13/02/2024.
//

#include <iostream>
#include <ctime>


using namespace std;

int main() {
    const int arraySize = 1000;
    int numbers[arraySize];
    
    // Seed the random number generator
    srand(time(0));
    
    // Fill the array with random numbers from 1 to 50
    for (int i = 0; i < arraySize; ++i) {
        numbers[i] = rand() % 50 + 1;
    }
    
    // Calculate average
    double sum = 0;
    for (int i = 0; i < arraySize; ++i) {
        sum += numbers[i];
    }
    double average = sum / arraySize;
    
    // Display the average
    cout << "Average of the numbers: " << average << endl;
    
    // Count how many numbers end with each digit
    int digitCounts[10] = {0};
    for (int i = 0; i < arraySize; ++i) {
        int lastDigit = numbers[i] % 10;
        digitCounts[lastDigit]++;
    }
    
    // Display the counts
    cout << "Counts of numbers ending with each digit (0-9):" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Digit " << i << ": " << digitCounts[i] << endl;
    }
    
    return 0;
}
