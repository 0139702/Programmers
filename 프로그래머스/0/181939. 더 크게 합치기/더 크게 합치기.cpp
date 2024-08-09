#include <string>
#include <vector>

using namespace std;

int compare(int first, int second) {
    int i = 1;
    while(i <= second) i *= 10;
    return first * i + second;
}

int returnMax(int big, int smol) {
    if(big > smol) return big;
    else return smol;
}

int solution(int a, int b) {
    int axb = compare(a, b);
    int bxa = compare(b, a);
    int answer = returnMax(axb, bxa);
    return answer;
}