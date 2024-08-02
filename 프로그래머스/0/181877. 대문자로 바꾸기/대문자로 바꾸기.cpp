#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for(int i=0; i<myString[i]; i++) {
        myString[i] = toupper(myString[i]);
    }
    string answer = myString;
    return answer;
}