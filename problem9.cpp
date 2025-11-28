#include <iostream>
using namespace std;
void avg(const double* arr, int size, double* result) {
    double sum = 0.0;
    const double* p = arr;
    const double* end = arr + size;
    while (p < end) {
        sum += *p;
        p++;
    }
    *result = sum / size;
}
int main() {
    int size;
    cin >> size;
    double* arr = new double[size];
    for (double* p = arr; p < arr + size; ++p) {
        char ch;
        cin >> ch;
        *p = ch - '0';
    }
    double result;
    avg(arr, size, &result);
    cout << result << endl;
    delete[] arr;
    return 0;
}
