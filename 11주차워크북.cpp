/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Counter {
	int count;
public:
	//디폴트 생성자 작성 count=0 으로 초기화
	Counter() { count = 0; }

	// 생성자 작성 count=n으로 초기화
	Counter(int n) { count = n; }

	// ++연산자 중복
	Counter& operator++ () {
		count++;
		return *this;
	}

	Counter operator ++(int a) {
		Counter tmp = *this;
		count++;
		return tmp;
	}

	// --연산자 중복
	Counter& operator-- () {
		count--;
		return *this;
	}

	Counter operator --(int a) {
		Counter tmp = *this;
		count--;
		return tmp;
	}

	//  << 연산자 중복
	Counter& operator << (int n) {
		count += n;
		return *this;
	}
	void show() {
		cout << "count=" << count<<endl;
	}

};

int main() {
	Counter a(50);
	a++;
	a.show();
	a--;
	a.show();
	a << 3 << 5 << 6;
	a.show();
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Bird {
public:
	Bird() { ; } //생성자
	virtual void sound() = 0;
	// 가상함수 sound() 작성 


};
// class Dove  작성  
class Dove : public Bird {
public:
	Dove() {}
	virtual void sound()
	{
		cout << "coo coo" << endl;
	}

};

int main() {
	Dove d;
	d.sound();
	return 0;
}
*/




/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Fraction{
	int denom; //분모
	int numer; //분자
public:
	Fraction(int numer = 0, int denom = 1) { this->denom = denom; this->numer = numer; }
	~Fraction() { ; }
Fraction operator+(Fraction f) {
	Fraction c;
	if (this->denom == f.denom) {
		c.numer = this->numer + f.numer;
		c.denom = this->denom;
	}
	else {
		int n = (f.denom * this->numer) +
			(this->denom * f.numer);
		c.numer = n;
		int d = this->denom * f.denom;
		c.denom = d;
	}
	return c;
}

Fraction operator-(Fraction f) {
	Fraction c;
	if (this->denom == f.denom) {
		c.numer = this->numer - f.numer;
		c.denom = this->denom;
	}
	else {
		int n = (this->numer * f.denom) -
			(f.numer * this->denom);
		c.numer = n;
		int d = this->denom * f.denom;
		c.denom = d;
	}
	return c;
}

Fraction operator*(Fraction f) {
	Fraction c;
		c.numer = this->numer * f.numer;
		c.denom = this->denom * f.denom;
	return c;
}

};
*/