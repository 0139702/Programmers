#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(int i=0; i<str.size(); i++) {
        if(str[i] >= 65 && str[i] <= 95) {
            str[i] = tolower(str[i]);
        }
        else if (str[i] >= 97 && str[i] <= 122) {
            str[i] = toupper(str[i]);
        }
    }
    cout << str;
    return 0;
}