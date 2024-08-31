#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start_num, int end_num) {
    vector<int> answer;
    int j=0;
    while(j<=start_num-end_num){
        int j = start_num--;
        answer.push_back(j);
    }
    return answer;
}