#include <iostream>
using namespace std;
void setToHundred(int** p) {
    **p = 100;
}
int main() {
    int a = 19;
    int *p1 = &a;
    int **p2 = &p1;
    cout << "The address of a = " << &a << endl;
    cout << "The value of p1: " << p1 << endl;
    setToHundred(p2);
    cout << "Updated value of a: " << a << endl;
    cout << "The address of p1: " << &p1 << endl;
    cout << "The value of p2: " << p2 << endl;
    cout << "The address of p2: " << &p2 << endl;
    return 0;
}
