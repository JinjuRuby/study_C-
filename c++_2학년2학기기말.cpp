/* ���� 7-1
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Rect;
bool equals(Rect r, Rect s); // equals() �Լ� ����

class Rect { // Rect Ŭ���� ����
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend bool equals(Rect r, Rect s);
};

bool equals(Rect r, Rect s) { // �ܺ� �Լ�
	if (r.width == s.width && r.height == s.height) return true;
	else return false;
}

int main() {
	Rect a(3, 4), b(4, 5);
	if (equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}
*/



/* ���� 7-2
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Rect;

class RectManager { // RectManager Ŭ���� ����
public:
	bool equals(Rect r, Rect s);
};

class Rect { // Rect Ŭ���� ����
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


/* ���� 7-3
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Rect;

class RectManager { // RectManager Ŭ���� ����
public:
	bool equals(Rect r, Rect s);
	void copy(Rect& dest, Rect& src);
};

class Rect { // Rect Ŭ���� ����
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend RectManager;
};

bool RectManager::equals(Rect r, Rect s) { // r�� s �� ������ true ����
	if (r.width == s.width && r.height == s.height) return true;
	else return false;
}

void RectManager::copy(Rect& dest, Rect& src) {// src�� dest�� ����
	dest.width = src.width; dest.height = src.height;
}

int main() {
	Rect a(3, 4), b(5, 6);
	RectManager man;

	man.copy(b, a); // a�� b�� �����Ѵ�.
	if (man.equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}
*/



/* ���� 7-4
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
	Power operator+ (Power op1); // + ������ �Լ� ����
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power Power::operator+(Power op2) {
	Power tmp; // �ӽ� ��ü ����
	tmp.kick = this->kick + op2.kick; // kick ���ϱ�
	tmp.punch = this->punch + op2.punch; // punch ���ϱ�
	return tmp; // ���� ��� ����
}

int main() {
	Power a(3, 5), b(4, 6), c;
	c = a + b; // �Ŀ� ��ü + ����
	a.show();
	b.show();
	c.show();
}
*/




/* ���� 7-5
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
	bool operator==(Power op2); // == ������ �Լ� ����
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

bool Power::operator==(Power op2) {
	if (kick == op2.kick && punch == op2.punch) return true;
	else return false;
}

int main() {
	Power a(3, 5), b(3, 5); // 2���� ������ �Ŀ� ��ü ����
	a.show();
	b.show();
	if (a == b)cout << "�� �Ŀ��� ����." << endl;
	else cout << "�� �Ŀ��� ���� �ʴ�." << endl;
}
*/




/* ���� 7-6
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
	Power& operator+=(Power op2); // += ������ �Լ� ����
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& Power::operator+=(Power op2) {
	kick = kick + op2.kick; // kick ���ϱ�
	punch = punch + op2.punch; // punch ���ϱ�
	return *this; // ���� ��� ����
}

int main() {
	Power a(3, 5), b(4, 6), c;
	a.show();
	b.show();
	c = a += b; // �Ŀ� ��ü ���ϱ�
	a.show();
	c.show();
}
*/




/* ���� 7-7
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
	Power& operator+ (int op2); // + ������ �Լ� ����
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& Power::operator+(int op2) {
	Power tmp; // �ӽ� ��ü ����
	tmp.kick = kick + op2; // kick�� op2 ���ϱ�
	tmp.punch = punch + op2; // punch�� op2 ���ϱ�
	return tmp; // �ӽ� ��ü ����
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = a + 2; // �Ŀ� ��ü�� ���� ���ϱ�
	a.show();
	b.show();
}
*/



/* ���� 7-8
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
	Power& operator++ (); // ���� ++ ������ �Լ� ����
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& Power::operator++() {
	kick++;
	punch++;
	return *this; // ����� ��ü �ڽ�(��ü a)�� ���� ����
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = ++a; // ���� ++ ������ ���
	a.show();
	b.show();
}
*/



/* ���� 7-9
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
	bool operator! (); // ! ������ �Լ� ����
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
	if (!a) cout << "a�� �Ŀ��� 0�̴�." << endl; // ! ������ ȣ��
	else cout << "a�� �Ŀ��� 0�� �ƴϴ�." << endl;
	if (!b) cout << "b�� �Ŀ��� 0�̴�." << endl; // ! ������ ȣ��
	else cout << "b�� �Ŀ��� 0�� �ƴϴ�." << endl;

}
*/



/* ���� 7-10
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
	Power operator++ (int x); // ���� ++ ������ �Լ� ����
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power Power::operator++(int x) {
	Power tmp = *this; // ���� ���� ��ü ���¸� ����
	kick++;
	punch++;
	return tmp; // ���� ���� ��ü ���� ����
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = a++; // ���� ++ ������ ���
	a.show(); // a�� �Ŀ��� 1 �߰���
	b.show(); // b�� a�� �����Ǳ� ���� ���¸� ����
}
*/


/* ���� 7-11
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
	friend Power operator+ (int op1, Power op2); // ������ ����
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power operator+(int op1, Power op2) {
	Power tmp; // �ӽ� ��ü ����
	tmp.kick = op1 + op2.kick; // kick ���ϱ�
	tmp.punch = op1 + op2.punch; // punch ���ϱ�
	return tmp; // �ӽ� ��ü ����
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = 2 + a; // �Ŀ� ��ü ���ϱ� ����
	a.show();
	b.show();
}
*/




/* ���� 7-12
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
	friend Power operator+(Power op1, Power op2); // ������ ����
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power operator+(Power op1, Power op2) {
	Power tmp; // �ӽ� ��ü ����
	tmp.kick = op1.kick + op2.kick; // kick ���ϱ�
	tmp.punch = op1.punch + op2.punch; // punch ���ϱ�
	return tmp; // �ӽ� ��ü ����
}

int main() {
	Power a(3, 5), b(4, 6), c;
	c = a + b; // �Ŀ� ��ü + ����
	a.show();
	b.show();
	c.show();
}
*/



/* ���� 7-13
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
	friend Power& operator++(Power& op); // ���� ++ ������ �Լ� ������ ����
	friend Power operator++(Power& op, int x); // ���� ++ ������ �Լ� ������ ����
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& operator++(Power& op) { // ���� ++ ������ �Լ� ����
	op.kick++;
	op.punch++;
	return op; // ���� ��� ����
}

Power operator++(Power& op, int x) { // ���� ++ ������ �Լ� ����
	Power tmp = op; // �����ϱ� ���� op ���� ����
	op.kick++;
	op.punch++;
	return tmp; // ���� ������ op ����
}

int main() {
	Power a(3, 5), b;
	b = ++a; // ���� ++ ������
	a.show(); b.show();

	b = a++; // ���� ++ ������
	a.show(); b.show();
}
*/




/* ���� 7-14
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
	Power& operator <<(int n); // ���� �� Power ��ü�� ���� ����
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& Power::operator <<(int n) {
	kick += n;
	punch += n;
	return *this; // �� ��ü�� ���� ����
}

int main() {
	Power a(1, 2);
	a << 3 << 5 << 6;
	a.show();
}
*/










/* ���� 8-1
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

// 2���� ��鿡�� �� ���� ǥ���ϴ� Ŭ���� Point ����
class Point {
	int x, y; // �� �� (x,y) ��ǥ��
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint : public Point { // 2���� ��鿡�� �÷� ���� ǥ���ϴ� Ŭ���� ColorPoint. Point�� ��ӹ���
	string color; // ���� �� ǥ��
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point�� showPoint() ȣ��
}

int main() {
	//Point p; // �⺻ Ŭ������ ��ü ����
	ColorPoint cp; // �Ļ� Ŭ������ ��ü ����
	cp.set(3, 4); // �⺻ Ŭ������ ��� ȣ��
	cp.setColor("Red"); // �Ļ� Ŭ������ ��� ȣ��
	cp.showColorPoint(); // �Ļ� Ŭ������ ��� ȣ��
}
*/




/* ���� 8-2
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Point {
protected:
	int x, y; // ���� (x,y) ��ǥ��
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
	showPoint(); // Point Ŭ������ showPoint() ȣ��
}

bool ColorPoint::equals(ColorPoint p) {
	if (x == p.x && y = p.y && color == p.color)
		return true;
	else
		return false;
}

int main() {
	Point p; // �⺻ Ŭ������ ��ü ����
	p.set(2, 3);
	p.x = 5;
	p.y = 5;
	p.showPoint();

	ColorPoint cp; // �Ļ� Ŭ������ ��ü ����
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




/* ���� 8-3
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class TV {
	int size; // ��ũ�� ũ��
public:
	TV() { size = 20; }
	TV(int size) { this->size = size; }
	int getSize() { return size; }
};

class WideTV : public TV { // TV�� ��ӹ޴� WideTV
	bool videoln;
public:
	WideTV(int size, bool videoln) : TV(size) {
		this->videoln = videoln;
	}
	bool getVideoln() { return videoln; }
};

class SmartTV : public WideTV { // WideTV�� ��ӹ޴� SmartTV
	string ipAddr; // ���ͳ� �ּ�
public:
	SmartTV(string ipAddr, int size) : WideTV(size, true) {
		this->ipAddr = ipAddr;
	}
	string getIpAddr() { return ipAddr; }
};

int main() {
	//32 ��ġ ũ�⿡ "192.0.0.1"�� ���ͳ� �ּҸ� ������ ����Ʈ TV ��ü ����
	SmartTV htv("192.0.0.1", 32);
	cout << "size=" << htv.getSize() << endl;
	cout << "videoln=" << boolalpha << htv.getVideoln() << endl;
	cout << "IP=" << htv.getIpAddr() << endl;
}
*/



/* ���� 8-4
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




/* ���� 8-5
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




/* ���� 8-6
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




/* ���� 8-7
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









/* ���� 9-1
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
	pDer->f(); // Derived::f() ȣ��

	Base* pBase;
	pBase = pDer; // ��ĳ����
	pBase->f(); // Base::f() ȣ��
}
*/




/* ���� 9-2
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
	pDer->f(); // Derived::f() ȣ��

	Base* pBase;
	pBase = pDer; // ��ĳ����
	pBase->f(); // Base::f() ȣ��
}
*/




/* ���� 9-3
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



/* ���� 9-4
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
		Shape::draw(); // �⺻ Ŭ������ draw() ȣ��
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




/* ���� 9-5
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
	
	delete dp; // Derived�� �����ͷ� �Ҹ�
	delete bp; // Base�� �����ͷ� �Ҹ�
}
*/




/* ���� 9-6
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Calculator {
public:
	virtual int add(int a, int b) = 0; // �� ������ �� ����
	virtual int subtract(int a, int b) = 0; // �� ������ �� ����
	virtual double average(int a[], int size) = 0; // �迭 a�� ��� ����, size�� �迭�� ũ��
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




/* ���� 9-7
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class  Calculator {
	void input() {
		cout << "������ 2 ���� �Է��ϼ���>> ";
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0; // �� ������ �� ����
public:
	void run() {
		input();
		cout << "���� ���� " << calc(a, b) << endl;
	}
};

class Adder : public Calculator {
protected:
	int calc(int a, int b) { // ���� ���� �Լ� ����
		return a + b;
	}
};

class Subtractor : public Calculator {
protected:
	int  calc(int a, int b) { // ���� ���� �Լ� ����
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










/* ���� 10-1
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
	cout << "donut������=" << donut.getRadius() << ",";
	cout << "pizza������=" << pizza.getRadius() << endl;

}
*/




/* ���� 10-2
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

template <class T>
T bigger(T a, T b) { // �� ���� �Ű� ������ ���Ͽ� ū ���� ����
	if (a > b)
		return a;
	else
		return b;
}

int main() {
	int a = 20, b = 50;
	char c = 'a', d = 'z';
	cout << "bigger(20,50)�� ����� " << bigger(a, b) << endl;
	cout << "bigger('a', 'z')�� ����� " << bigger(c, d) << endl;
}
*/




/* ���� 10-3
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

template <class T>
T add(T data[], int n) { // �迭  data���� n���� ���Ҹ� ���� ����� ����
	T sum = 0;
	for (int i = 0; i < n; i++) {
		sum += data[i];
	}
	return sum; // sum�� Ÿ�԰� ������ Ÿ���� ��� T�� ����Ǿ� ����
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[] = { 1.2,2.3,3.4,4.5,5.6,6.7 };

	cout << "sum of x[] = " << add(x, 5) << endl; // �迭 x�� ���� 5���� ���� ���
	cout << "sum of d[] = " << add(d, 6) << endl; // �迭 d�� ���� 5���� ���� ���
}
*/




/* ���� 10-4
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

// �� ���� ���׸� Ÿ�� T1, T2�� ������ copy()�� ���ø�

template <class T1, class T2>
void mcopy(T1 src[], T2 dest[], int n) { // src[]�� n���� ���Ҹ� dest[]�� �����ϴ� �Լ�
	for (int i = 0; i < n; i++)
		dest[i] = (T2)src[i]; // T1 Ÿ���� ���� T2Ÿ������ ��ȯ�Ѵ�.
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[5];
	char c[5] = { 'H','e','l','l' ,'o' }, e[5];

	mcopy(x, d, 5); // int x[]�� ���� 5���� double d[]�� ����
	mcopy(c, e, 5); // char c[]�� ���� 5���� char e[]�� ����

	for (int i = 0; i < 5; i++)cout << d[i] << ' '; // d[] �ⷰ
	cout << endl;
	for (int i = 0; i < 5; i++)cout << e[i] << ' '; // e[] �ⷰ
	cout << endl;
}
*/




/* ���� �߻�
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

void print(char array[], int n) { // char �迭�� ����ϱ� ���� �Լ� �ߺ�
	for (int i = 0; i < n; i++)
		cout << (int)array[i] << '\t'; // array[i]�� int Ÿ������ ��ȯ�Ͽ� ���� ���
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
	T data[100]; // T Ÿ���� �迭. ������ ũ��� 100
public:
	MyStack();
	void push(T element); // element�� data [] �迭�� ����
	T pop(); // ������ ž�� �ִ� �����и� data[] �迭���� ����
};

template <class T>
MyStack<T>::MyStack() { // ������
	tos = -1; // ������ ��� ����
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
		return 0; // ���� ǥ��
	}
	retData = data[tos--];
	return retData;
}

int main() {
	MyStack<int> iStack; // int�� �����ϴ� ����
	iStack.push(3);
	cout << iStack.pop() << endl;

	MyStack<double> dStack; // double�� �����ϴ� ����
	dStack.push(3.5);
	cout << dStack.pop() << endl;

	MyStack<char> *p = new MyStack<char>(); // char�� �����ϴ� ����
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
	T data[100]; // T Ÿ���� �迭. ������ ũ��� 100
public:
	MyStack();
	void push(T element); // element�� data [] �迭�� ����
	T pop(); // ������ ž�� �ִ� �����и� data[] �迭���� ����
};

template <class T>
MyStack<T>::MyStack() { // ������
	tos = -1; // ������ ��� ����
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
		return 0; // ���� ǥ��
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




/* ���� 10-9
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {
	
	vector<int> v; // ������ ���� ������ ���� ����

	v.push_back(1); // ���Ϳ� ���� 1 ����
	v.push_back(2); // ���Ϳ� ���� 2 ����
	v.push_back(3); // ���Ϳ� ���� 3 ����

	for (int i = 0; i < v.size(); i++) // ������ ��� ���� ���
		cout << v[i] << " "; // v[i]�� ������ i��° ����
	cout << endl;

	v[0] = 10; // ������ ù ��° ���Ҹ� 10���� ����
	int n = v[2]; // n�� 3�� ����
	v.at(2) = 5; // ������ 3��° ���Ҹ� 5�� ����

	for (int i = 0; i < v.size(); i++) // ������ ��� ���� ���
		cout << v[i] << " "; // v[i]�� ������ i��° ����
	cout << endl;
}
*/




/* ���� 10-10 (getline�Լ� ����?)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {
	vector<string> sv; // ���ڿ� ���� ����
	string name;

	cout << "�̸��� 5�� �Է��϶�" << endl;
	for (int i = 0; i < 5; i++) { // �� �ٿ� �� ���� 5���� �̸��� �Է¹޴´�.
		cout << i + 1 << ">>";
		getline(cin, name);
		sv.push_back(name);
	}

	name = sv.at(0); // ������ ù ����
	for (int i = 1; i < sv.size(); i++) {
		if (name < sv[i]) // sv[i]�� ���ڿ��� name���� �������� �ڿ� ����
			name = sv[i]; // name�� sv[i]�� ���ڿ��� ����
	}
	cout << "�������� ���� �ڿ� ������ �̸��� " << name << endl;
}
*/




/* ���� 10-11
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {
	vector<int> v; // ���� ���� ����
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	vector<int>::iterator it; // ���� v�� ���ҿ� ���� ������ it ����

	for (it = v.begin(); it != v.end(); it++) { // iterator�� �̿��Ͽ� ��� ���� Ž��
		int n = *it; // it�� ����Ű�� ���� �� ����
		n = n * 2; // ���ϱ� 2
		*it = n; // it�� ����Ű�� ���ҿ� �� ����
	}

	for (it = v.begin(); it != v.end(); it++) // ���� v�� ��� ���� ���
		cout << *it << ' ';
	cout << endl;
}
*/




/* ���� 10-12 (getline�Լ� ����?)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

int main() {
	map<string, string> dic; // �� �����̳� ����. Ű�� ���� �ܾ�, �ѱ� �ܾ�

	// �ܾ� 3���� map�� ����
	dic.insert(make_pair("love", "���")); // ("love", "���") ����
	dic.insert(make_pair("apple", "���")); // ("apple", "���") ����
	dic["cherry"] = "ü��"; // ("cherry", "ü��") ����

	cout << "����� �ܾ� ����" << dic.size() << endl;

	string eng;
	while (true) {
		cout << "���� ���� �ܾ�>>";
		getline(cin, eng); // ����ڷκ��� Ű �Է�
		if (eng == "exit")
			break; // "exit" �ԷµǸ� ����

		if (dic.find(eng) == dic.end()) // eng 'Ű'�� ������ ã�Ҵµ� ����
			cout << "����" << endl;
		else
			cout << dic[eng] << endl; // dic���� eng�� ���� ã�� ���
	}
	cout << "�����մϴ�..." << endl;

}
*/




/* ���� 10-13 (sort�Լ� ����?)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

int main() {
	vector<int> v; // ���� ���� ����

	cout << "5���� ������ �Է��ϼ���>> ";
	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		v.push_back(n); // Ű���忡�� ���� ������ ���Ϳ� ����
	}

	//v.begin()���� v.end() ������ ���� ������������ ����
	// sort() �Լ��� ���� ��� ���� v�� ���� ������ �����
	sort(v.begin(), v.end());

	vector<int>::iterator it; // ���� ���� ���Ҹ� Ž���ϴ� iterator ���� ����

	for (it = v.begin(); it != v.end(); it++) // ���� v�� ��� ���� ���
		cout << *it << ' ';
	cout << endl;
}
*/




/* ���� 10-14
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

int square(int x) { return x * x; }

int main() {
	//�⺻ Ÿ�� ���� auto Ȱ��
	auto c = 'a'; // c�� char Ÿ������ ����
	auto pi = 3.14; // pi�� double Ÿ������ ����
	auto ten = 10; // ten�� int Ÿ������ ����
	auto *p = &ten; // ���� p�� int* Ÿ������ ����
	cout << c << " " << pi << " " << ten << " " << *p << endl;

	//�Լ��� ���� Ÿ������ �߷�
	auto ret = square(3); // square() �Լ��� ���� Ÿ���� int �̹Ƿ� ret�� int���� ����
	cout << *p << " " << ret << endl;

	vector<int> v = { 1,2,3,4,5 }; // ���� v�� 5���� ���� 1,2,3,4,5 ����
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << " "; // 1 2 3 4 5 ���
	cout << endl;

	// ���ø��� auto�� ����Ͽ� ����ȭ
	for (auto it = v.begin(); it != v.end(); it++)
		cout << *it << " "; // 1 2 3 4 5 ���

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
	// ���� �Լ� ����� ���ÿ� ȣ��(x=2, y=3 ����)
	[](int x, int y) {cout << "���� " << x + y; } (2, 3); // 5���
}
*/





/* ���� 11-1
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

int main() {
	// "Hi!"�� ����ϰ� ���� �ٷ� �Ѿ��.
	cout.put('H');
	cout.put('i');
	cout.put(33);
	cout.put('\n');

	// "C++ "�� ����Ѵ�.
	cout.put('C').put('+').put('+').put(' ');

	char str[] = "I love programming";
	cout.write(str, 6); // str �迭�� 6���� ���� "I love"�� ��Ʈ���� ���
}
*/





/* ****************************************************************************************************************�����߻�
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

void get1() {
	cout << "cin.get()�� <Enter> Ű���� �Է� �ް� ����մϴ�>>";
	int ch; // EOF���� �񱳸� ���� intŸ������ ����
	while ((ch = cin.get()) != EOF) { // ���� �б�. EOF�� -1
		cout.put(ch); // ���� ���� ���
		if (ch == '\n');
		break; // <Enter>Ű�� �ԷµǸ� �б� �ߴ�
	} 
}

void get2() {
	cout << "cin.get(char&)�� <Enter> Ű���� �Է� �ް� ����մϴ�>>";
	char ch;
	while (true) { 
		cin.get(ch); // ���� �б�
		if (cin.eof()) break; // EOF�� ������ �б� ����
		cout.put(ch); // ch�� ���� ���
		if (ch == '\n');
		break; // <Enter>Ű�� �ԷµǸ� �б� �ߴ�
	}
}

int main() {
	get1(); // cin.get()�� �̿��ϴ� ���
	get2(); // cin.get(char&)�� �̿��ϴ� ���
}
*/





/* ���� 11-3
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

int main() {
	char cmd[80];
	cout << "cin.get(char*, int)�� ���ڿ��� �н��ϴ�." << endl;
	while (true) {
		cout << "�����Ϸ��� exit�� �Է��ϼ��� >> ";
		cin.get(cmd, 80); // 79�������� ���� ���� ����.
		if (strcmp(cmd, "exit") == 0) {
			cout << "���α׷��� �����մϴ�....";
			return 0;
		}
		else
			cin.ignore(1); // ���ۿ� ���� �ִ� <Enter>Ű ('\n')����
	}
}
*/





/* ���� 11-4
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

int main() {
	char line[80];
	cout << "cin.getline()�Լ��� ������ �н��ϴ�." << endl;
	cout << "exit�� �Է��ϸ� ������ �����ϴ�." << endl;

	int no = 1;// ���� ��ȣ
	while (true) {
		cout << "���� " << no << " >> ";
		cin.getline(line, 80); // 79�������� ���� ����
		if (strcmp(line, "exit") == 0)
			break;
		cout << "echo --> ";
		cout << line << endl; // ���� ������ ȭ�鿡 ���
		no++; // ���� ��ȣ ����
	}
}
*/




/* ����11-5
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

int main() {
	cout << 30 << endl; // 10������ ���

	cout.unsetf(ios::dec); // 10���� ����
	cout.setf(ios::hex); // 16������ ����
	cout << 30 << endl;

	cout.setf(ios::showbase); // 16������ ����
	cout << 30 << endl;

	cout.setf(ios::uppercase); // 16������ A~F�� �빮�ڷ� ���
	cout << 30 << endl;

	cout.setf(ios::dec | ios::showpoint); // 10���� ǥ���� ���ÿ� �Ҽ��� ���� �������� 0���� ���
	cout << 23.5 << endl;

	cout.setf(ios::scientific); // �Ǽ��� ���л���� ǥ������ ���
	cout << 23.5 << endl;

	cout.setf(ios::showpos); // ����� ��� + ��ȣ�� �Բ� ���
	cout << 23.5;

}
*/





/* ���� 11-6
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

void showWidth() {
	cout.width(10); // ������ ��µǴ� "hello"�� 10ĭ���� ����
	cout << "Hello" << endl;
	cout.width(5); // ������ ��µǴ� ���� 12�� 5ĭ���� ����
	cout << 12 << endl;

	cout << '%';
	cout.width(10); // ������ ��µǴ� "Korea/"�� 10ĭ���� ����
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





/* ���� 11-7
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





/* ���� 11-8
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

int main() {
	cout << showbase;

	// Ÿ��Ʋ�� ����Ѵ�.
	cout << setw(8) << "Number";
	cout << setw(10) << "Octal";
	cout << setw(10) << "Hexa" << endl;

	// �ϳ��� ���� ������, 8����, 16���� ���·� �� �ٿ� ����Ѵ�.
	for (int i = 0; i < 50; i += 5) {
		cout << setw(8) << setfill('.') << dec << i; // 10����
		cout << setw(10) << setfill(' ') << oct << i; // 8����
		cout << setw(10) << setfill(' ') << hex << i << endl; // 16����
	}
}
*/





/* ���� 11-9
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

class Point { // �� ���� ǥ���ϴ� Ŭ����
	int x, y; // private ���
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	friend ostream& operator << (ostream& stream, Point a);
};

// << ������ �Լ�
ostream& operator << (ostream& stream, Point a) {
	stream << "(" << a.x << "," << a.y << ")";
	return stream;
}

int main() {
	Point p(3, 4); // Point ��ü ����
	cout << p << endl; // Point��ü ȭ�� ���
	
	Point q(1, 100), r(2, 200); // Point��ü ����
	cout << q << r << endl; // Point��ü�� �����Ͽ� ȭ�� ���
}
*/





/* ���� 11-10
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

class Book { // å�� ǥ���ϴ� Ŭ����
	string title;
	string press;
	string author;
public:
	Book(string title = "", string press = "", string author = "") {
		this->title = title;
		this->press = press;
		this->author = author;
	}
	friend ostream& operator << (ostream& stream, Book b); // friend ����
};

// << ������ �Լ�
ostream& operator << (ostream& stream, Book b) {
	stream << b.title << "," << b.press << "," << b.author;
	return stream;
}

int main() {
	Book book("������ �����", "�ѱ����ǻ�", "����������"); // Book ��ü ����
	cout << book; // Book��ü bookȭ�� ���
}
*/





/* ���� 11-11
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

class Point { // �� ���� ǥ���ϴ� Ŭ����
	int x, y; // private ���
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	friend istream& operator >> (istream& ins, Point &a); // friend ����
	friend ostream& operator << (ostream& stream, Point a); // friend ����
};

istream& operator >> (istream& ins, Point& a) { // >> ������ �Լ�
	cout << "x ��ǥ>>";
	ins >> a.x;
	cout << "y ��ǥ>>";
	ins >> a.y;
	return ins;
}

// << ������ �Լ�
ostream& operator << (ostream& stream, Point a) { // >> ������ �Լ�
	stream << "(" << a.x << "," << a.y << ")";
	return stream;
}

int main() {
	Point p; // Point ��ü ����
	cin >> p; // >> ������ ȣ���Ͽ� x��ǥ�� y��ǥ�� Ű����� �о� ��ü p�ϼ�
	cout << p; // << ������ ȣ���Ͽ� ��ü p���
}
*/





/* ���� 11-12
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
	return outs << '\a'; // �ý��� beep(�� �Ҹ�)�߻�
}

int main() {
	cout << "���� �︳�ϴ�" << beep << endl;
	cout << "C" << rightarrow << "C++" << rightarrow << "Java" << endl;
	cout << "Visual" << fivestar << "C++" << endl;
}
*/





/* ���� 11-13
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

istream& question(istream& ins) {
	cout << "�ſ�� �ſ�� ���� ���� ���ڴ�?";
	return ins;
}

int main() {
	string answer;
	cin >> question >> answer;
	cout << "���󿡼� ���� ���� ����� " << answer << "�Դϴ�." << endl;
}
*/










/* ���� 12-1
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

	// Ű����κ��� �б�
	cout << "�̸�>>";
	cin >> name; // Ű���忡�� �̸� �Է� ����
	cout << "�й�>>";
	cin >> sid; // Ű���忡�� �й� �Է� ����
	cout << "�а�>>";
	cin >> dept; // Ű���忡�� �а� �Է� ����

	// ���� ����. student.txt ������ ����, ��� ��Ʈ�� ����
	ofstream fout("c:\\temp\\student.txt");
	if (!fout) { // ���� ���� �˻�
		cout << "c:\\temp\\student.txt ������ �� �� ����";
		return 0;
	}

	// ���� ����
	fout << name << endl; // name ����
	fout << sid << endl; // sid ����
	fout << dept << endl; // dept ����

	fout.close();
}
*/





/* ���� 12-2
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

int main() {
	// ��Ʈ�� ��ü ���� �� ���� ����
	ifstream fin;
	fin.open("c:\\temp\\student.txt");
	if (!fin) { // ���� ���� ���� Ȯ��
		cout << "������ �� �� ����";
		return 0;
	}

	char name[10], dept[20];
	int sid;

	fin >> name; // ���Ͽ� �ִ� ���ڿ��� �о name �迭�� ����
	fin >> sid; // ������ �о sid ������ ������ ����
	fin >> dept; // ���ڿ��� �а� dept �迭�� ����

	// ���� �ؽ�Ʈ�� ȭ�鿡 ���
	cout << name << endl;
	cout << sid << endl;
	cout << dept << endl;

	fin.close();
}
*/





/* ���� 12-3
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
		cout << file << "���� ����" << endl;
		return 0;
	}
	int count = 0;
	int c;
	while ((c = fin.get()) != EOF) { // EOF�� ���� ������ ���� �б�
		cout << (char)c;
		count++;
	}
	cout << "���� ����Ʈ ���� " << count << endl;
	fin.close();
}
*/





/* ���� 12-4
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

	fstream fout(firstFile, ios::out | ios::app); // ���� ���� ���� ����
	if (!fout) {
		cout << firstFile << "���� ����";
		return 0;
	}

	fstream fin(secondFile, ios::in); // �б� ���� ���� ����
	if (!fin) { // ���� ���� �˻�
		cout << secondFile << "���� ����";
		return 0;
	}

	int c;
	while ((c = fin.get()) != EOF) { // ���� ������ ���� �б�
		fout.put(c); // ���� ���� ���
	}

	fin.close(); // �Է� ���� �ݱ�
	fout.close(); // ��� ���� �ݱ�
}
*/





/* ���� 12-5
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
		cout << "c:\\windows\\system.ini ���� ����" << endl;
		return 0;
	}

	char buf[81]; // �� ������ �ִ� 80���� ���ڷ� �����ȴٰ� ����
	while (fin.getline(buf, 81)) { // �� ������ �ִ� 80���� ���ڷ� ����
		cout << buf << endl; // ���� ���
	}
	fin.close();
}
*/





/* ���� 12-6
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

void fileRead(vector<string>& v, ifstream& fin) { // fin���κ��� ���� v�� �о� ����
	string line;
	while (getline(fin, line)) { // fin ���Ͽ��� �� ���� �б�
		v.push_back(line); // �б� ������ ���Ϳ� ����
	}
}

void search(vector<string>& v, string word) { // ���� v���� word�� ã�� ���
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
		cout << "words.txt ������ �� �� �����ϴ�" << endl;
		return 0; // ���� ����
	}

	fileRead(wordVector, fin); // ���� ��ü�� wordVector�� ���� ���� �б�
	fin.close();

	cout << "words.txt ������ �о����ϴ�." << endl;
	while (true) {
		cout << "�˻��� �ܾ �Է��ϼ��� >>";
		string word;
		getline(cin, word); // Ű����κ��� ���ڿ� �б�
		if (word == "exit")
			break; // ���α׷� ����
		search(wordVector, word); // ���Ϳ��� ���ڿ��� �˻��Ͽ� ���
	}
	cout << "���α׷��� �����մϴ�." << endl;
}
*/





/* ���� 12-7
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
	// �ҽ� ���ϰ� ���� ������ �̸�
	const char* srcFile = "c:\\temp\\desert.jpg";
	const char* destFile = "c:\\temp\\copydesert.jpg";

	// �ҽ� ���� ����
	ifstream fsrc(srcFile, ios::in | ios::binary);
	if (!fsrc) { // ���� ���� �˻�
		cout << srcFile << " ���� ����" << endl;
		return 0;
	}

	// ���� ���� ����
	ofstream fdest(destFile, ios::out | ios::binary);
	if (!fdest) { // ���� ���� �˻�
		cout << destFile << " ���� ����" << endl;
		return 0;
	}

	// �ҽ� ���Ͽ��� ���� ���Ϸ� �����ϱ�
	int c;
	while ((c = fsrc.get()) != EOF) { // �ҽ� ������ ������ �� ����Ʈ�� �д´�.
		fdest.put(c); // ���� ����Ʈ�� ���Ͽ� ����Ѵ�.
	}
	cout << srcFile << "�� " << destFile << "�� ���� �Ϸ�" << endl;
	fsrc.close();
	fdest.close();

}
*/





/* ���� 12-8
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
	fin.open(file, ios::in | ios::binary); // �б� ���� ���� ����
	if (!fin) { // ���� ���� �˻�
		cout << "���� ���� ����";
		return 0;
	}

	int count = 0;
	char s[32];
	while (!fin.eof()) { // ���� ������ �д´�.
		fin.read(s, 32); // �ִ� 32����Ʈ�� �о� �迭 s�� ����
		int n = fin.gcount(); // ���� ���� ����Ʈ �� �˾Ƴ�
		cout.write(s, n); // ���ۿ� �ִ� n���� ����Ʈ�� ȭ�鿡 ���
		count += n;
	}
	cout << "���� ����Ʈ ���� " << count << endl;
	fin.close();

}
*/





/* ���� 12-9
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
	if (!fsrc) { // ���� ���� �˻�
		cout << srcFile << " ���� ����" << endl;
		return 0;
	}

	ofstream fdest(destFile, ios::out | ios::binary);
	if (!fdest) { // ���� ���� �˻�
		cout << destFile << " ���� ����" << endl;
		return 0;
	}

	// �ҽ� ���Ͽ��� ���� ���Ϸ� �����ϱ�
	char buf[1024];
	while (!fsrc.eof()) { // ���� ������ �д´�.
		fsrc.read(buf, 1024); // �ִ� 1024����Ʈ�� �о� �迭 buf�� ����
		int n = fsrc.gcount(); // ���� ���� ����Ʈ �� �˾Ƴ�
		fdest.write(buf, n); // ���� ����Ʈ �� ��ŭ ���ۿ��� ���� ���Ͽ� ���
	}

	cout << srcFile << "�� " << destFile << "�� ���� �Ϸ�" << endl;
	fsrc.close();
	fdest.close();
}
*/





/* ���� 12-10
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
	fout.open(file, ios::out | ios::binary); // �б� ���� ���� ����
	if (!fout) { // ���� ���� �˻�
		cout << "���� ���� ����";
		return 0;
	}

	int n[] = { 0,1,2,3,4,5,6,7,8,9 };
	double d = 3.15;
	fout.write((char*)n, sizeof(n)); // int�迭 n�� �ѹ��� ���Ͽ� ����.
	fout.write((char*)(&d), sizeof(d)); // double�� �ϳ��� ���Ͽ� ����.

	// �迭 n�� d���� ������ ������ �����Ų��.
	for (int i = 0; i < 10; i++)n[i] = 99;
	d = 8.15;

	//�迭 n�� d���� ���Ͽ��� �о� �´�.
	ifstream fin(file, ios::in | ios::binary);
	if (!fin) { // ���� ���� �˻�
		cout << "���� ���� ����";
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





/* ���� 12-11
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

	const char* noExistFile = "c:\\temp\\noexist.txt"; // �������� �ʴ� ���ϸ�
	const char* existFile = "c:\\temp\\student.txt"; // �����ϴ� ���ϸ�

	ifstream fin(noExistFile); // �������� �ʴ� ���� ����
	if (!fin) { // ���� ���� �˻�
		cout << noExistFile << " ���� ����" << endl;
		showStreamState(fin); // ��Ʈ�� ���� ���

	cout << existFile << " ���� ����" << endl;
	fin.open(existFile);
	showStreamState(fin); // ��Ʈ�� ���� ���
	}

	// ��Ʈ���� ������ �а� ȭ�鿡 ���
	int c;
	while ((c = fin.get()) != EOF)
		cout.put((char)c);

	cout << endl;
	showStreamState(fin); // ��Ʈ�� ���

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
	fin.seekg(0, ios::end); // get pointer�� ������ �� ������ �ű�
	long length = fin.tellg()l // get pointer�� ��ġ�� �˾Ƴ�
		return length; // length�� ������ ũ��� ����
}

int main() {
	const char* file = "c:\\windows\\system.ini";

	ifstream fin(file);
	if (!fin) { // ���� ���� �˻�
		cout << file << " ���� ����" << endl;

	}
}
*/













/* ���� 13-1
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

int getExp(int base, int exp) { // base�� exp �������� ����Ͽ� ����
	int value = 1;
	for (int n = 0; n < exp; n++)
		value = value * base; // base�� exp�� ���Ͽ� ���� �� ���
	return value;
}

int main() {
	int v = getExp(2, 3); // 2�� 3�� = 8
	cout << "2�� 3���� " << v << "�Դϴ�." << endl;

	int e = getExp(2, -3); // 2�� -3���� ?
	cout << "2�� -3���� " << e << "�Դϴ�." << endl;
}
*/





/* ���� 13-2
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

int getExp(int base, int exp) { // base�� exp �������� ����Ͽ� ����
	if (base <= 0 || exp <= 0) {
		return -1;
	}
	int value = 1;
	for (int n = 0; n < exp; n++)
		value = value * base; // base�� exp�� ���Ͽ� ���� �� ���
	return value;
}

int main() {
	int v = 0;
	v = getExp(2, 3);
	if (v != -1)
		cout << "2�� 3���� " << v << "�Դϴ�." << endl;
	else
		cout << "����. 2�� 3���� " << "����� �� �����ϴ�." << endl;

	int e = 0;
	e = getExp(2, -3); // 2�� -3�� ? getExp()�� false ����
	if (e != -1)
		cout << "2�� -3���� " << e << "�Դϴ�." << endl;
	else
		cout << "����. 2�� -3���� " << "����� �� �����ϴ�." << endl;
}
*/





/* ���� 13-3
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

bool getExp(int base, int exp, int& ret) { // base�� exp�� ���� ����Ͽ� ret�� ����
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
	if (getExp(2, 3, v)) // v = 2�� 3�� = 8. getExp()�� true ����
		cout << "2�� 3���� " << v << "�Դϴ�." << endl;
	else
		cout << "����. 2�� 3���� " << "����� �� �����ϴ�." << endl;

	int e = 0;
	if (getExp(2, -3, e)) // v = 2�� -3�� = ?. getExp()�� false ����
		cout << "2�� -3���� " << e << "�Դϴ�." << endl;
	else
		cout << "����. 2�� -3���� " << "����� �� �����ϴ�." << endl;
}
*/





/* ���� 13-4
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
		cout << "���� �Է��ϼ���>>";
		cin >> sum;
		cout << "�ο����� �Է��ϼ���>>";
		cin >> n;
		try {
			if (n <= 0) // ���� Ž��
				throw n; // ���� �߻�. catch(int x) ������� ����
			else
				average = sum / n;
		}
		catch (int x) {
			cout << "���� �߻�!! " << x << "���� ���� �� ����" << endl;
			average = 0;
			cout << endl;
			continue;
		}
		cout << "��� = " << average << endl << endl; // ��� ���

	}
}
*/





/* ���� 13-5
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
		throw "���� ��� �Ұ�";
	}
	int value = 1;
	for (int n = 0; n < exp; n++)
		value = value * base;
	return value;
}

int main() {
	int v = 0;
	try {
		v = getExp(2, 3); // v = 2�� 3�� = 8
		cout << "2�� 3���� " << v << "�Դϴ�." << endl;

		v = getExp(2, -3); // v = 2�� -3�� ?
		cout << "2�� -3���� " << v << "�Դϴ�." << endl;
	}
	catch (const char* s) {
		cout << s << endl;
	}

}
*/




/* ���� 13-6
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

// ���ڿ��� ������ ��ȯ�Ͽ� ����
// ������ ��ȯ�ϱ� ����� ���ڿ��� ���, char* Ÿ�� ���� �߻�
int stringToInt(const char x[]) {
	int sum = 0;
	int len = strlen(x);
	for (int i = 0; i < len; i++) {
		if (x[i] >= '0' && x[i] <= '9')
			sum = sum * 10 + x[i] - '0';
		else
			throw x; // char* Ÿ���� ���� �߻�
	}
	return sum;
}

int main() {
	int n;
	try {
		n = stringToInt("123"); // ���ڿ��� ������ ��ȯ
		cout << "\"123\" �� ���� " << n << "�� ��ȯ��" << endl;
		n = stringToInt("1A3"); // ���ڿ��� ������ ��ȯ
		cout << "\"1A3\" �� ���� " << n << "�� ��ȯ��" << endl;
	}
	catch (const char* s) {
		cout << s << "ó������ ���� �߻�!!" << endl;
		return 0;
	}
}
*/




/* ���� 13-7
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
		intStack.push(100); // Ǫ�� 100
		intStack.push(200); // Ǫ�� 200
		cout << intStack.pop() << endl; // �� 200
		cout << intStack.pop() << endl; // �� 100
		cout << intStack.pop() << endl; // "Stack Empty" ���� �߻�
	}
	catch (const char* s) {
		cout << "���� �߻� : " << s << endl;
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

class MyException { // ����ڰ� ����� �⺻ ���� Ŭ���� ����
	int lineNo;
	string func, msg;
public:
	MyException(int n, string f, string m) {
		lineNo = n; func = f; msg = m;
	}
	void print() { cout << func << ":" << lineNo << " ," << msg << endl; }
};

class DivideByZeroException : public MyException { // 0���� ������ ���� Ŭ���� ����
public:
	DivideByZeroException(int lineNo, string func, string msg) {}
};
*/