#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int row = arr1.size();
    int col = arr1[0].size();
    vector<vector<int>> answer(row, vector<int>(col));

    // 행과 열의 크기가 같은 두 행렬의 같은 행
    // 두 행렬의 같은 행, 같은 열의 값을 서로 더한 결과
    // 2개의 행렬 arr1과 arr2를 입력받아
    // 행렬 덧셈의 결과를 반환하는 함수, solution을 완성
    // arr1 = [[1,2,],[2,3]]
    // arr2 = [[3,4,],[5,6]]
    // return = [[4,6],[7,9]]  

    for (int i = 0; i < row; i++)  //2차원 배열 사용
    {
        for (int j = 0; j < col; j++)
        {
            answer[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    return answer;
}