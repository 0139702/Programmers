#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    int count = 0;
    cin >> str;
    // for(int j=0; j<=str; j++){
    //     count++;
    // }
    for(int i=0; i<str.size(); i++){
        cout << str[i] << endl;
    }
    return 0;
}