#include <string>
#include <vector>

using namespace std;

// 길이n이 수박수박수..라는 글자를 갖고있음
// 짝수일 때 "수박수박"
// 홀수일 때 "수박수"로 출력해야함
// 먼저 10,000이라는 길이 밑으로 반복되니 while 문 사용 및 짝수인지 아닌지 구분하는 if문 사용


string solution(int n) {
    string answer = "";

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            answer.append("수");
        }
        else
        {
            answer.append("박");
        }
    }

    return answer;
}