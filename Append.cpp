#include <iostream>
using namespace std;
int main()
{
int numbers[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int size = sizeof(numbers) / sizeof(numbers[0]);
    // Append 20 to the array
	numbers[10] = 20;
    for (int i = 0; i < size; i++)
	 {
    	cout << numbers[i] << " ";
    	
	}
	cout<<numbers[10];
    return 0;
}
