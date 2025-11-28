#include <iostream>
#include <string>
using namespace std;
void printIfValid(int* p) {
    if (p == nullptr) {
        cout << "null" << endl;
    } else {
        cout << *p << endl;
    }
}
int main() {
    string input;
    int* p = nullptr;
    cin >> input;
    if (input == "n") {
        p = nullptr;
    } else {
        try {
            int value = stoi(input);
            p = new int(value);
        } catch (const invalid_argument& e) {
            cout << "wrong input" << endl;
            return 1;
        }
    }
    printIfValid(p);
    if (p != nullptr) {
        delete p;
    }
    return 0;
}
