#include <iostream>
using namespace std;
int main() 
{
    int numbers[] = {5, 4, 3, 2, 1};

    // Calculate the length of the array
    int y = sizeof(numbers) / sizeof(numbers[0]);

	cout << "Length:"<< y <<endl;

    return 0;
}
