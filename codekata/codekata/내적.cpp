#include <string>
#include <vector>
#include <numeric>

using namespace std;

// a와 b의 내적을 하도록 함수를 만들어라
// a = [1,2,3,4]
// b = [-3,-1,0,2]

int solution(vector<int> a, vector<int> b)
{
    vector<int>answer;
    int sum = 0;

    for (int i = 0; i < a.size(); i++)
    {
        answer.push_back(a[i] * b[i]);
    }

    sum = accumulate(answer.begin(), answer.end(), 0);

    return sum;
}