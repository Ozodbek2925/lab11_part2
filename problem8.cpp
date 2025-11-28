#include <iostream>
using namespace std;

void reverseArr(int** arr, int size) {
    int* left  = *arr;
    int* right = *arr + size - 1;

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}

int main() {
    int size;
    cin >> size;
    int* arr = new int[size];
    for (int* p = arr; p < arr + size; ++p) {
        char ch;
        cin >> ch;
        *p = ch - '0';
    }
    reverseArr(&arr, size);
    for (int* p = arr; p < arr + size; ++p) {
        cout << *p;
    }
    cout << endl;
    delete[] arr;
    return 0;
}
