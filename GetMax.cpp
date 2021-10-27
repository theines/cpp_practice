// C++ 프로그래밍
// 서울지역대학 화상강의(ZOOM6)
// 학번: 202134-365538
// 이름: 천지영
#include	<iostream>
using namespace std;

int getMax(const int arr[], int len)  // 함수 머리부
{
    int max = INT_MIN;    // int형의 최솟값을 max로 가정함
    for (int i = 0; i < len; i++)
        if (max < arr[i])   max = arr[i];
    return max;// 결과의 반환
}

int getMax(const float arr[], int len)
{
    float max = -numeric_limits<float>::max();    // float형의 최솟값을 max로 가정함
    for (int i = 0; i < len; i++)
        if (max < arr[i])   max = arr[i];
    return max;// 결과의 반환
}

int main()
{
    int data[10] = { 10, 23, 5, 9, 22, 48, 12, 10, 55, 31 };

    cout << "데이터 : ";
    for (int i = 0; i < 10; i++)
        cout << data[i] << "  ";
    cout << endl << endl;
    cout << "최댓값 = " << getMax(data, 10) << endl;
}



