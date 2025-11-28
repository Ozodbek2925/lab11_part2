#include <iostream>
using namespace std;
int sum2D(int** m, int r, int c) {
    int sum = 0;
    for (int** row = m; row < m + r; ++row) {
        for (int* x = *row; x < *row + c; ++x) {
            sum += *x;
        }
    }
    return sum;
}
int main() {
    int rows = 3, cols = 4;
    int** arr = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols];
    }
    int value = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = value++;
        }
    }
    cout << "2D Array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int totalSum = sum2D(arr, rows, cols);
    cout << "Sum of all elements: " << totalSum << endl;
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
