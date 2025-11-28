#include <iostream>
using namespace std;
void norm(char *p) {
    if (*p>=97 && *p<=122) {
        *p = *p - 32;
    }
    while (*p!='\0') {
        if (*p>=65 && *p<=90) {
            *p = *p +32;
        }
        p++;
    }
}
int main() {
    string word;
    cout <<"Input: ";
    cin>>word;
    norm(&word[0]);
    cout << "Output: " << word << endl;
    return 0;
}