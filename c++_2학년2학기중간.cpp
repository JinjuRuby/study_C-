/*
#include <iostream>
using namespace std;

int main() {
	
	int a = 10;
	int b = 22;
	int sum;
	sum = a + b;
	cout << sum;

	return 0;
	

}
*/


/* 4-4
#include <iostream>
using namespace std;

int main() {
	int a;
	while (true) {
		cout << "정수입력>>";
		cin >> a;
		if (a == 0)
			break; // 0이 입력되면 while 문을 벗어남
		if (a % 3 != 0) {
			cout << "No" << "\n";
			continue; // 다음 반복. while문으로 분기
		}
		cout << "Yes" << "\n"; // 입력된 3의 배수 출력
	}

}
*/


/*4-3
#include <iostream>
using namespace std;

int main() {
	int i, a, b, sum = 0;
	cout << "두 개의 정수 입력>>";
	cin >> a >> b;

	i = a;
	do {
		sum += i;
		i++;
	} while (i <= b); //i가 b보다 작거나 같은 동안 반복

		cout << a << "에서" << b << "까지 합은" << sum;

}
*/


/*4-2
#include <iostream>
using namespace std;

int main() {
	int i, a, b, sum = 0;
	cout << "두 개의 정수 입력>>";
	cin >> a >> b;

	i = a;
	while (i <= b) { // i가 b보다 작거나 같은 동안 반복
		sum += i;
		i++;
	}

	cout << a << "에서 " << b << "까지 합은 " << sum;
}
*/


/*4-1
#include <iostream>
using namespace std;
int main() {
	int i, a, b, sum = 0;
	cout << "두 개의 정수 입력>>";
	cin >> a >> b;

	for (i = a; i <= b; i++) { // a에서 b까지 합 계산
		sum += i;
	}

	cout << a << "에서 " << b << "까지 합은 " << sum;
}
*/


/*3-2
#include <iostream>
using namespace std;
int main() {
	int score, div;
	cout << "점수를 입력하세요>>";
	cin >> score;
	if (score > 100 || score < 0) {
		cout << "잘못된 점수 입니다";
		return 0;
	}
	div = score / 10;
	switch (div) {
	case 10:
	case 9:
		cout << "A 입니다"; break; // 90~100 경우
	case 8:
		cout << "B 입니다"; // 80 점대
	case 7:
		cout << "C 입니다"; break; // 70 점대
	case 6:
		cout << "D 입니다"; break; // 60 점대
	default: // 나머지 점수 대
		cout << "F 입니다"; break;
	}


}
*/


/*3-1
#include <iostream>
using namespace std;
int main() {
	int score;
	cout << "점수를 입력하세요>>";
	cin >> score;
	if (score > 100 || score < 0) {
		cout << "잘못된 점수 입니다";
		return 0;
	}

	if (score >= 90) // 90이상 100이하
		cout << "A 입니다";
	else if (score >= 80) //80이상 89이하
		cout << "B 입니다";
	else if (score >= 70) //70이상 79이하
		cout << "C 입니다";
	else if (score >= 60) //60이상 69이하
		cout << "D 입니다";
	else // 0이상 59이하
		cout << "B 입니다";

}
*/


/*1-1
#include <iostream>
using namespace std;

int g = 20; //전역 변수

int add(int x, int y) { //전역 함수
return x + y; // x와 y의 합 리턴
}

int main() {
	int a, b, sum; // 지역 변수
	cout << "두 정수를 입력하세요 >>"; //프롬프트 출력
	cin >> a >> b; // 두 정수를 읽어 a와 b에 입력
	sum = a + b;
	cout << "합은 " << sum << "\n"; // sum 값 출력
	cout << "합은 " << add(a, b) << "\n"; // add() 함수 호출 결과 출력
	cout << "전역 변수 g 값은 " << g; // g 값 출력

	return 0; // return 문을 생략하면 자동으로 return 0;이 삽입된다.
}
*/










/*2-2
#include <iostream>

double area(int r); // 함수의 원형 선언

double area(int r) { // 함수 구현
	return 3.14 * r * r; // 반지름 r의 원면적 리턴
}

int main() {
	int n = 3;
	char c = '#';
	std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;
	std::cout << "n + 5 = " << n + 5 << '\n';
	std::cout << "면적은 " << area(n); // 함수 area()의 리턴 값 출력

}
*/


/*2-3
#include <iostream>
using namespace std;

int main() {
	cout << "너비를 입력하세요>>";

	int width;
	cin >> width; // 키보드로부터 너비를 읽어 width 변수에 저장

	cout << "높이를 입력하세요>>";

	int height;
	cin >> height; // 키보드로부터 높이를 읽어 height 변수에 저장

	int area = width * height; // 사각형의 면적 계산
	cout << "면적은 " << area << "\n"; // 면적을 출력하고 다음 줄로 넘어감
}
*/


/*2-4
#include <iostream>
using namespace std;

int main() {
	cout << "이름을 입력하세요>>";

	char name[11]; // 한글은 5개 글자, 영문은 10까지 저장할 수 있다.
	cin >> name; // 키보드로부터 문자열을 읽는다.

	cout << "이름은 " << name << "입니다\n"; // 이름을 출력한다.
}
*/


/*2-5
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char password[11];
	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
	while (true) {
		cout << "암호>>";
		cin >> password;
		if (strcmp(password, "C++") == 0) {
			cout << "프로그램을 정상 종료합니다." << endl;
			break;
		}
		else
			cout << "암호가 틀립니다~~" << endl;
	}

}
*/


/*2-6
#include <iostream>
using namespace std;

int main() {
	cout << "주소를 입력하세요>>";

	char address[100];
	cin.getline(address, 100, '\n'); // 키보드로부터 주소 읽기

	cout << "주소는 " << address << "입니다\n"; // 주소 출력
}
*/


/*2-7
#include <iostream>
#include <string>
using namespace std;

int main() {
	string song("Falling in love with you"); // 문자열 song
	string elvis("Elvis Presley"); // 문자열 elvis
	string singer; // 문자열 singer

	cout << song + "를 부른 가수는"; // + 로 문자열 연결
	cout << "(힌트 : 첫글자는 " << elvis[0]<<")?"; // [] 연산자 사용

	getline(cin, singer); // 문자열 입력
	if (singer == elvis) // 문자열 비교
		cout << "맞았습니다.";
	else
		cout << "틀렸습니다. " + elvis + "입니다." << endl; // +로 문자열 연결
}
*/










/*3장 실습1
#include <iostream>
using namespace std;

int main()
{
	char yes[100];
	
	while(true)
	{
		cout << "종료하시겠습니까?>>";
		cin.getline(yes, 100);
		if (yes == "yes")
			break;


	int k, n = 0;
	int sum = 0;
	cout << "끝수를 입력하시오.>>";
	cin >> n;
	for (k = 1; k <= n; k++)
	{
		sum += k;
	}

	cout << "1에서 " << n << "까지의 합은 " << sum << "입니다." << endl;
	return 0;


	}
}
*/


/*3-1
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	donut.radius = 1; // donut 객체의 반지름을 1로 설정
	double area = donut.getArea(); // donut 객체의 면적 알아내기
	cout << "donut 면적은 " << area << endl;

	Circle pizza;
	pizza.radius = 30; // pizza 객체의 반지름을 30으로 설정
	area = pizza.getArea(); // pizza 객체의 면적 알아내기
	cout << "pizza 면적은 " << area << endl;
}
*/


/*3-2
#include <iostream>
using namespace std;

class Rectangle { // Rectangle 클래스 선언부
public:
	int width;
	int height;
	int getArea(); // 면적을 계산하여 리턴하는 함수
};

int Rectangle::getArea() { // Rectangle 클래스 구현부
	return width * height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;
}
*/


/*3-3
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); // 매개 변수 없는 생성자
	Circle(int r); // 매개 변수 있는 생성자
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; // 매개 변수 없는 생성자 호출
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30); // 매개 변수 있는 생성자 호출
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;

}
*/


/*3-4
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); // 위임 생성자
	Circle(int r); // 타겟 생성자
	double getArea();
};

Circle::Circle() : Circle(1) { } // 위임 생성자

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; // 매개 변수 없는 생성자 호출
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30); // 매개 변수 있는 생성자 호출
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;

}
*/


/*3-5
#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x << ", " << y << ")" << endl; }
};

Point::Point() : Point(0,0) { } // 위임 생성자
Point::Point(int a, int b) // 타겟 생성자
	:x(a), y(b) { }

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}
*/


/*3-6
#include <iostream>
using namespace std;
class Rectangle {
public:
	int width, height;

	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
 };

Rectangle::Rectangle() {
	width = height = 1;
}

Rectangle::Rectangle(int w, int h) {
	width = w; height = h;
}

Rectangle::Rectangle(int length) {
	width = height = length;
}

// 정사각형이면 true를 리턴하는 멤버 함수
bool Rectangle::isSquare() {
	if (width == height) return true;
	else return false;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;
}
*/


/* 3-7
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;

	Circle();
	Circle(int r);
	~Circle(); // 소멸자
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::~Circle() {
	cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	Circle pizza(30);

	return 0;

}
*/


/* 3-8
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::~Circle() {
	cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle globbalDounut(1000);
Circle globalPizza(2000);

void f() {
	Circle fDonut(100);
	Circle fPizza(200);
}

int main() {

	Circle mainDonut;
	Circle mainPizza(30);
	f();

}
*/


/* 3-9 컴파일 오류가 발생하는 곳 -> (9) (11) (13)
#include <iostream>
using namespace std;

class PrivateAccessError {
private:
	int a;
	void f();
	PrivateAccessError();
public:
	int b;
	PrivateAccessError(int x);
	void g();
};

PrivateAccessError::PrivateAccessError() {
	a = 1; // (1)
	b = 1; // (2)
}

PrivateAccessError::PrivateAccessError(int x) {
	a = x; // (3)
	b = x; // (4)
}

void PrivateAccessError::f() {
	a = 5; // (5)
	b = 5; // (6)
}

void PrivateAccessError::g() {
	a = 6; // (7)
	b = 6; // (8)
}

int main() {
	PrivateAccessError objA; // (9)
	PrivateAccessError objB(100); // (10)
	objB.a = 10; // (11)
	objB.b = 10; // (12)
	objB.f(); // (13)
	objB.g(); // (14)
}
*/


/* 3-10
#include <iostream>
using namespace std;

// C++ 구조체 선언
struct StructCircle {
private:
	int radius;
public:
	StructCircle(int r) { radius = r;  } // 구조체의 생성자
	double getArea();
};

double StructCircle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	StructCircle waffle(3);
	cout << "면적은 " << waffle.getArea();
}
*/


/* 3-11
#include <iostream>
using namespace std;

class Adder { // 덧셈 모듈 클래스
	int op1, op2;
public:
	Adder(int a, int b);
	int process();
};

Adder::Adder(int a, int b) {
	op1 = a; op2 = b;
}

int Adder::process() {
	return op1 + op2;
}

class Calculator { // 계산기 클래스
public:
	void run();
};

void Calculator::run() {
	cout << "두 개의 수를 입력하세요>>";
	int a, b;
	cin >> a >> b; // 정수 두 개 입력
	Adder adder(a, b); // 덧셈기 생성
	cout << adder.process(); // 덧셈 계산
}

int main() {
	Calculator calc; // calc 객체 생성
	calc.run(); // 계산기 시작
}
*/









/* 예제 4-1
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main()
{

	Circle donut;
	Circle pizza(30);

	//객체 이름으로 멤버 접근
	cout << donut.getArea() << endl;

	//객체 포인터로 멤버 접근
	Circle* p;
	p = &donut; // p = donut
	cout << p->getArea() << endl; // donut의 getArea() 호출
	cout << (*p).getArea() << endl; // donut의 getArea() 호출

	p = &pizza;
	cout << p->getArea() << endl; // pizza의 getArea() 호출
	cout << (*p).getArea() << endl; // pizza의 getArea() 호출
}
*/


/* 예제 4-2
#include <iostream>
using namespace std;


class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r;  }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main()
{
	Circle circleArray[3];

	// 배열의 각 원소 객체의 멤버 접근
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) // 배열의 각 원소 객체의 멤버 접근
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;

	Circle *p;
	p = circleArray; // = &circleArray[0]
	for (int i = 0; i < 3; i++)
	{ // 객체 포인터로 배열 접근
		cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
		p++;
}

}
*/


/* 예제 4-3
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main()
{
	Circle circleArray[3] = { Circle(10), Circle(20), Circle() }; // Circle 배열 초기화

	for (int i = 0; i < 3; i++)
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
}
*/



/* 예제 4-4
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main()
{
	Circle circles[2][3];

	circles[0][0].setRadius(1);
	circles[0][1].setRadius(2);
	circles[0][2].setRadius(3);
	circles[1][0].setRadius(4);
	circles[1][1].setRadius(5);
	circles[1][2].setRadius(6);

	for(int i=0;i<2;i++) // 배열의 각 원소 객체의 멤버 접근
		for (int j = 0; j < 3; j++)
		{
			cout << "Circle [" << i << "," << j << "]의 면적은 ";
			cout << circles[i][j].getArea() << endl;
		}

}
*/


/* 예제 4-5
#include <iostream>
using namespace std;

int main() {
	int* p;

	p = new int;
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	*p = 5;
	int n = *p;
	cout << "*p = " << *p << '\n';
	cout << "n = " << n << '\n';

	delete p;

}
*/


/* 예제 4-6
#include <iostream>
using namespace std;

int main() {
	cout << "입력할 정수의 개수는?";
	int n;
	cin >> n; // 정수의 개수 입력
	if (n <= 0) return 0;
	int* p = new int[n]; // n 개의 정수 배열 동적 할당
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "번째 정수: "; // 프롭프트 출력
		cin >> p[i]; // 키보드로부터 정수 입력
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += p[i];
	cout << "평균 = " << sum / n << endl;

	delete[] p; // 배열 메모리 반환

}
*/


/* 예제4-7
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius;  }
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main()
{
	Circle* p, * q;
	p = new Circle;
	q = new Circle(30);
	cout << p->getArea() << endl << q->getArea() << endl;
	
	delete p;
	delete q;
}
*/


/* 예제 4-8
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main()
{
	int radius;
	while (true) {
		cout << "정수 반지름 입력(음수이면 종료)>> ";
		cin >> radius;
		if (radius < 0) break; // 음수가 입력되어 종료한다.
		Circle* p = new Circle(radius); // 동적 객체 생성
		cout << "원의 면적은 " << p->getArea() << endl;
		delete p; // 객체 반환
	}
}
*/



/* 예제 4-9
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main()
{
	Circle* pArray = new Circle[3]; // 객체 배열 생성

	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getArea() << '\n';
	}
	Circle* p = pArray; // 포인터 p에 배열의 주소값으로 설정
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << '\n';
		p++; // 다음 원소의 주소로 증가
	}

	delete[] pArray; // 객체 배열 소멸

}
*/


/* 예제 4-10
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1;
}

int main()
{
	cout << "생성하고자 하는 원의 개수?";
	int n, radius;
	cin >> n; // 원의 개수 입력

	Circle *pArray = new Circle[n]; // n개의 Circle 배열 생성
	for (int i = 0; i < n; i++) {
		cout << "원" << i + 1 << ": "; // 프롬프트 출력
		cin >> radius; // 반지름 입력
		pArray[i].setRadius(radius); // 각 Circle 객체를 반지름으로 초기화
	}

	int count = 0; // 카운트 변수
	Circle* p = pArray;
	for (int i = 0; i < n; i++) {
		cout << p->getArea() << ' '; // 원의 면적 출력
		if (p->getArea() >= 100 && p->getArea() <= 200)
			count++;
		p++;
	}

	cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count << endl;

	delete[] pArray;
}
*/



/* Activity
#include <iostream>
using namespace std;

int main()
{
	string a("Hello C++");
	cout << a.length() << endl;
	a.append("!!");
	cout << a << endl;
	cout << a.at(6) << endl;
	cout << a.find("C") << endl;
	int n = a.find("++"); // ++시작위치
	cout << n << endl;
	int k = a.find("+++"); // +++은 없음 -1 return
	cout << k << endl;
	a.erase(1, 3);
	cout << a << endl;
	a.insert(1, "ell");
	cout << a << endl;
	string s("I love C++");
	string b = s.substr(2, 4);
	cout << b << endl;
	string c = s.substr(2);
	cout << c << endl;
	s.insert(2, "really ");
	cout << s << endl;
	s.replace(2, 11, "study");
	cout << s << endl;
	s.erase(0, 7);
	cout << s << endl;
	s.clear();
	cout << s << endl;
	string x = "Hello";
	string y = "Hello";
	int result = x.compare(y);
	cout << result << endl;
	string z = "Hello";
	string w = "Hell";
	int result2 = z.compare(w);
	cout << result2 << endl;

}
*/










/* 예제 5-1
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }


};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}

int main()
{
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;
}
*/



/* 예제 5-2
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
	void setRadius(int radius) { this->radius = radius; }
};

Circle getCircle() {
	Circle tmp(30);
	return tmp; // 객체 tmp을 리턴한다.
}

int main()
{
	Circle c; // 객체가 생성된다. radius = 1로 초기화된다.
	cout << c.getArea() << endl;

	c = getCircle();
	cout << c.getArea() << endl;

}
*/



/* 예제 5-3
#include <iostream>
using namespace std;

int main()
{
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
	int i = 1;
	int n = 2;
	int &refn = n; // 참조 변수 refn 선언. refn은 n에 대한 별명
	n = 4;
	refn++; // refn=5, n=5
	cout << i << '\t' << n << '\t' << refn << endl;

	refn = i; // refn=1, n=1
	refn++; // refn=2, n=2
	cout << i << '\t' << n << '\t' << refn << endl;

	int* p = &refn; // p는 n의 주소를 가짐
	*p = 20; // refn=20, n=20
	cout << i << '\t' << n << '\t' << refn << endl;
}
*/



/* 예제 5-4
#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle() {radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

int main()
{
	Circle circle;
	Circle &refc = circle;
	refc.setRadius(10);
	cout << refc.getArea() << " " << circle.getArea();
}
*/



/* 예제 5-5
#include <iostream>
using namespace std;
bool average(int a[], int size, int& avg) {
	if (size <= 0)
		return false;
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += a[i];
	avg = sum / size;
	return true;
}

int main()
{
	int x[] = { 0,1,2,3,4,5 };
	int avg;
	if (average(x, 6, avg)) cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류" << endl;

	if (average(x, -2, avg)) cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류 " << endl;
}
*/



/* 예제 5-6
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

void increaseCircle(Circle &c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}

int main() {
	Circle waffle(30);
	increaseCircle(waffle);
	cout << waffle.getRadius() << endl;
}
*/



/* 예제 5-7 아직다못함
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1;}
	Circle(int r) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
	void setRadius(int radius) { this->radius = radius; }
};

void readRadius(Circle &donut)
{
	int radius;
	cout << "정수 값으로 반지름을 입력하세요>>";
	cin >> radius;
	

}

int main()
{
	Circle donut;
	readRadius(donut);
	cout << "donut의 면적 = " << donut.getArea() << endl;



}
*/



/* 예제 5-8
#include <iostream>
using namespace std;

char& find(char s[], int index) {
	return s[index]; // 참조 리턴
}

int main()
{
	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 'S'; // name[0] = 'S'로 변경
	cout << name << endl;

	char& ref = find(name, 2);
	ref = 't'; // name = "Site"
	cout << name << endl;

}
*/



/* 예제 5-9
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle(const Circle& c); // 복사 생성자 선언
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }

};

Circle::Circle(const Circle& c) { // 복사 생성자 구현
	this->radius = c.radius;
	cout << "복사 생성자 실행 radius = " << radius << endl;
}


int main() {
	Circle src(30); // src 객체의 보통 생성자 호출
	Circle dest(src); // dest 객체의 복사 생성자 호출

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "사본의 면적 = " << dest.getArea() << endl;
}
*/



/* 예제 5-10
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person { // Person 클래스 선언
	char* name;
	int id;
public:
	Person(int id, const char* name); // 생성자
	~Person(); // 소멸자
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) { // 생성자
	this->id = id;
	int len = strlen(name); // name의 문자 개수
	this->name = new char[len + 1]; // name 문자열 공간 할당
	strcpy(this->name, name); // name에 문자열 복사
}

Person::~Person() { // 소멸자
	if (name) // 만일 name에 동적 할당된 배열이 있으면
		delete[] name; // 동적 할당 메모리 소멸
}

void Person::changeName(const char* name) { // 이름 변경
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae"); // father 객체 생성
	Person daughter(father); // daughter 객체 복사 생성. 복사생성자호출

	cout << "daugther 객체 생성 직후 ____" << endl;
	father.show(); // father 객체 출력
	daughter.show(); // daughter 객체 출력

	daughter.changeName("Grace"); // daughter의 이름을 "Grace"로 변경
	cout << "daugther 이름을 Grace로 변경한 후 ____" << endl;
	father.show(); // father 객체 출력
	daughter.show(); // daughter 객체 출력

	return 0; // father, daughter 객체 소멸
}
*/



/* 예제 5-11
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person { // Person 클래스 선언
	char* name;
	int id;
public:
	Person(int id, const char* name); // 생성자
	Person(const Person& person); // 복사 생성자
	~Person(); // 소멸자
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) { // 생성자
	this->id = id;
	int len = strlen(name); // name의 문자 개수
	this->name = new char[len + 1]; // name 문자열 공간 할당
	strcpy(this->name, name); // name에 문자열 복사
}

Person::Person(const Person& person) { // 복사 생성자
	this->id = person.id; // id값 복사
	int len = strlen(person.name); // name의 문자 개수
	this->name = new char[len + 1]; // name을 위한 공간 할당
	strcpy(this->name, person.name); // name의 문자열 복사
	cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
}

Person::~Person() { // 소멸자
	if (name) // 만일 name에 동적 할당된 배열이 있으면
		delete[] name; // 동적 할당 메모리 소멸
}

void Person::changeName(const char* name) { // 이름 변경
	if (strlen(name) > strlen(this->name))
		return; // 현재 name에 할당된 메모리보다 긴 이름으로 바꿀 수 없다.
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae"); // father 객체 생성
	Person daughter(father); // daughter 객체 복사 생성. 복사생성자호출

	cout << "daugther 객체 생성 직후 ____" << endl;
	father.show(); // father 객체 출력
	daughter.show(); // daughter 객체 출력

	daughter.changeName("Grace"); // daughter의 이름을 "Grace"로 변경
	cout << "daugther 이름을 Grace로 변경한 후 ____" << endl;
	father.show(); // father 객체 출력
	daughter.show(); // daughter 객체 출력

	return 0; // father, daughter 객체 소멸
}
*/



/* 예제 5-12
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person { // Person 클래스 선언
	char* name;
	int id;
public:
	Person(int id, const char* name); // 생성자
	Person(const Person& person); // 복사 생성자
	~Person(); // 소멸자
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) { // 생성자
	this->id = id;
	int len = strlen(name); // name의 문자 개수
	this->name = new char[len + 1]; // name 문자열 공간 할당
	strcpy(this->name, name); // name에 문자열 복사
}

Person::Person(const Person& person) { // 복사 생성자
	this->id = person.id; // id값 복사
	int len = strlen(person.name); // name의 문자 개수
	this->name = new char[len + 1]; // name을 위한 공간 할당
	strcpy(this->name, person.name); // name의 문자열 복사
	cout << "복사 생성자 실행 " << this->name << endl;
}

Person::~Person() { // 소멸자
	if (name) // 만일 name에 동적 할당된 배열이 있으면
		delete[] name; // 동적 할당 메모리 소멸
}

void Person::changeName(const char* name) { // 이름 변경
	if (strlen(name) > strlen(this->name))
		return; // 현재 name에 할당된 메모리보다 긴 이름으로 바꿀 수 없다.
	strcpy(this->name, name);
}
void f(Person person) {
	person.changeName("dummy");
}

Person g() {
	Person mother(2, "Jane");
	return mother;
}

int main() {
	Person father(1, "Kitae");
	Person son = father;
	f(father);
	g();

}
*/










/* 예제 6-1
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int big(int a, int b) { // a와 b 중 큰 수 리턴
	if (a > b) return a;
	else return b;
}

int big(int a[], int size) { // 배열 a[]에서 가장 큰 수 리턴
	int res = a[0];
	for (int i = 1; i < size; i++)
		if (res < a[i]) res = a[i];
	return res;
}

int main() {
	int array[5] = { 1, 9, -2, 8, 6 };
	cout << big(2, 3) << endl;
	cout << big(array, 5) << endl;

}
*/




/* 예제 6-2
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int sum(int a, int b) { // a에서 b까지 합하기
	int s = 0;
	for (int i = a; i <= b; i++)
		s += i;
	return s;
}

int sum(int a) { // 0에서 a까지 합하기
	int s = 0;
	for (int i = 0; i <= a; i++)
		s += i;
	return s;
}

int main() {
	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
}
*/




/* 예제 6-3
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

// 원형 선언
void star(int a = 5);
void msg(int id, string text = "");

// 함수 구현
void star(int a) {
	for (int i = 0; i < a; i++)
		cout << '*';
	cout << endl;
}

void msg(int id, string text) {
	cout << id << ' ' << text << endl;
}

int main() {
	// star() 호출
	star();
	star(10);

	// msg() 호출
	msg(10);
	msg(10, "Hello");

}
*/




/* 예제 6-4
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

// 원형 선언
void f(char c = ' ', int line = 1);

// 함수 구현
void f(char c, int line) {
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < 10; j++)
			cout << c;
		cout << endl;
	}
}

int main() {
	f(); // 한줄에 빈칸을 10개 출력한다.
	f('%'); // 한 줄에 '%'를 10개 출력한다.
	f('@', 5); // 5줄에 '@'문자를 10개 출력한다.
}
*/




/* 예제 6-5
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

void fillLine(int n = 25, char c = '*') { // n개의 c 문자를 한 라인에 출력
	for (int i = 0; i < n; i++) cout << c;
	cout << endl;
}

int main() {
	fillLine(); // 25개의 '*'를 한 라인에 출력
	fillLine(10, '%'); // 10개의 '%'를 한 라인에 출력
}
*/




/* 예제 6-6
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class MyVector {
	int* p;
	int size;
public:
	MyVector(int n = 100) {
		p = new int[n];
		size = n;
	}
	~MyVector() { delete[] p; }
};

int main() {
	MyVector* v1, * v2;
	v1 = new MyVector(); // 디폴트로 정수 100개의 배열 도적 할당
	v2 = new MyVector(1024); // 정수 1024개의 배열 동적 할당

	delete v1;
	delete v2;
}
*/




/* 예제 6-7
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

float square(float a) {
	return a* a;
}

double square(double a) {
	return a * a;
}

int main() {
	cout << square(3.0); // square(double a); 호출
	cout << square(3); // square(double a); 호출
}
*/




/* 예제 6-8
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int add(int a, int& b) {
	b = b + a;
	return b;
}

int main() {
	int s = 10, t = 20;
	cout << add(s, t); // 컴파일 오류
}
*/



/* 예제 6-9
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

void msg(int id) {
	cout << id << endl;
}

void msg(int id, string s = "") {
	cout << id << ":" << s << endl;
}

int main() {
	msg(5, "Good Morning"); // 정상 컴파일. 드 번째 msg()호출
	msg(6); // 함수 호출 모호. 컴파일 오류
}
*/




/* 예제 6-10
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Math {
public:
	static int abs(int a) { return a > 0 ? a : -a; }
	static int max(int a, int b) { return (a >b)? a : b; }
	static int min(int a, int b) { return (a > b) ? b : a; }
};

int main() {
	cout << Math::abs(-5) << endl;
	cout << Math::max(10, 8) << endl;
	cout << Math::min(-3, -8) << endl;
}
*/




/* 예제 6-11
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Circle {
private:
	static int numOfCircles;
	int radius;
public:
	Circle(int r = 1);
	~Circle() { numOfCircles--; } // 생성된 원의 개수 감소
	double getArea() { return 3.14 * radius * radius; }
	static int getNumOfCircles() { return numOfCircles; }
};

Circle::Circle(int r) {
	radius = r;
	numOfCircles++; // 생성된 원의 개수 증가
}

int Circle::numOfCircles = 0; // 0으로 초기화

int main() {
	Circle* p = new Circle[10]; // 10개의 생성자 실행
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

	delete[] p; // 10개의 소멸자 실행
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

	Circle a; // 생성자 실행
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

	Circle b; // 생성자 실행
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;
}
*/
