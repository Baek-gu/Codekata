using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;

    for (int i = 1; i <= count; i++)
    {
        answer += i * price; // 3 6 9 12 
    }

    if (answer > money) // money 20
    {
        answer -= money; // 10
    }
    else
    {
        return 0;
    }

    return answer;
}

// 원래 이용료는 price원
// 놀이기구를 N 번 째 이용 -> N배를 지불
// 놀이기구를 count번 타게 되면 현재 자신이 가지고 있는 금액에서 얼마가 모자라는지를 return 
// 단, 금액이 부족하지 않으면 0을 return 하세요.

// price 3 / 3 6 9 12
// money 20
// count 4 / 1 2 3 4
// return 10