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
		cout << "�����Է�>>";
		cin >> a;
		if (a == 0)
			break; // 0�� �ԷµǸ� while ���� ���
		if (a % 3 != 0) {
			cout << "No" << "\n";
			continue; // ���� �ݺ�. while������ �б�
		}
		cout << "Yes" << "\n"; // �Էµ� 3�� ��� ���
	}

}
*/


/*4-3
#include <iostream>
using namespace std;

int main() {
	int i, a, b, sum = 0;
	cout << "�� ���� ���� �Է�>>";
	cin >> a >> b;

	i = a;
	do {
		sum += i;
		i++;
	} while (i <= b); //i�� b���� �۰ų� ���� ���� �ݺ�

		cout << a << "����" << b << "���� ����" << sum;

}
*/


/*4-2
#include <iostream>
using namespace std;

int main() {
	int i, a, b, sum = 0;
	cout << "�� ���� ���� �Է�>>";
	cin >> a >> b;

	i = a;
	while (i <= b) { // i�� b���� �۰ų� ���� ���� �ݺ�
		sum += i;
		i++;
	}

	cout << a << "���� " << b << "���� ���� " << sum;
}
*/


/*4-1
#include <iostream>
using namespace std;
int main() {
	int i, a, b, sum = 0;
	cout << "�� ���� ���� �Է�>>";
	cin >> a >> b;

	for (i = a; i <= b; i++) { // a���� b���� �� ���
		sum += i;
	}

	cout << a << "���� " << b << "���� ���� " << sum;
}
*/


/*3-2
#include <iostream>
using namespace std;
int main() {
	int score, div;
	cout << "������ �Է��ϼ���>>";
	cin >> score;
	if (score > 100 || score < 0) {
		cout << "�߸��� ���� �Դϴ�";
		return 0;
	}
	div = score / 10;
	switch (div) {
	case 10:
	case 9:
		cout << "A �Դϴ�"; break; // 90~100 ���
	case 8:
		cout << "B �Դϴ�"; // 80 ����
	case 7:
		cout << "C �Դϴ�"; break; // 70 ����
	case 6:
		cout << "D �Դϴ�"; break; // 60 ����
	default: // ������ ���� ��
		cout << "F �Դϴ�"; break;
	}


}
*/


/*3-1
#include <iostream>
using namespace std;
int main() {
	int score;
	cout << "������ �Է��ϼ���>>";
	cin >> score;
	if (score > 100 || score < 0) {
		cout << "�߸��� ���� �Դϴ�";
		return 0;
	}

	if (score >= 90) // 90�̻� 100����
		cout << "A �Դϴ�";
	else if (score >= 80) //80�̻� 89����
		cout << "B �Դϴ�";
	else if (score >= 70) //70�̻� 79����
		cout << "C �Դϴ�";
	else if (score >= 60) //60�̻� 69����
		cout << "D �Դϴ�";
	else // 0�̻� 59����
		cout << "B �Դϴ�";

}
*/


/*1-1
#include <iostream>
using namespace std;

int g = 20; //���� ����

int add(int x, int y) { //���� �Լ�
return x + y; // x�� y�� �� ����
}

int main() {
	int a, b, sum; // ���� ����
	cout << "�� ������ �Է��ϼ��� >>"; //������Ʈ ���
	cin >> a >> b; // �� ������ �о� a�� b�� �Է�
	sum = a + b;
	cout << "���� " << sum << "\n"; // sum �� ���
	cout << "���� " << add(a, b) << "\n"; // add() �Լ� ȣ�� ��� ���
	cout << "���� ���� g ���� " << g; // g �� ���

	return 0; // return ���� �����ϸ� �ڵ����� return 0;�� ���Եȴ�.
}
*/










/*2-2
#include <iostream>

double area(int r); // �Լ��� ���� ����

double area(int r) { // �Լ� ����
	return 3.14 * r * r; // ������ r�� ������ ����
}

int main() {
	int n = 3;
	char c = '#';
	std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;
	std::cout << "n + 5 = " << n + 5 << '\n';
	std::cout << "������ " << area(n); // �Լ� area()�� ���� �� ���

}
*/


/*2-3
#include <iostream>
using namespace std;

int main() {
	cout << "�ʺ� �Է��ϼ���>>";

	int width;
	cin >> width; // Ű����κ��� �ʺ� �о� width ������ ����

	cout << "���̸� �Է��ϼ���>>";

	int height;
	cin >> height; // Ű����κ��� ���̸� �о� height ������ ����

	int area = width * height; // �簢���� ���� ���
	cout << "������ " << area << "\n"; // ������ ����ϰ� ���� �ٷ� �Ѿ
}
*/


/*2-4
#include <iostream>
using namespace std;

int main() {
	cout << "�̸��� �Է��ϼ���>>";

	char name[11]; // �ѱ��� 5�� ����, ������ 10���� ������ �� �ִ�.
	cin >> name; // Ű����κ��� ���ڿ��� �д´�.

	cout << "�̸��� " << name << "�Դϴ�\n"; // �̸��� ����Ѵ�.
}
*/


/*2-5
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char password[11];
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���." << endl;
	while (true) {
		cout << "��ȣ>>";
		cin >> password;
		if (strcmp(password, "C++") == 0) {
			cout << "���α׷��� ���� �����մϴ�." << endl;
			break;
		}
		else
			cout << "��ȣ�� Ʋ���ϴ�~~" << endl;
	}

}
*/


/*2-6
#include <iostream>
using namespace std;

int main() {
	cout << "�ּҸ� �Է��ϼ���>>";

	char address[100];
	cin.getline(address, 100, '\n'); // Ű����κ��� �ּ� �б�

	cout << "�ּҴ� " << address << "�Դϴ�\n"; // �ּ� ���
}
*/


/*2-7
#include <iostream>
#include <string>
using namespace std;

int main() {
	string song("Falling in love with you"); // ���ڿ� song
	string elvis("Elvis Presley"); // ���ڿ� elvis
	string singer; // ���ڿ� singer

	cout << song + "�� �θ� ������"; // + �� ���ڿ� ����
	cout << "(��Ʈ : ù���ڴ� " << elvis[0]<<")?"; // [] ������ ���

	getline(cin, singer); // ���ڿ� �Է�
	if (singer == elvis) // ���ڿ� ��
		cout << "�¾ҽ��ϴ�.";
	else
		cout << "Ʋ�Ƚ��ϴ�. " + elvis + "�Դϴ�." << endl; // +�� ���ڿ� ����
}
*/










/*3�� �ǽ�1
#include <iostream>
using namespace std;

int main()
{
	char yes[100];
	
	while(true)
	{
		cout << "�����Ͻðڽ��ϱ�?>>";
		cin.getline(yes, 100);
		if (yes == "yes")
			break;


	int k, n = 0;
	int sum = 0;
	cout << "������ �Է��Ͻÿ�.>>";
	cin >> n;
	for (k = 1; k <= n; k++)
	{
		sum += k;
	}

	cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�." << endl;
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
	donut.radius = 1; // donut ��ü�� �������� 1�� ����
	double area = donut.getArea(); // donut ��ü�� ���� �˾Ƴ���
	cout << "donut ������ " << area << endl;

	Circle pizza;
	pizza.radius = 30; // pizza ��ü�� �������� 30���� ����
	area = pizza.getArea(); // pizza ��ü�� ���� �˾Ƴ���
	cout << "pizza ������ " << area << endl;
}
*/


/*3-2
#include <iostream>
using namespace std;

class Rectangle { // Rectangle Ŭ���� �����
public:
	int width;
	int height;
	int getArea(); // ������ ����Ͽ� �����ϴ� �Լ�
};

int Rectangle::getArea() { // Rectangle Ŭ���� ������
	return width * height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "�簢���� ������ " << rect.getArea() << endl;
}
*/


/*3-3
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); // �Ű� ���� ���� ������
	Circle(int r); // �Ű� ���� �ִ� ������
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; // �Ű� ���� ���� ������ ȣ��
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza(30); // �Ű� ���� �ִ� ������ ȣ��
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;

}
*/


/*3-4
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); // ���� ������
	Circle(int r); // Ÿ�� ������
	double getArea();
};

Circle::Circle() : Circle(1) { } // ���� ������

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; // �Ű� ���� ���� ������ ȣ��
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza(30); // �Ű� ���� �ִ� ������ ȣ��
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;

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

Point::Point() : Point(0,0) { } // ���� ������
Point::Point(int a, int b) // Ÿ�� ������
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

// ���簢���̸� true�� �����ϴ� ��� �Լ�
bool Rectangle::isSquare() {
	if (width == height) return true;
	else return false;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;
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
	~Circle(); // �Ҹ���
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::~Circle() {
	cout << "������ " << radius << " �� �Ҹ�" << endl;
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
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::~Circle() {
	cout << "������ " << radius << " �� �Ҹ�" << endl;
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


/* 3-9 ������ ������ �߻��ϴ� �� -> (9) (11) (13)
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

// C++ ����ü ����
struct StructCircle {
private:
	int radius;
public:
	StructCircle(int r) { radius = r;  } // ����ü�� ������
	double getArea();
};

double StructCircle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	StructCircle waffle(3);
	cout << "������ " << waffle.getArea();
}
*/


/* 3-11
#include <iostream>
using namespace std;

class Adder { // ���� ��� Ŭ����
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

class Calculator { // ���� Ŭ����
public:
	void run();
};

void Calculator::run() {
	cout << "�� ���� ���� �Է��ϼ���>>";
	int a, b;
	cin >> a >> b; // ���� �� �� �Է�
	Adder adder(a, b); // ������ ����
	cout << adder.process(); // ���� ���
}

int main() {
	Calculator calc; // calc ��ü ����
	calc.run(); // ���� ����
}
*/









/* ���� 4-1
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

	//��ü �̸����� ��� ����
	cout << donut.getArea() << endl;

	//��ü �����ͷ� ��� ����
	Circle* p;
	p = &donut; // p = donut
	cout << p->getArea() << endl; // donut�� getArea() ȣ��
	cout << (*p).getArea() << endl; // donut�� getArea() ȣ��

	p = &pizza;
	cout << p->getArea() << endl; // pizza�� getArea() ȣ��
	cout << (*p).getArea() << endl; // pizza�� getArea() ȣ��
}
*/


/* ���� 4-2
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

	// �迭�� �� ���� ��ü�� ��� ����
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) // �迭�� �� ���� ��ü�� ��� ����
		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;

	Circle *p;
	p = circleArray; // = &circleArray[0]
	for (int i = 0; i < 3; i++)
	{ // ��ü �����ͷ� �迭 ����
		cout << "Circle " << i << "�� ������ " << p->getArea() << endl;
		p++;
}

}
*/


/* ���� 4-3
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
	Circle circleArray[3] = { Circle(10), Circle(20), Circle() }; // Circle �迭 �ʱ�ȭ

	for (int i = 0; i < 3; i++)
		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;
}
*/



/* ���� 4-4
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

	for(int i=0;i<2;i++) // �迭�� �� ���� ��ü�� ��� ����
		for (int j = 0; j < 3; j++)
		{
			cout << "Circle [" << i << "," << j << "]�� ������ ";
			cout << circles[i][j].getArea() << endl;
		}

}
*/


/* ���� 4-5
#include <iostream>
using namespace std;

int main() {
	int* p;

	p = new int;
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	*p = 5;
	int n = *p;
	cout << "*p = " << *p << '\n';
	cout << "n = " << n << '\n';

	delete p;

}
*/


/* ���� 4-6
#include <iostream>
using namespace std;

int main() {
	cout << "�Է��� ������ ������?";
	int n;
	cin >> n; // ������ ���� �Է�
	if (n <= 0) return 0;
	int* p = new int[n]; // n ���� ���� �迭 ���� �Ҵ�
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "��° ����: "; // ������Ʈ ���
		cin >> p[i]; // Ű����κ��� ���� �Է�
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += p[i];
	cout << "��� = " << sum / n << endl;

	delete[] p; // �迭 �޸� ��ȯ

}
*/


/* ����4-7
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
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
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


/* ���� 4-8
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
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

int main()
{
	int radius;
	while (true) {
		cout << "���� ������ �Է�(�����̸� ����)>> ";
		cin >> radius;
		if (radius < 0) break; // ������ �ԷµǾ� �����Ѵ�.
		Circle* p = new Circle(radius); // ���� ��ü ����
		cout << "���� ������ " << p->getArea() << endl;
		delete p; // ��ü ��ȯ
	}
}
*/



/* ���� 4-9
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
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

int main()
{
	Circle* pArray = new Circle[3]; // ��ü �迭 ����

	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getArea() << '\n';
	}
	Circle* p = pArray; // ������ p�� �迭�� �ּҰ����� ����
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << '\n';
		p++; // ���� ������ �ּҷ� ����
	}

	delete[] pArray; // ��ü �迭 �Ҹ�

}
*/


/* ���� 4-10
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
	cout << "�����ϰ��� �ϴ� ���� ����?";
	int n, radius;
	cin >> n; // ���� ���� �Է�

	Circle *pArray = new Circle[n]; // n���� Circle �迭 ����
	for (int i = 0; i < n; i++) {
		cout << "��" << i + 1 << ": "; // ������Ʈ ���
		cin >> radius; // ������ �Է�
		pArray[i].setRadius(radius); // �� Circle ��ü�� ���������� �ʱ�ȭ
	}

	int count = 0; // ī��Ʈ ����
	Circle* p = pArray;
	for (int i = 0; i < n; i++) {
		cout << p->getArea() << ' '; // ���� ���� ���
		if (p->getArea() >= 100 && p->getArea() <= 200)
			count++;
		p++;
	}

	cout << endl << "������ 100���� 200 ������ ���� ������ " << count << endl;

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
	int n = a.find("++"); // ++������ġ
	cout << n << endl;
	int k = a.find("+++"); // +++�� ���� -1 return
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










/* ���� 5-1
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
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
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



/* ���� 5-2
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
	return tmp; // ��ü tmp�� �����Ѵ�.
}

int main()
{
	Circle c; // ��ü�� �����ȴ�. radius = 1�� �ʱ�ȭ�ȴ�.
	cout << c.getArea() << endl;

	c = getCircle();
	cout << c.getArea() << endl;

}
*/



/* ���� 5-3
#include <iostream>
using namespace std;

int main()
{
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
	int i = 1;
	int n = 2;
	int &refn = n; // ���� ���� refn ����. refn�� n�� ���� ����
	n = 4;
	refn++; // refn=5, n=5
	cout << i << '\t' << n << '\t' << refn << endl;

	refn = i; // refn=1, n=1
	refn++; // refn=2, n=2
	cout << i << '\t' << n << '\t' << refn << endl;

	int* p = &refn; // p�� n�� �ּҸ� ����
	*p = 20; // refn=20, n=20
	cout << i << '\t' << n << '\t' << refn << endl;
}
*/



/* ���� 5-4
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



/* ���� 5-5
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
	if (average(x, 6, avg)) cout << "����� " << avg << endl;
	else cout << "�Ű� ���� ����" << endl;

	if (average(x, -2, avg)) cout << "����� " << avg << endl;
	else cout << "�Ű� ���� ���� " << endl;
}
*/



/* ���� 5-6
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
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
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



/* ���� 5-7 �����ٸ���
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
	cout << "���� ������ �������� �Է��ϼ���>>";
	cin >> radius;
	

}

int main()
{
	Circle donut;
	readRadius(donut);
	cout << "donut�� ���� = " << donut.getArea() << endl;



}
*/



/* ���� 5-8
#include <iostream>
using namespace std;

char& find(char s[], int index) {
	return s[index]; // ���� ����
}

int main()
{
	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 'S'; // name[0] = 'S'�� ����
	cout << name << endl;

	char& ref = find(name, 2);
	ref = 't'; // name = "Site"
	cout << name << endl;

}
*/



/* ���� 5-9
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle(const Circle& c); // ���� ������ ����
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }

};

Circle::Circle(const Circle& c) { // ���� ������ ����
	this->radius = c.radius;
	cout << "���� ������ ���� radius = " << radius << endl;
}


int main() {
	Circle src(30); // src ��ü�� ���� ������ ȣ��
	Circle dest(src); // dest ��ü�� ���� ������ ȣ��

	cout << "������ ���� = " << src.getArea() << endl;
	cout << "�纻�� ���� = " << dest.getArea() << endl;
}
*/



/* ���� 5-10
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person { // Person Ŭ���� ����
	char* name;
	int id;
public:
	Person(int id, const char* name); // ������
	~Person(); // �Ҹ���
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) { // ������
	this->id = id;
	int len = strlen(name); // name�� ���� ����
	this->name = new char[len + 1]; // name ���ڿ� ���� �Ҵ�
	strcpy(this->name, name); // name�� ���ڿ� ����
}

Person::~Person() { // �Ҹ���
	if (name) // ���� name�� ���� �Ҵ�� �迭�� ������
		delete[] name; // ���� �Ҵ� �޸� �Ҹ�
}

void Person::changeName(const char* name) { // �̸� ����
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae"); // father ��ü ����
	Person daughter(father); // daughter ��ü ���� ����. ���������ȣ��

	cout << "daugther ��ü ���� ���� ____" << endl;
	father.show(); // father ��ü ���
	daughter.show(); // daughter ��ü ���

	daughter.changeName("Grace"); // daughter�� �̸��� "Grace"�� ����
	cout << "daugther �̸��� Grace�� ������ �� ____" << endl;
	father.show(); // father ��ü ���
	daughter.show(); // daughter ��ü ���

	return 0; // father, daughter ��ü �Ҹ�
}
*/



/* ���� 5-11
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person { // Person Ŭ���� ����
	char* name;
	int id;
public:
	Person(int id, const char* name); // ������
	Person(const Person& person); // ���� ������
	~Person(); // �Ҹ���
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) { // ������
	this->id = id;
	int len = strlen(name); // name�� ���� ����
	this->name = new char[len + 1]; // name ���ڿ� ���� �Ҵ�
	strcpy(this->name, name); // name�� ���ڿ� ����
}

Person::Person(const Person& person) { // ���� ������
	this->id = person.id; // id�� ����
	int len = strlen(person.name); // name�� ���� ����
	this->name = new char[len + 1]; // name�� ���� ���� �Ҵ�
	strcpy(this->name, person.name); // name�� ���ڿ� ����
	cout << "���� ������ ����. ���� ��ü�� �̸� " << this->name << endl;
}

Person::~Person() { // �Ҹ���
	if (name) // ���� name�� ���� �Ҵ�� �迭�� ������
		delete[] name; // ���� �Ҵ� �޸� �Ҹ�
}

void Person::changeName(const char* name) { // �̸� ����
	if (strlen(name) > strlen(this->name))
		return; // ���� name�� �Ҵ�� �޸𸮺��� �� �̸����� �ٲ� �� ����.
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae"); // father ��ü ����
	Person daughter(father); // daughter ��ü ���� ����. ���������ȣ��

	cout << "daugther ��ü ���� ���� ____" << endl;
	father.show(); // father ��ü ���
	daughter.show(); // daughter ��ü ���

	daughter.changeName("Grace"); // daughter�� �̸��� "Grace"�� ����
	cout << "daugther �̸��� Grace�� ������ �� ____" << endl;
	father.show(); // father ��ü ���
	daughter.show(); // daughter ��ü ���

	return 0; // father, daughter ��ü �Ҹ�
}
*/



/* ���� 5-12
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person { // Person Ŭ���� ����
	char* name;
	int id;
public:
	Person(int id, const char* name); // ������
	Person(const Person& person); // ���� ������
	~Person(); // �Ҹ���
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) { // ������
	this->id = id;
	int len = strlen(name); // name�� ���� ����
	this->name = new char[len + 1]; // name ���ڿ� ���� �Ҵ�
	strcpy(this->name, name); // name�� ���ڿ� ����
}

Person::Person(const Person& person) { // ���� ������
	this->id = person.id; // id�� ����
	int len = strlen(person.name); // name�� ���� ����
	this->name = new char[len + 1]; // name�� ���� ���� �Ҵ�
	strcpy(this->name, person.name); // name�� ���ڿ� ����
	cout << "���� ������ ���� " << this->name << endl;
}

Person::~Person() { // �Ҹ���
	if (name) // ���� name�� ���� �Ҵ�� �迭�� ������
		delete[] name; // ���� �Ҵ� �޸� �Ҹ�
}

void Person::changeName(const char* name) { // �̸� ����
	if (strlen(name) > strlen(this->name))
		return; // ���� name�� �Ҵ�� �޸𸮺��� �� �̸����� �ٲ� �� ����.
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










/* ���� 6-1
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int big(int a, int b) { // a�� b �� ū �� ����
	if (a > b) return a;
	else return b;
}

int big(int a[], int size) { // �迭 a[]���� ���� ū �� ����
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




/* ���� 6-2
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int sum(int a, int b) { // a���� b���� ���ϱ�
	int s = 0;
	for (int i = a; i <= b; i++)
		s += i;
	return s;
}

int sum(int a) { // 0���� a���� ���ϱ�
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




/* ���� 6-3
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

// ���� ����
void star(int a = 5);
void msg(int id, string text = "");

// �Լ� ����
void star(int a) {
	for (int i = 0; i < a; i++)
		cout << '*';
	cout << endl;
}

void msg(int id, string text) {
	cout << id << ' ' << text << endl;
}

int main() {
	// star() ȣ��
	star();
	star(10);

	// msg() ȣ��
	msg(10);
	msg(10, "Hello");

}
*/




/* ���� 6-4
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

// ���� ����
void f(char c = ' ', int line = 1);

// �Լ� ����
void f(char c, int line) {
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < 10; j++)
			cout << c;
		cout << endl;
	}
}

int main() {
	f(); // ���ٿ� ��ĭ�� 10�� ����Ѵ�.
	f('%'); // �� �ٿ� '%'�� 10�� ����Ѵ�.
	f('@', 5); // 5�ٿ� '@'���ڸ� 10�� ����Ѵ�.
}
*/




/* ���� 6-5
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

void fillLine(int n = 25, char c = '*') { // n���� c ���ڸ� �� ���ο� ���
	for (int i = 0; i < n; i++) cout << c;
	cout << endl;
}

int main() {
	fillLine(); // 25���� '*'�� �� ���ο� ���
	fillLine(10, '%'); // 10���� '%'�� �� ���ο� ���
}
*/




/* ���� 6-6
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
	v1 = new MyVector(); // ����Ʈ�� ���� 100���� �迭 ���� �Ҵ�
	v2 = new MyVector(1024); // ���� 1024���� �迭 ���� �Ҵ�

	delete v1;
	delete v2;
}
*/




/* ���� 6-7
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
	cout << square(3.0); // square(double a); ȣ��
	cout << square(3); // square(double a); ȣ��
}
*/




/* ���� 6-8
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
	cout << add(s, t); // ������ ����
}
*/



/* ���� 6-9
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
	msg(5, "Good Morning"); // ���� ������. �� ��° msg()ȣ��
	msg(6); // �Լ� ȣ�� ��ȣ. ������ ����
}
*/




/* ���� 6-10
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




/* ���� 6-11
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
	~Circle() { numOfCircles--; } // ������ ���� ���� ����
	double getArea() { return 3.14 * radius * radius; }
	static int getNumOfCircles() { return numOfCircles; }
};

Circle::Circle(int r) {
	radius = r;
	numOfCircles++; // ������ ���� ���� ����
}

int Circle::numOfCircles = 0; // 0���� �ʱ�ȭ

int main() {
	Circle* p = new Circle[10]; // 10���� ������ ����
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;

	delete[] p; // 10���� �Ҹ��� ����
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;

	Circle a; // ������ ����
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;

	Circle b; // ������ ����
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;
}
*/
