#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;

    for (int i = left; i <= right; i++) // 13 ~ 17을 도는 친구
    {
        int count = 0; // 약수의 카운트 값
        for (int j = 1; j <= i; j++) // 약수를 구해지는 친구
        {
            if (i % j == 0)
            {
                count++; // 약수의 개수를 늘려준다.
            }
        }
        if (count % 2 == 0)
        {
            answer += i;
        }
        else
        {
            answer -= i;
        }
    }
    return answer;
}