#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;

    for (int i = left; i <= right; i++) // 13 ~ 17�� ���� ģ��
    {
        int count = 0; // ����� ī��Ʈ ��
        for (int j = 1; j <= i; j++) // ����� �������� ģ��
        {
            if (i % j == 0)
            {
                count++; // ����� ������ �÷��ش�.
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