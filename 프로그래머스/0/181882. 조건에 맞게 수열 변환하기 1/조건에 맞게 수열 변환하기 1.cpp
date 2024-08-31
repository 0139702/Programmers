#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int result = 0;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] >= 50 & arr[i] % 2 == 0) result = arr[i] / 2;
        else if(arr[i] < 50 & arr[i] % 2 != 0) result = arr[i] * 2;
        else result = arr[i];
        // int result = arr[i] >= 50 & arr[i] % 2 == 0 ? arr[i] / 2 : arr[i] * 2;
        answer.push_back(result);
    }
    return answer;
}