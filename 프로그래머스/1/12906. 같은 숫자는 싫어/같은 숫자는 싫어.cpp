#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    stack<int> nums;
    nums.push(arr[0]);
    answer.push_back(arr[0]);
    for (int i = 1; i < arr.size(); i++) {
        if (nums.top() == arr[i]) {

        }
        else {
            answer.push_back(arr[i]);
            nums.pop();
            nums.push(arr[i]);
        }
    }

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}