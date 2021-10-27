// C++ 프로그래밍               학번: 202134-365538
// 서울지역대학 화상강의(ZOOM6)    이름: 천지영
#include	<iostream>
using namespace std;

const float PI = 3.14159265f;
struct Circle {float  radius, cx, cy;};
struct Rectangle {
    float  x1, y1;	// 좌측 하단의 꼭짓점 좌표
    float  x2, y2;	// 우측 상단의 꼭짓점 좌표
};
// 직사각형의 데이터 입력
void inputData(Rectangle &r){  // 함수 머리부
	cout << "좌측 하단의 꼭짓점 좌표 : ";
	cin >> r.x1, r.y1;
	cout << "우측 상단의 꼭짓점 좌표 : ";
	cin >> r.x2, r.y2;
}
// 직사각형의 데이터 출력
void prData(Rectangle r){  // 함수 머리부
	cout << "가로 = " << r.x2-r.x1 << endl;
	cout << "세로 = " << r.y2-r.y1 << endl;
}
float area(Rectangle r){return (r.x2-r.x1)*(r.y2-r.y1);}
int main(){
	Rectangle rectangle = {1, 1, 4, 3};
	inputData(rectangle);
	cout << "입력된 사각형의 정보" << endl;
	prData(rectangle);
	cout << "사각형의 면적 = " << area(rectangle) << endl;
}



// 원의 데이터 입력
void inputData(Circle &c){  // 함수 머리부
	cout << "원의 반지름 : ";
	cin >> c.radius;
	cout << "중심좌표(x) : ";
	cin >> c.cx;
	cout << "중심좌표(y) : ";
	cin >> c.cy;
}
// 원의 데이터 출력
void prData(Circle c){  // 함수 머리부
	cout << "반지름 = " << c.radius << endl;
	cout << "중심좌표 = (" << c.cx;
	cout << ", " << c.cy << ")" << endl;
}
float area(Circle c){return PI * c.radius * c.radius;}
/* int main(){
	Circle circle = {1, 2, 3};
	inputData(circle);
	cout << "입력된 원의 정보" << endl;
	prData(circle);
	cout << "원의 면적 = " << area(circle) << endl;
} */

