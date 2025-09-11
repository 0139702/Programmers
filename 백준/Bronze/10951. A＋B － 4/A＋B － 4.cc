#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        if (a > 0 && b < 10) {
            cout << a + b << "\n";
        }
        else { break; }
    }
    return 0;
}