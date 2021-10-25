// C++ 프로그래밍
// 서울지역대학 화상강의(ZOOM6)
// 학번: 202134-365538
// 이름: 천지영
#include  <iostream>
using  namespace  std;

int main()
{
    int  a = 10, b = 20;
    int &aRef = a; // a를 참조하는 참조 변수 aRef를 선언
    cout << "a의 값 : " << a << endl;
    cout << "aRef가 참조하는 값 : " << aRef << endl << endl;
    aRef = 100; //참조 변수에 값을 할당하면 참조대상의 값도 변할 것이다.
    cout << "a의 값 : " << a << endl; 
    aRef = b; //참조 변수는 또 다른 대상을 참조할 수도 있다.
    cout << "a의 값 : " << a << endl;
    return 0;
}
