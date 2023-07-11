/* 예제 7-1
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Rect;
bool equals(Rect r, Rect s); // equals() 함수 선언

class Rect { // Rect 클래스 선언
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend bool equals(Rect r, Rect s);
};

bool equals(Rect r, Rect s) { // 외부 함수
	if (r.width == s.width && r.height == s.height) return true;
	else return false;
}

int main() {
	Rect a(3, 4), b(4, 5);
	if (equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}
*/



/* 예제 7-2
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Rect;

class RectManager { // RectManager 클래스 선언
public:
	bool equals(Rect r, Rect s);
};

class Rect { // Rect 클래스 선언
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend bool RectManager::equals(Rect r, Rect s);
};

bool RectManager::equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height) return true;
	else return false;
}

int main() {
	Rect a(3, 4), b(3, 4);
	RectManager man;

	if (man.equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}
*/


/* 예제 7-3
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Rect;

class RectManager { // RectManager 클래스 선언
public:
	bool equals(Rect r, Rect s);
	void copy(Rect& dest, Rect& src);
};

class Rect { // Rect 클래스 선언
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend RectManager;
};

bool RectManager::equals(Rect r, Rect s) { // r과 s 가 같으면 true 리턴
	if (r.width == s.width && r.height == s.height) return true;
	else return false;
}

void RectManager::copy(Rect& dest, Rect& src) {// src를 dest에 복사
	dest.width = src.width; dest.height = src.height;
}

int main() {
	Rect a(3, 4), b(5, 6);
	RectManager man;

	man.copy(b, a); // a를 b에 복사한다.
	if (man.equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}
*/



/* 예제 7-4
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power operator+ (Power op1); // + 연산자 함수 선언
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power Power::operator+(Power op2) {
	Power tmp; // 임시 객체 생성
	tmp.kick = this->kick + op2.kick; // kick 더하기
	tmp.punch = this->punch + op2.punch; // punch 더하기
	return tmp; // 더한 결과 리턴
}

int main() {
	Power a(3, 5), b(4, 6), c;
	c = a + b; // 파워 객체 + 연산
	a.show();
	b.show();
	c.show();
}
*/




/* 예제 7-5
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	bool operator==(Power op2); // == 연산자 함수 선언
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

bool Power::operator==(Power op2) {
	if (kick == op2.kick && punch == op2.punch) return true;
	else return false;
}

int main() {
	Power a(3, 5), b(3, 5); // 2개의 동일한 파워 객체 생성
	a.show();
	b.show();
	if (a == b)cout << "두 파워가 같다." << endl;
	else cout << "두 파워가 같지 않다." << endl;
}
*/




/* 예제 7-6
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Power
{
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power& operator+=(Power op2); // += 연산자 함수 선언
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& Power::operator+=(Power op2) {
	kick = kick + op2.kick; // kick 더하기
	punch = punch + op2.punch; // punch 더하기
	return *this; // 합한 결과 리턴
}

int main() {
	Power a(3, 5), b(4, 6), c;
	a.show();
	b.show();
	c = a += b; // 파워 객체 더하기
	a.show();
	c.show();
}
*/




/* 예제 7-7
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Power
{
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power& operator+ (int op2); // + 연산자 함수 선언
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& Power::operator+(int op2) {
	Power tmp; // 임시 객체 생성
	tmp.kick = kick + op2; // kick에 op2 더하기
	tmp.punch = punch + op2; // punch에 op2 더하기
	return tmp; // 임시 객체 리턴
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = a + 2; // 파워 객체와 정수 더하기
	a.show();
	b.show();
}
*/



/* 예제 7-8
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Power
{
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power& operator++ (); // 전위 ++ 연산자 함수 선언
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& Power::operator++() {
	kick++;
	punch++;
	return *this; // 변경된 객체 자신(객체 a)의 참조 리턴
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = ++a; // 전위 ++ 연산자 사용
	a.show();
	b.show();
}
*/



/* 예제 7-9
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Power
{
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	bool operator! (); // ! 연산자 함수 선언
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

bool Power::operator!() {
	if (kick == 0 && punch == 0) return true;
	else return false;
}

int main() {
	Power a(0, 0), b(5, 5);
	if (!a) cout << "a의 파워가 0이다." << endl; // ! 연산자 호출
	else cout << "a의 파워가 0이 아니다." << endl;
	if (!b) cout << "b의 파워가 0이다." << endl; // ! 연산자 호출
	else cout << "b의 파워가 0이 아니다." << endl;

}
*/



/* 예제 7-10
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Power
{
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power operator++ (int x); // 후위 ++ 연산자 함수 선언
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power Power::operator++(int x) {
	Power tmp = *this; // 증가 이전 객체 상태를 저장
	kick++;
	punch++;
	return tmp; // 증가 이전 객체 상태 리턴
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = a++; // 후위 ++ 연산자 사용
	a.show(); // a의 파워는 1 중가됨
	b.show(); // b는 a가 증가되기 이전 상태를 가짐
}
*/


/* 예제 7-11
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Power
{
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	friend Power operator+ (int op1, Power op2); // 프렌드 선언
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power operator+(int op1, Power op2) {
	Power tmp; // 임시 객체 생성
	tmp.kick = op1 + op2.kick; // kick 더하기
	tmp.punch = op1 + op2.punch; // punch 더하기
	return tmp; // 임시 객체 리턴
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = 2 + a; // 파워 객체 더하기 연산
	a.show();
	b.show();
}
*/




/* 예제 7-12
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	friend Power operator+(Power op1, Power op2); // 프렌드 선언
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power operator+(Power op1, Power op2) {
	Power tmp; // 임시 객체 생성
	tmp.kick = op1.kick + op2.kick; // kick 더하기
	tmp.punch = op1.punch + op2.punch; // punch 더하기
	return tmp; // 임시 객체 리턴
}

int main() {
	Power a(3, 5), b(4, 6), c;
	c = a + b; // 파워 객체 + 연산
	a.show();
	b.show();
	c.show();
}
*/



/* 예제 7-13
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	friend Power& operator++(Power& op); // 전위 ++ 연산자 함수 프렌드 선언
	friend Power operator++(Power& op, int x); // 후위 ++ 연산자 함수 프렌드 선언
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& operator++(Power& op) { // 전위 ++ 연산자 함수 구현
	op.kick++;
	op.punch++;
	return op; // 연산 결과 리턴
}

Power operator++(Power& op, int x) { // 후위 ++ 연산자 함수 구현
	Power tmp = op; // 변경하기 전의 op 상태 저장
	op.kick++;
	op.punch++;
	return tmp; // 변경 이전의 op 리턴
}

int main() {
	Power a(3, 5), b;
	b = ++a; // 전위 ++ 연산자
	a.show(); b.show();

	b = a++; // 후위 ++ 연산자
	a.show(); b.show();
}
*/




/* 예제 7-14
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power& operator <<(int n); // 연산 후 Power 객체의 참조 리턴
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& Power::operator <<(int n) {
	kick += n;
	punch += n;
	return *this; // 이 객체의 참조 리턴
}

int main() {
	Power a(1, 2);
	a << 3 << 5 << 6;
	a.show();
}
*/










/* 예제 8-1
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

// 2차원 평면에서 한 점을 표현하는 클래스 Point 선언
class Point {
	int x, y; // 한 점 (x,y) 좌표값
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint : public Point { // 2차원 평면에서 컬러 점을 표현하는 클래스 ColorPoint. Point를 상속받음
	string color; // 점의 색 표현
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point의 showPoint() 호출
}

int main() {
	//Point p; // 기본 클래스의 객체 생성
	ColorPoint cp; // 파생 클래스의 객체 생성
	cp.set(3, 4); // 기본 클래스의 멤버 호출
	cp.setColor("Red"); // 파생 클래스의 멤버 호출
	cp.showColorPoint(); // 파생 클래스의 멤버 호출
}
*/




/* 예제 8-2
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Point {
protected:
	int x, y; // 한점 (x,y) 좌표값
public:
	void set(int x, int y);
	void showPoint();
};

void Point::set(int x, int y) {
	this->x = x;
	this->y = y;
}

void Point::showPoint() {
	cout << "(" << x << "," << y << ")" << endl;
}

class ColorPoint : public Point {
	string color;
public:
	void setColor(string color);
	void showColorPoint();
	bool equals(ColorPoint p);
};

void ColorPoint::setColor(string color) {
	this->color = color;
}

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point 클래스의 showPoint() 호출
}

bool ColorPoint::equals(ColorPoint p) {
	if (x == p.x && y = p.y && color == p.color)
		return true;
	else
		return false;
}

int main() {
	Point p; // 기본 클래스의 객체 생성
	p.set(2, 3);
	p.x = 5;
	p.y = 5;
	p.showPoint();

	ColorPoint cp; // 파생 클래스의 객체 생성
	cp.x = 10;
	cp.y = 10;
	cp.set(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();

	ColorPoint cp2;
	cp2.set(3, 4);
	cp2.setColor("Red");
	cout << ((cp.equals(cp2)) ? "true" : "false");

}
*/




/* 예제 8-3
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class TV {
	int size; // 스크린 크기
public:
	TV() { size = 20; }
	TV(int size) { this->size = size; }
	int getSize() { return size; }
};

class WideTV : public TV { // TV를 상속받는 WideTV
	bool videoln;
public:
	WideTV(int size, bool videoln) : TV(size) {
		this->videoln = videoln;
	}
	bool getVideoln() { return videoln; }
};

class SmartTV : public WideTV { // WideTV를 상속받는 SmartTV
	string ipAddr; // 인터넷 주소
public:
	SmartTV(string ipAddr, int size) : WideTV(size, true) {
		this->ipAddr = ipAddr;
	}
	string getIpAddr() { return ipAddr; }
};

int main() {
	//32 인치 크기에 "192.0.0.1"의 인터넷 주소를 가지는 스마트 TV 객체 생성
	SmartTV htv("192.0.0.1", 32);
	cout << "size=" << htv.getSize() << endl;
	cout << "videoln=" << boolalpha << htv.getVideoln() << endl;
	cout << "IP=" << htv.getIpAddr() << endl;
}
*/



/* 예제 8-4
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived : private Base {
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() { cout << b; }
};

int main() {
	Derived x;
	x.a = 5;
	x.setA(10);
	x.showA();
	x.b = 10;
	x.setB(10);
	x.showB();
}
*/




/* 예제 8-5
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived : protected Base {
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() { cout << b; }
};

int main() {
	Derived x;
	x.a = 5;
	x.setA(10);
	x.showA();
	x.b = 10;
	x.setB(10);
	x.showB();
}
*/




/* 예제 8-6
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived : private Base {
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() {
		setA(5);
		showA();
		cout << b;
	}
};

class GrandDerved : private Derived {
	int c;
protected:
	void setA(int x) {
		setA(x);
		showA();
		setB(x);
	}
};
*/




/* 예제 8-7
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Adder {
protected:
	int add(int a, int b) { return a + b; }
};

class Subtractor {
protected:
	int minus(int a, int b) { return a - b; }
};

class Calculator : public Adder, public Subtractor {
public:
	int calc(char op, int a, int b);
};

int Calculator::calc(char op, int a, int b) {
	int res = 0;
	switch (op) {
	case '+':res = add(a, b); break;
	case '-':res = minus(a, b); break;
	}
	return res;
}

int main() {
	Calculator handCalculator;
	cout << "2 + 4 = " << handCalculator.calc('+', 2, 4) << endl;
	cout << "100 - 8 = " << handCalculator.calc('-', 100, 8) << endl;
}
*/









/* 예제 9-1
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Base {
public:
	void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
	void f() { cout << "Derived::f() called" << endl; }
};

void main() {
	Derived d, * pDer;
	pDer = &d;
	pDer->f(); // Derived::f() 호출

	Base* pBase;
	pBase = pDer; // 업캐스팅
	pBase->f(); // Base::f() 호출
}
*/




/* 예제 9-2
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Base {
public:
	virtual void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
	void f() { cout << "Derived::f() called" << endl; }
};

void main() {
	Derived d, * pDer;
	pDer = &d;
	pDer->f(); // Derived::f() 호출

	Base* pBase;
	pBase = pDer; // 업캐스팅
	pBase->f(); // Base::f() 호출
}
*/




/* 예제 9-3
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Base {
public:
	virtual void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
	void f() { cout << "Derived::f() called" << endl; }
};

class GrandDerived : public Derived {
public:
	void f() { cout << "GrandDerived::f() called" << endl; }
};

void main() {
	GrandDerived g;
	Base* bp;
	Derived* dp;
	GrandDerived* gp;

	bp = dp = gp = &g;

	bp->f();
	dp->f();
	gp->f();
}
*/



/* 예제 9-4
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Shape {
public:
	virtual void draw() {
		cout << "--Shape--";
	}
};

class Circle : public Shape {
public:
	virtual void draw() {
		Shape::draw(); // 기본 클래스의 draw() 호출
		cout << "Circle" << endl;
	}
};

int main() {
	Circle circle;
	Shape* pShape = &circle;

	pShape->draw();
	pShape->Shape::draw();
}
*/




/* 예제 9-5
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Base {
public:
	virtual ~Base() { cout << "~Base()" << endl; }
};

class Derived : public Base {
public:
	virtual ~Derived() { cout << "~Derived()" << endl; }
};

void main() {
	
	Derived* dp = new Derived();
	Base* bp = new Derived();
	
	delete dp; // Derived의 포인터로 소멸
	delete bp; // Base의 포인터로 소멸
}
*/




/* 예제 9-6
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Calculator {
public:
	virtual int add(int a, int b) = 0; // 두 정수의 합 리턴
	virtual int subtract(int a, int b) = 0; // 두 정수의 차 리턴
	virtual double average(int a[], int size) = 0; // 배열 a의 평균 리턴, size는 배열의 크기
};

class GoodCalc : public Calculator {
public:
	int add(int a, int b) { return a + b; }
	int subtract(int a, int b) { return a - b; }
	double average(int a[], int size) {
		double sum = 0;
		for (int i = 0; i < size; i++)
			sum += a[i];
		return sum / size;
	}
};

int main() {
	int a[]{ 1,2,3,4,5 };
	Calculator* p = new GoodCalc();
	cout << p->add(2, 3) << endl;
	cout << p->subtract(2, 3) << endl;
	cout << p->average(a, 5) << endl;
}
*/




/* 예제 9-7
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class  Calculator {
	void input() {
		cout << "정수를 2 개를 입력하세요>> ";
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0; // 두 정수의 합 리턴
public:
	void run() {
		input();
		cout << "계산된 값은 " << calc(a, b) << endl;
	}
};

class Adder : public Calculator {
protected:
	int calc(int a, int b) { // 순수 가상 함수 구현
		return a + b;
	}
};

class Subtractor : public Calculator {
protected:
	int  calc(int a, int b) { // 순수 가상 함수 구현
		return a - b;
	}
};

int main() {
	Adder adder;
	Subtractor subtractor;
	adder.run();
	subtractor.run();
}
*/










/* 예제 10-1
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
};

template <class T>
void myswap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 4, b = 5;
	myswap(a, b);
	cout << "a=" << a << ", " << "b=" << b << endl;

	double c = 0.3, d = 12.5;
	myswap(c, d);
	cout << "c=" << c << ", " << "d=" << d << endl;

	Circle donut(5), pizza(20);
	myswap(donut, pizza);
	cout << "donut반지름=" << donut.getRadius() << ",";
	cout << "pizza반지름=" << pizza.getRadius() << endl;

}
*/




/* 예제 10-2
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

template <class T>
T bigger(T a, T b) { // 두 개의 매개 변수를 비교하여 큰 값을 리턴
	if (a > b)
		return a;
	else
		return b;
}

int main() {
	int a = 20, b = 50;
	char c = 'a', d = 'z';
	cout << "bigger(20,50)의 결과는 " << bigger(a, b) << endl;
	cout << "bigger('a', 'z')의 결과는 " << bigger(c, d) << endl;
}
*/




/* 예제 10-3
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

template <class T>
T add(T data[], int n) { // 배열  data에서 n개의 원소를 합한 결과를 리턴
	T sum = 0;
	for (int i = 0; i < n; i++) {
		sum += data[i];
	}
	return sum; // sum의 타입과 ㄹ리턴 타입이 모두 T로 선언되어 있음
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[] = { 1.2,2.3,3.4,4.5,5.6,6.7 };

	cout << "sum of x[] = " << add(x, 5) << endl; // 배열 x와 원소 5개의 합을 계산
	cout << "sum of d[] = " << add(d, 6) << endl; // 배열 d와 원소 5개의 합을 계산
}
*/




/* 예제 10-4
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

// 두 개의 제네릭 타입 T1, T2를 가지는 copy()의 템플릿

template <class T1, class T2>
void mcopy(T1 src[], T2 dest[], int n) { // src[]의 n개의 원소를 dest[]에 복사하는 함수
	for (int i = 0; i < n; i++)
		dest[i] = (T2)src[i]; // T1 타입의 값을 T2타입으로 변환한다.
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[5];
	char c[5] = { 'H','e','l','l' ,'o' }, e[5];

	mcopy(x, d, 5); // int x[]의 원소 5개를 double d[]에 복사
	mcopy(c, e, 5); // char c[]의 원소 5개를 char e[]에 복사

	for (int i = 0; i < 5; i++)cout << d[i] << ' '; // d[] 출럭
	cout << endl;
	for (int i = 0; i < 5; i++)cout << e[i] << ' '; // e[] 출럭
	cout << endl;
}
*/




/* 오류 발생
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

template <class T>
void print(T array[], int n) {
	for (int i = 0; i < n; i++)
		cout << array[i] << '\t';
	cout << endl;
}

void print(char array[], int n) { // char 배열을 출력하기 위한 함수 중복
	for (int i = 0; i < n; i++)
		cout << (int)array[i] << '\t'; // array[i]를 int 타입으로 변환하여 정수 출력
	cout << endl;
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[5] = { 1.1,2.2,3.3,4.4,5.5 };
	print(x, 5);
	print(d, 5);

	char c[5] = { 1,2,3,4,5 };
	print(c, 5);
}
*/




/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

template <class T>
class MyStack {
	int tos; // top of stack;
	T data[100]; // T 타입의 배열. 스택의 크기는 100
public:
	MyStack();
	void push(T element); // element를 data [] 배열에 삽입
	T pop(); // 스택의 탑에 있는 데이털를 data[] 배열에서 리턴
};

template <class T>
MyStack<T>::MyStack() { // 생성자
	tos = -1; // 스택은 비어 있음
}

template <class T>
void MyStack<T>::push(T element) {
	if (tos == 99) {
		cout << "stack full";
		return;
	}
	tos++;
	data[tos] = element;
}

template <class T>
T MyStack<T>::pop() {
	T retData;
	if (tos == -1) {
		cout << "stack empty";
		return 0; // 오류 표시
	}
	retData = data[tos--];
	return retData;
}

int main() {
	MyStack<int> iStack; // int만 저장하는 스택
	iStack.push(3);
	cout << iStack.pop() << endl;

	MyStack<double> dStack; // double만 저장하는 스택
	dStack.push(3.5);
	cout << dStack.pop() << endl;

	MyStack<char> *p = new MyStack<char>(); // char만 저장하는 스택
	p->push('a');
	cout << p->pop() << endl;

	delete p;
}
*/




/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

template <class T>
class MyStack {
	int tos; // top of stack;
	T data[100]; // T 타입의 배열. 스택의 크기는 100
public:
	MyStack();
	void push(T element); // element를 data [] 배열에 삽입
	T pop(); // 스택의 탑에 있는 데이털를 data[] 배열에서 리턴
};

template <class T>
MyStack<T>::MyStack() { // 생성자
	tos = -1; // 스택은 비어 있음
}

template <class T>
void MyStack<T>::push(T element) {
	if (tos == 99) {
		cout << "stack full";
		return;
	}
	tos++;
	data[tos] = element;
}

template <class T>
T MyStack<T>::pop() {
	T retData;
	if (tos == -1) {
		cout << "stack empty";
		return 0; // 오류 표시
	}
	retData = data[tos--];
	return retData;
}

class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) { this->x = x; this->y = y; }
	void show() { cout << '(' << x << ',' << y << ')' << endl; }
};
*/




/* 예제 10-9
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {
	
	vector<int> v; // 정수만 삽입 가능한 백터 생성

	v.push_back(1); // 백터에 정수 1 삽입
	v.push_back(2); // 백터에 정수 2 삽입
	v.push_back(3); // 백터에 정수 3 삽입

	for (int i = 0; i < v.size(); i++) // 백터의 모든 원소 출력
		cout << v[i] << " "; // v[i]는 백터의 i번째 원소
	cout << endl;

	v[0] = 10; // 백터의 첫 번째 원소를 10으로 변경
	int n = v[2]; // n에 3이 저장
	v.at(2) = 5; // 백터의 3번째 원소를 5로 변경

	for (int i = 0; i < v.size(); i++) // 백터의 모든 원소 출력
		cout << v[i] << " "; // v[i]는 백터의 i번째 원소
	cout << endl;
}
*/




/* 예제 10-10 (getline함수 뭐지?)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {
	vector<string> sv; // 문자열 백터 생성
	string name;

	cout << "이름을 5개 입력하라" << endl;
	for (int i = 0; i < 5; i++) { // 한 줄에 한 개씩 5개의 이름을 입력받는다.
		cout << i + 1 << ">>";
		getline(cin, name);
		sv.push_back(name);
	}

	name = sv.at(0); // 백터의 첫 원소
	for (int i = 1; i < sv.size(); i++) {
		if (name < sv[i]) // sv[i]의 문자열이 name보다 사전에서 뒤에 나옴
			name = sv[i]; // name을 sv[i]의 문자열로 변경
	}
	cout << "사전에서 가장 뒤에 나오는 이름은 " << name << endl;
}
*/




/* 예제 10-11
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {
	vector<int> v; // 정수 백터 생성
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	vector<int>::iterator it; // 백터 v의 원소에 대한 포인터 it 선언

	for (it = v.begin(); it != v.end(); it++) { // iterator를 이용하여 모든 원소 탐색
		int n = *it; // it가 가리키는 원소 값 리턴
		n = n * 2; // 곱하기 2
		*it = n; // it가 가리키는 원소에 값 쓰기
	}

	for (it = v.begin(); it != v.end(); it++) // 백터 v의 모든 원소 출력
		cout << *it << ' ';
	cout << endl;
}
*/




/* 예제 10-12 (getline함수 뭐지?)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

int main() {
	map<string, string> dic; // 맵 컨테이너 생성. 키는 영어 단어, 한글 단어

	// 단어 3개를 map에 저장
	dic.insert(make_pair("love", "사랑")); // ("love", "사랑") 저장
	dic.insert(make_pair("apple", "사과")); // ("apple", "사과") 저장
	dic["cherry"] = "체리"; // ("cherry", "체리") 저장

	cout << "저장된 단어 개수" << dic.size() << endl;

	string eng;
	while (true) {
		cout << "찻고 싶은 단어>>";
		getline(cin, eng); // 사용자로부터 키 입력
		if (eng == "exit")
			break; // "exit" 입력되면 종료

		if (dic.find(eng) == dic.end()) // eng '키'를 끝까지 찾았는데 없음
			cout << "없음" << endl;
		else
			cout << dic[eng] << endl; // dic에서 eng의 값을 찾아 출력
	}
	cout << "종료합니다..." << endl;

}
*/




/* 예제 10-13 (sort함수 뭐지?)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

int main() {
	vector<int> v; // 정수 백터 생성

	cout << "5개의 정수를 입력하세요>> ";
	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		v.push_back(n); // 키보드에서 읽은 정수를 백터에 삽입
	}

	//v.begin()에서 v.end() 사이의 값을 오름차순으로 정렬
	// sort() 함수의 실행 결과 백터 v의 원소 순서가 변경됨
	sort(v.begin(), v.end());

	vector<int>::iterator it; // 백터 내의 원소를 탐색하는 iterator 변수 선언

	for (it = v.begin(); it != v.end(); it++) // 백터 v의 모든 원소 출력
		cout << *it << ' ';
	cout << endl;
}
*/




/* 예제 10-14
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

int square(int x) { return x * x; }

int main() {
	//기본 타입 선언에 auto 활용
	auto c = 'a'; // c는 char 타입으로 결정
	auto pi = 3.14; // pi는 double 타입으로 결정
	auto ten = 10; // ten는 int 타입으로 결정
	auto *p = &ten; // 변수 p는 int* 타입으로 결정
	cout << c << " " << pi << " " << ten << " " << *p << endl;

	//함수의 리턴 타입으로 추론
	auto ret = square(3); // square() 함수의 리턴 타입이 int 이므로 ret는 intㄹ로 결정
	cout << *p << " " << ret << endl;

	vector<int> v = { 1,2,3,4,5 }; // 백터 v에 5개의 원소 1,2,3,4,5 삽입
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << " "; // 1 2 3 4 5 출력
	cout << endl;

	// 템플릿에 auto를 사용하여 간소화
	for (auto it = v.begin(); it != v.end(); it++)
		cout << *it << " "; // 1 2 3 4 5 출력

}
*/




/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

int main() {
	// 람다 함수 선언과 동시에 호출(x=2, y=3 전달)
	[](int x, int y) {cout << "합은 " << x + y; } (2, 3); // 5출력
}
*/





/* 예제 11-1
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

int main() {
	// "Hi!"를 출력하고 다음 줄로 넘어간다.
	cout.put('H');
	cout.put('i');
	cout.put(33);
	cout.put('\n');

	// "C++ "을 출력한다.
	cout.put('C').put('+').put('+').put(' ');

	char str[] = "I love programming";
	cout.write(str, 6); // str 배열의 6개의 문자 "I love"를 스트림에 출력
}
*/





/* ****************************************************************************************************************오류발생
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

void get1() {
	cout << "cin.get()로 <Enter> 키까지 입력 받고 출력합니다>>";
	int ch; // EOF와의 비교를 위해 int타입으로 선언
	while ((ch = cin.get()) != EOF) { // 문자 읽기. EOF는 -1
		cout.put(ch); // 읽은 문자 출력
		if (ch == '\n');
		break; // <Enter>키가 입력되면 읽기 중단
	} 
}

void get2() {
	cout << "cin.get(char&)로 <Enter> 키까지 입력 받고 출력합니다>>";
	char ch;
	while (true) { 
		cin.get(ch); // 문자 읽기
		if (cin.eof()) break; // EOF를 만나면 읽기 종료
		cout.put(ch); // ch의 문자 출력
		if (ch == '\n');
		break; // <Enter>키가 입력되면 읽기 중단
	}
}

int main() {
	get1(); // cin.get()을 이용하는 사례
	get2(); // cin.get(char&)을 이용하는 사례
}
*/





/* 예제 11-3
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

int main() {
	char cmd[80];
	cout << "cin.get(char*, int)로 문자열을 읽습니다." << endl;
	while (true) {
		cout << "종료하려면 exit을 입력하세요 >> ";
		cin.get(cmd, 80); // 79개까지의 영어 문자 읽음.
		if (strcmp(cmd, "exit") == 0) {
			cout << "프로그램을 종료합니다....";
			return 0;
		}
		else
			cin.ignore(1); // 버퍼에 남아 있는 <Enter>키 ('\n')제거
	}
}
*/





/* 예제 11-4
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

int main() {
	char line[80];
	cout << "cin.getline()함수로 라인을 읽습니다." << endl;
	cout << "exit를 입력하면 루프가 끝납니다." << endl;

	int no = 1;// 라인 번호
	while (true) {
		cout << "라인 " << no << " >> ";
		cin.getline(line, 80); // 79개까지의 문자 읽음
		if (strcmp(line, "exit") == 0)
			break;
		cout << "echo --> ";
		cout << line << endl; // 읽은 라인을 화면에 출력
		no++; // 라인 번호 증가
	}
}
*/




/* 예제11-5
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

int main() {
	cout << 30 << endl; // 10진수로 출력

	cout.unsetf(ios::dec); // 10진수 해제
	cout.setf(ios::hex); // 16진수로 설정
	cout << 30 << endl;

	cout.setf(ios::showbase); // 16진수로 설정
	cout << 30 << endl;

	cout.setf(ios::uppercase); // 16진수의 A~F는 대문자로 출력
	cout << 30 << endl;

	cout.setf(ios::dec | ios::showpoint); // 10진수 표현과 동시에 소숫점 이하 나머지는 0으로 출력
	cout << 23.5 << endl;

	cout.setf(ios::scientific); // 실수를 과학산술용 표현으로 출력
	cout << 23.5 << endl;

	cout.setf(ios::showpos); // 양수인 경우 + 부호도 함께 출력
	cout << 23.5;

}
*/





/* 예제 11-6
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

void showWidth() {
	cout.width(10); // 다음에 출력되는 "hello"를 10칸으로 지정
	cout << "Hello" << endl;
	cout.width(5); // 다음에 출력되는 정수 12를 5칸으로 지정
	cout << 12 << endl;

	cout << '%';
	cout.width(10); // 다음에 출력되는 "Korea/"만 10칸으로 지정
	cout << "Korea/" << "Seoul/" << "City" << endl;
}

int main() {
	showWidth();
	cout << endl;

	cout.fill('^');
	showWidth();
	cout << endl;

	cout.precision(5);
	cout << 11. / 3. << endl;
}
*/





/* 예제 11-7
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

int main() {
	cout << hex << showbase << 30 << endl;
	cout << dec << showpos << 100 << endl;
	cout << true << ' ' << false << endl;
	cout << boolalpha << true << ' '<< false << endl;
}
*/





/* 예제 11-8
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

int main() {
	cout << showbase;

	// 타이틀을 출력한다.
	cout << setw(8) << "Number";
	cout << setw(10) << "Octal";
	cout << setw(10) << "Hexa" << endl;

	// 하나의 수를 십진수, 8진수, 16진수 형태로 한 줄에 출력한다.
	for (int i = 0; i < 50; i += 5) {
		cout << setw(8) << setfill('.') << dec << i; // 10진수
		cout << setw(10) << setfill(' ') << oct << i; // 8진수
		cout << setw(10) << setfill(' ') << hex << i << endl; // 16진수
	}
}
*/





/* 예제 11-9
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

class Point { // 한 점을 표현하는 클래스
	int x, y; // private 멤버
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	friend ostream& operator << (ostream& stream, Point a);
};

// << 연산자 함수
ostream& operator << (ostream& stream, Point a) {
	stream << "(" << a.x << "," << a.y << ")";
	return stream;
}

int main() {
	Point p(3, 4); // Point 객체 생성
	cout << p << endl; // Point객체 화면 출력
	
	Point q(1, 100), r(2, 200); // Point객체 생성
	cout << q << r << endl; // Point객체들 연속하여 화면 출력
}
*/





/* 예제 11-10
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

class Book { // 책을 표현하는 클래스
	string title;
	string press;
	string author;
public:
	Book(string title = "", string press = "", string author = "") {
		this->title = title;
		this->press = press;
		this->author = author;
	}
	friend ostream& operator << (ostream& stream, Book b); // friend 선언
};

// << 연산자 함수
ostream& operator << (ostream& stream, Book b) {
	stream << b.title << "," << b.press << "," << b.author;
	return stream;
}

int main() {
	Book book("소유냐 존재냐", "한국출판사", "에리히프롬"); // Book 객체 생성
	cout << book; // Book객체 book화면 출력
}
*/





/* 예제 11-11
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

class Point { // 한 점을 표현하는 클래스
	int x, y; // private 멤버
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	friend istream& operator >> (istream& ins, Point &a); // friend 선언
	friend ostream& operator << (ostream& stream, Point a); // friend 선언
};

istream& operator >> (istream& ins, Point& a) { // >> 연산자 함수
	cout << "x 좌표>>";
	ins >> a.x;
	cout << "y 좌표>>";
	ins >> a.y;
	return ins;
}

// << 연산자 함수
ostream& operator << (ostream& stream, Point a) { // >> 연산자 함수
	stream << "(" << a.x << "," << a.y << ")";
	return stream;
}

int main() {
	Point p; // Point 객체 생성
	cin >> p; // >> 연산자 호출하여 x좌표와 y좌표를 키보드로 읽어 객체 p완성
	cout << p; // << 연산자 호출하여 객체 p출력
}
*/





/* 예제 11-12
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

ostream& fivestar(ostream& outs) {
	return outs << "*****";
}

ostream& rightarrow(ostream& outs) {
	return outs << "---->";
}

ostream& beep(ostream& outs) {
	return outs << '\a'; // 시스템 beep(삑 소리)발생
}

int main() {
	cout << "벨이 울립니다" << beep << endl;
	cout << "C" << rightarrow << "C++" << rightarrow << "Java" << endl;
	cout << "Visual" << fivestar << "C++" << endl;
}
*/





/* 예제 11-13
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

istream& question(istream& ins) {
	cout << "거울아 거울아 누가 제일 예쁘니?";
	return ins;
}

int main() {
	string answer;
	cin >> question >> answer;
	cout << "세상에서 제일 예쁜 사람은 " << answer << "입니다." << endl;
}
*/










/* 예제 12-1
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

int main() {
	char name[10], dept[20];
	int sid;

	// 키보드로부터 읽기
	cout << "이름>>";
	cin >> name; // 키보드에서 이름 입력 받음
	cout << "학번>>";
	cin >> sid; // 키보드에서 학번 입력 받음
	cout << "학과>>";
	cin >> dept; // 키보드에서 학과 입력 받음

	// 파일 열기. student.txt 파일을 열고, 출력 스트림 생성
	ofstream fout("c:\\temp\\student.txt");
	if (!fout) { // 열기 실패 검사
		cout << "c:\\temp\\student.txt 파일을 열 수 없다";
		return 0;
	}

	// 파일 쓰기
	fout << name << endl; // name 쓰기
	fout << sid << endl; // sid 쓰기
	fout << dept << endl; // dept 쓰기

	fout.close();
}
*/





/* 예제 12-2
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

int main() {
	// 스트림 객체 생성 및 파일 열기
	ifstream fin;
	fin.open("c:\\temp\\student.txt");
	if (!fin) { // 파일 열기 실패 확인
		cout << "파일을 열 수 없다";
		return 0;
	}

	char name[10], dept[20];
	int sid;

	fin >> name; // 파일에 있는 문자열을 읽어서 name 배열에 저장
	fin >> sid; // 정수를 읽어서 sid 정수형 변수에 저장
	fin >> dept; // 문자열을 읽고 dept 배열에 저장

	// 읽은 텍스트를 화면에 출력
	cout << name << endl;
	cout << sid << endl;
	cout << dept << endl;

	fin.close();
}
*/





/* 예제 12-3
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

int main() {
	const char* file = "c:\\windows\\system.ini";

	ifstream fin(file);
	//fin.open(file, ios::in);
	if (!fin) {
		cout << file << "열기 오류" << endl;
		return 0;
	}
	int count = 0;
	int c;
	while ((c = fin.get()) != EOF) { // EOF를 만날 때까지 문자 읽기
		cout << (char)c;
		count++;
	}
	cout << "읽은 바이트 수는 " << count << endl;
	fin.close();
}
*/





/* 예제 12-4
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

int main() {
	const char* firstFile = "c:\\temp\\student.txt";
	const char* secondFile = "c:\\windows\\system.ini";

	fstream fout(firstFile, ios::out | ios::app); // 쓰기 모드로 파일 열기
	if (!fout) {
		cout << firstFile << "열기 오류";
		return 0;
	}

	fstream fin(secondFile, ios::in); // 읽기 모드로 파일 열기
	if (!fin) { // 열기 실패 검사
		cout << secondFile << "열기 오류";
		return 0;
	}

	int c;
	while ((c = fin.get()) != EOF) { // 파일 끝까지 문자 읽기
		fout.put(c); // 읽은 문자 기록
	}

	fin.close(); // 입력 파일 닫기
	fout.close(); // 출력 파일 닫기
}
*/





/* 예제 12-5
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

int main() {
	ifstream fin("c:\\windows\\system.ini");
	if (!fin) {
		cout << "c:\\windows\\system.ini 열기 실패" << endl;
		return 0;
	}

	char buf[81]; // 한 라인이 최대 80개의 문자로 구성된다고 가정
	while (fin.getline(buf, 81)) { // 한 라인이 최대 80개의 문자로 구성
		cout << buf << endl; // 라인 출력
	}
	fin.close();
}
*/





/* 예제 12-6
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

void fileRead(vector<string>& v, ifstream& fin) { // fin으로부터 벡터 v에 읽어 들임
	string line;
	while (getline(fin, line)) { // fin 파일에서 한 라인 읽기
		v.push_back(line); // 읽기 라인을 벡터에 저장
	}
}

void search(vector<string>& v, string word) { // 벡터 v에서 word를 찾아 출력
	for (int i = 0; i < v.size(); i++) {
		int index = v[i].find(word);
		if (index != -1) // found
			cout << v[i] << endl;
	}
}

int main() {
	vector<string> wordVector;
	ifstream fin("words.txt");
	if (!fin) {
		cout << "words.txt 파일을 열 수 없습니다" << endl;
		return 0; // 열기 오류
	}

	fileRead(wordVector, fin); // 파일 전체를 wordVector에 라인 별로 읽기
	fin.close();

	cout << "words.txt 파일을 읽었습니다." << endl;
	while (true) {
		cout << "검색할 단어를 입력하세요 >>";
		string word;
		getline(cin, word); // 키보드로부터 문자열 읽기
		if (word == "exit")
			break; // 프로그램 종료
		search(wordVector, word); // 벡터에서 문자열을 검색하여 출력
	}
	cout << "프로그램을 종료합니다." << endl;
}
*/





/* 예제 12-7
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

int main() {
	// 소스 파일과 목적 파일의 이름
	const char* srcFile = "c:\\temp\\desert.jpg";
	const char* destFile = "c:\\temp\\copydesert.jpg";

	// 소스 파일 열기
	ifstream fsrc(srcFile, ios::in | ios::binary);
	if (!fsrc) { // 열기 실패 검사
		cout << srcFile << " 열기 오류" << endl;
		return 0;
	}

	// 목적 파일 열기
	ofstream fdest(destFile, ios::out | ios::binary);
	if (!fdest) { // 열기 실패 검사
		cout << destFile << " 열기 오류" << endl;
		return 0;
	}

	// 소스 파일에서 목적 파일로 복사하기
	int c;
	while ((c = fsrc.get()) != EOF) { // 소스 파일을 끝까지 한 바이트씩 읽는다.
		fdest.put(c); // 읽은 바이트를 파일에 출력한다.
	}
	cout << srcFile << "을 " << destFile << "로 복사 완료" << endl;
	fsrc.close();
	fdest.close();

}
*/





/* 예제 12-8
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

int main() {
	const char* file = "c:\\windows\\system.ini";

	ifstream fin;
	fin.open(file, ios::in | ios::binary); // 읽기 모드로 파일 열기
	if (!fin) { // 열기 실패 검사
		cout << "파일 열기 오류";
		return 0;
	}

	int count = 0;
	char s[32];
	while (!fin.eof()) { // 파일 끝까지 읽는다.
		fin.read(s, 32); // 최대 32바이트를 읽어 배열 s에 저장
		int n = fin.gcount(); // 실제 읽은 바이트 수 알아냄
		cout.write(s, n); // 버퍼에 있는 n개의 바이트를 화면에 출력
		count += n;
	}
	cout << "읽은 바이트 수는 " << count << endl;
	fin.close();

}
*/





/* 예제 12-9
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

int main() {
	const char* srcFile = "c:\\temp\\tulips.jpg";
	const char* destFile = "c:\\temp\\copytulips.jpg";

	ifstream fsrc(srcFile, ios::in | ios::binary);
	if (!fsrc) { // 열기 실패 검사
		cout << srcFile << " 열기 오류" << endl;
		return 0;
	}

	ofstream fdest(destFile, ios::out | ios::binary);
	if (!fdest) { // 열기 실패 검사
		cout << destFile << " 열기 오류" << endl;
		return 0;
	}

	// 소스 파일에서 목적 파일로 복사하기
	char buf[1024];
	while (!fsrc.eof()) { // 파일 끝까지 읽는다.
		fsrc.read(buf, 1024); // 최대 1024바이트를 읽어 배열 buf에 저장
		int n = fsrc.gcount(); // 실제 읽은 바이트 수 알아냄
		fdest.write(buf, n); // 읽은 바이트 수 만큼 버퍼에서 목적 파일에 기록
	}

	cout << srcFile << "을 " << destFile << "로 복사 완료" << endl;
	fsrc.close();
	fdest.close();
}
*/





/* 예제 12-10
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

int main() {
	const char* file = "c:\\temp\\data.dat";

	ofstream fout;
	fout.open(file, ios::out | ios::binary); // 읽기 모드로 파일 열기
	if (!fout) { // 열기 실패 검사
		cout << "파일 열기 오류";
		return 0;
	}

	int n[] = { 0,1,2,3,4,5,6,7,8,9 };
	double d = 3.15;
	fout.write((char*)n, sizeof(n)); // int배열 n을 한번에 파일에 쓴다.
	fout.write((char*)(&d), sizeof(d)); // double값 하나를 파일에 쓴다.

	// 배열 n과 d값을 임의의 값으로 변경시킨다.
	for (int i = 0; i < 10; i++)n[i] = 99;
	d = 8.15;

	//배열 n과 d값을 파일에서 읽어 온다.
	ifstream fin(file, ios::in | ios::binary);
	if (!fin) { // 열기 실패 검사
		cout << "파일 열기 오류";
		return 0;
	}

	fin.read((char*)n, sizeof(n));
	fin.read((char*)(&d), sizeof(d));

	for (int i = 0; i < 10; i++)
		cout << n[i] << ' ';
	cout << endl << d << endl;
	fin.close();
}
*/





/* 예제 12-11
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

void showStreamState(ios& stream) {
	cout << "eof() " << stream.eof() << endl;
	cout << "fail() " << stream.fail() << endl;
	cout << "bad() " << stream.bad() << endl;
	cout << "good() " << stream.good() << endl;
}

int main() {

	const char* noExistFile = "c:\\temp\\noexist.txt"; // 존재하지 않는 파일명
	const char* existFile = "c:\\temp\\student.txt"; // 존재하는 파일명

	ifstream fin(noExistFile); // 존재하지 않는 파일 열기
	if (!fin) { // 열기 실패 검사
		cout << noExistFile << " 열기 오류" << endl;
		showStreamState(fin); // 스트림 상태 출력

	cout << existFile << " 파일 열기" << endl;
	fin.open(existFile);
	showStreamState(fin); // 스트림 상태 출력
	}

	// 스트림을 끝까지 읽고 화면에 출력
	int c;
	while ((c = fin.get()) != EOF)
		cout.put((char)c);

	cout << endl;
	showStreamState(fin); // 스트림 출력

	fin.close();
}
*/




/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

long getFileSize(ifstream& fin) {
	fin.seekg(0, ios::end); // get pointer를 파일의 맨 끝으로 옮김
	long length = fin.tellg()l // get pointer의 위치를 알아냄
		return length; // length는 파일의 크기와 동일
}

int main() {
	const char* file = "c:\\windows\\system.ini";

	ifstream fin(file);
	if (!fin) { // 열기 실패 검사
		cout << file << " 열기 오류" << endl;

	}
}
*/













/* 예제 13-1
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

int getExp(int base, int exp) { // base의 exp 지수승을 계산하여 리턴
	int value = 1;
	for (int n = 0; n < exp; n++)
		value = value * base; // base를 exp번 곱하여 지수 값 계산
	return value;
}

int main() {
	int v = getExp(2, 3); // 2의 3승 = 8
	cout << "2의 3승은 " << v << "입니다." << endl;

	int e = getExp(2, -3); // 2의 -3승은 ?
	cout << "2의 -3승은 " << e << "입니다." << endl;
}
*/





/* 예제 13-2
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

int getExp(int base, int exp) { // base의 exp 지수승을 계산하여 리턴
	if (base <= 0 || exp <= 0) {
		return -1;
	}
	int value = 1;
	for (int n = 0; n < exp; n++)
		value = value * base; // base를 exp번 곱하여 지수 값 계산
	return value;
}

int main() {
	int v = 0;
	v = getExp(2, 3);
	if (v != -1)
		cout << "2의 3승은 " << v << "입니다." << endl;
	else
		cout << "오류. 2의 3승은 " << "계산할 수 없습니다." << endl;

	int e = 0;
	e = getExp(2, -3); // 2의 -3승 ? getExp()는 false 리턴
	if (e != -1)
		cout << "2의 -3승은 " << e << "입니다." << endl;
	else
		cout << "오류. 2의 -3승은 " << "계산할 수 없습니다." << endl;
}
*/





/* 예제 13-3
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

bool getExp(int base, int exp, int& ret) { // base의 exp승 값을 계산하여 ret에 저장
	if (base <= 0 || exp <= 0) {
		return false;
	}
	int value = 1;
	for (int n = 0; n < exp; n++)
		value = value * base;
	ret = value;
	return true;
}

int main() {
	int v = 0;
	if (getExp(2, 3, v)) // v = 2의 3승 = 8. getExp()는 true 리턴
		cout << "2의 3승은 " << v << "입니다." << endl;
	else
		cout << "오류. 2의 3승은 " << "계산할 수 없습니다." << endl;

	int e = 0;
	if (getExp(2, -3, e)) // v = 2의 -3승 = ?. getExp()는 false 리턴
		cout << "2의 -3승은 " << e << "입니다." << endl;
	else
		cout << "오류. 2의 -3승은 " << "계산할 수 없습니다." << endl;
}
*/





/* 예제 13-4
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

int main() {
	int n, sum, average;

	while (true) {
		cout << "합을 입력하세요>>";
		cin >> sum;
		cout << "인원수를 입력하세요>>";
		cin >> n;
		try {
			if (n <= 0) // 오류 탐지
				throw n; // 예외 발생. catch(int x) 블록으로 점프
			else
				average = sum / n;
		}
		catch (int x) {
			cout << "예외 발생!! " << x << "으로 나눌 수 없음" << endl;
			average = 0;
			cout << endl;
			continue;
		}
		cout << "평균 = " << average << endl << endl; // 평균 출력

	}
}
*/





/* 예제 13-5
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

int getExp(int base, int exp) {
	if (base <= 0 || exp <= 0) {
		throw "음수 사용 불가";
	}
	int value = 1;
	for (int n = 0; n < exp; n++)
		value = value * base;
	return value;
}

int main() {
	int v = 0;
	try {
		v = getExp(2, 3); // v = 2의 3승 = 8
		cout << "2의 3승은 " << v << "입니다." << endl;

		v = getExp(2, -3); // v = 2의 -3승 ?
		cout << "2의 -3승은 " << v << "입니다." << endl;
	}
	catch (const char* s) {
		cout << s << endl;
	}

}
*/




/* 예제 13-6
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

// 문자열을 정수로 변환하여 리턴
// 정수로 변환하기 어려운 문자열의 경우, char* 타입 예외 발생
int stringToInt(const char x[]) {
	int sum = 0;
	int len = strlen(x);
	for (int i = 0; i < len; i++) {
		if (x[i] >= '0' && x[i] <= '9')
			sum = sum * 10 + x[i] - '0';
		else
			throw x; // char* 타입의 예외 발생
	}
	return sum;
}

int main() {
	int n;
	try {
		n = stringToInt("123"); // 문자열을 정수로 변환
		cout << "\"123\" 은 정수 " << n << "로 변환됨" << endl;
		n = stringToInt("1A3"); // 문자열을 정수로 변환
		cout << "\"1A3\" 은 정수 " << n << "로 변환됨" << endl;
	}
	catch (const char* s) {
		cout << s << "처리에서 예외 발생!!" << endl;
		return 0;
	}
}
*/




/* 예제 13-7
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

class MyStack {
	int data[100];
	int tos;
public:
	MyStack() { tos = -1; }
	void push(int n) throw(char*);
	int pop() throw(char*);
};

void MyStack::push(int n) {
	if (tos == 99)
		throw "Stack Full";
	tos++;
	data[tos] = n;
}

int MyStack::pop() {
	if (tos == -1)
		throw "Stack Empty";
	int rData = data[tos--];
	return rData;
}

int main() {
	MyStack intStack;
	try {
		intStack.push(100); // 푸시 100
		intStack.push(200); // 푸시 200
		cout << intStack.pop() << endl; // 팝 200
		cout << intStack.pop() << endl; // 팝 100
		cout << intStack.pop() << endl; // "Stack Empty" 예외 발생
	}
	catch (const char* s) {
		cout << "예외 발생 : " << s << endl;
	}

}
*/





/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

class MyException { // 사용자가 만드는 기본 예외 클래스 선언
	int lineNo;
	string func, msg;
public:
	MyException(int n, string f, string m) {
		lineNo = n; func = f; msg = m;
	}
	void print() { cout << func << ":" << lineNo << " ," << msg << endl; }
};

class DivideByZeroException : public MyException { // 0으로 나누는 예외 클래스 선언
public:
	DivideByZeroException(int lineNo, string func, string msg) {}
};
*/