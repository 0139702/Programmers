#include <string>
#include <vector>

using namespace std;

int compare(int first, int second) {
    int num = 1;
    while(num<=second) num*=10;
    return first * num + second;
}

int solution(int a, int b) {
    // int answer = 0;
    int apb = compare(a, b);
    int axb = 2 * a * b;
    if(apb < axb) {
        return axb;
    } else if(apb == axb) {
        return apb;
    } else return apb;
    // return answer;
}