#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int answer2 = 1; 
    if(num_list.size() >= 11) {
        for(int i=0; i<num_list.size(); i++) {
            answer += num_list[i];
        }
        return answer;
    }
    if(num_list.size() <= 10) {
        for(int j=0; j<num_list.size(); j++) {
            answer2 = answer2 * num_list[j];
        }
        return answer2;
    }
    
}