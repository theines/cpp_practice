// C++ 프로그래밍
// 서울지역대학 화상강의(ZOOM6)
// 학번: 202134-365538
// 이름: 천지영
#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 100;
    int *ptr; // 포인터 ptr을 선언
    ptr = &a; //a의 주소를 넣는다.

    cout << "ptr이 가리키는 곳의 값 : " << *ptr << endl;
    *ptr = 20; // ptr이 가리키는 곳에 20을 저장
    cout << "변수 a의 값 : " << a << endl;
    ptr = &b; // ptr이 b를 가리키게 함
    cout << "변수 b의 값 : " << b << endl;
    return 0;
}


