#include <iostream>
using namespace std;
int countValid(int* arr[], int size) {
    int count = 0;
    for (int** p = arr; p < arr + size; ++p) {
        if (*p != nullptr) {
            ++count;
        }
    }
    
    return count;
}
int main() {
    int a = 10, b = 20, c = 30;
    int* arr[] = {&a, nullptr, &b, nullptr, &c};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<< countValid(arr, size) << endl;
    
    return 0;
}
