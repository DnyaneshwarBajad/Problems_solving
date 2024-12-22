#include <iostream>
using namespace std;

int main() {
    const int size = 5; // Size of the arrays
    int array1[size] = {1, 2, 3, 4, 5};
    int array2[size] = {5, 4, 3, 2, 1};
    int result[size];

    // Adding elements of array1 and array2
    for (int i = 0; i < size; i++) {
        result[i] = array1[i] + array2[i];
    }

    // Displaying the result
    cout << "Resultant array: ";
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
