#include <iostream>
using namespace std;
void fixNeg(int* arr, int size) {
    for (int* p = arr; p < arr + size; ++p) {
        if (*p < 0) {
            *p = 0;
        }
    }
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << endl;
    fixNeg(arr, size);
    cout << "Modified array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
