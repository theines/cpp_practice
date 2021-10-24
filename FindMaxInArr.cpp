// C++ 프로그래밍
// 서울지역대학 화상강의(ZOOM6)
// 학번: 202134-365538
// 이름: 천지영

#include	<iostream>
using namespace std;

int main()
{
    int data[10] = { 10, 23, 5, 9, 22, 48, 12, 10, 55, 31 };
    int max;  // data의 첫 번째 데이터를 max로 가정함

    max = data[0];
    cout << "데이터 : " << data[0] << endl;    // 0번 데이터 출력
    for (int i = 1; i < 10; i++) {    // 나머지 9개의 데이터 비교
        cout << " i번째 데이터: " << data[i] << endl;     // i번 데이터 출력
        if (max < data[i])    // i번 데이터가 max보다 크면 비교
            max = data[i];     // max를 i번 데이터로 바꿈
    }
    cout << endl << endl;
    cout << "배열의 최댓값 : " << max << endl;
    return 0;



    
}
