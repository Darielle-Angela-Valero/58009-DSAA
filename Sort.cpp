#include <iostream>
using namespace std;
int main() {
    int numbers[] = {5, 4, 3, 2, 1};
    int size = sizeof(numbers) / sizeof(numbers[0]);
cout<<"Elements:"<<numbers[0]<<numbers[1]<<numbers[2]<<numbers[3]<<numbers[4]<<endl;   
// Reverse the array in-place
    for (int i = 0; i < size / 2; i++) {
        swap(numbers[i], numbers[size - 1 - i]);
    }

    // Print the reversed array
    for (int i = 0; i < size; i++) {
       cout << "Reversed:"<<numbers[i] << " ";
    }

   cout <<endl;

    return 0;
}




