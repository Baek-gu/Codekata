#include <string>
#include <vector>
#include <numeric>

using namespace std;

// a�� b�� ������ �ϵ��� �Լ��� ������
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