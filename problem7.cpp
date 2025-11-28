#include <iostream>
using namespace std;
int* findMax(int* arr, int size) {
    if (size <= 0) return nullptr;
    int* maxPtr = arr;
    for (int* p = arr + 1; p < arr + size; ++p) {
        if (*p > *maxPtr) {
            maxPtr = p;
        }
    }
    return maxPtr;
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
    int* maxPtr = findMax(arr, size);
    cout << *maxPtr << endl;
    delete[] arr;
    return 0;
}
