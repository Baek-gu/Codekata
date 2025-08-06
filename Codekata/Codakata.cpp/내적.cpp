#include <string>
#include <vector>
#include <numeric>

using namespace std;

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