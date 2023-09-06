#include <iostream>
using namespace std;
int main() {
    float numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Shift elements to the right to make space for the new element
    for (int i = size; i > 1; i--) {
        numbers[i] = numbers[i - 1];
    }

    // Insert 1.5 at index 1
    numbers[1] = 1.5;

    // Print the modified array
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }

    cout <<endl;

    return 0;
}







