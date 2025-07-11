#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

long long solution(int a, int b) {
    long long sum = 0;

    for (int i = min(a, b); i <= max(a, b); i++) {
        sum += i;
    }

    return sum;
}