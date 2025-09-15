#include <string>
#include <sstream>
#include <iostream>
using namespace std;
int main() {
    string line;
    int count = 0;
    string words;
    
    getline(cin, line);
    stringstream stream(line);
    
    while (stream >> words) {
        count++;
    } cout << count;
}