#include <iostream>
#include <string>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << a + b - c << endl;
    string toString = to_string(a) + to_string(b);
    int sndResult = stoi(toString) - c;
    cout << sndResult;
}