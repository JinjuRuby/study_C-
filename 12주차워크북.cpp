/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

template <class T>
T abs(T x) {
	if (x < 0)
		x = -x;
	return x;
}

int main() {
	int a = 5, b = -10;
	double c = 4.3, d = -14.5;

	cout << "a는" << abs(a) << "이다." << endl;
	cout << "b는" << abs(b) << "이다." << endl;
	cout << "c는" << abs(c) << "이다." << endl;
	cout << "d는" << abs(d) << "이다." << endl;

}
*/





/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

template <class T>
T add(T a, T b) {
	return a + b;
}

int main() {
	int a = 3, b = 7;
	cout << "합은 " << add(a, b) << endl;
}
*/





/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

template<class T>
T max(T& x,T& y )
{
	if (x > y) return x;
	else return y;
}

int main() {
	double i = max<double>(6, 3.52);
	cout << "더 큰 수는 " << i << "이다." << endl;
}
*/





/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

template <class T>
void displayArray(T array[], int size) {
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
}

int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	double b[] = { 1.1,2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0 };
	string c[] = { "Hello.","How","are","you?" };
	displayArray(a, 10);
	displayArray(b, 10);
	displayArray(c, 4);
}
*/





/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

template<class T>
void printArray(T  data[], int size) {
	cout << "[ ";
	for (int i = 0; i < size; i++) {
		cout << data[i] << " , ";
	}
	cout << " ]" << endl;
}

int main() {

	int a[] = { 1,2,3,4,5,6,7,8,9 };
	double b[] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9 };
	string c[] = { "Hello.","How","are","you?" };
	printArray(a, 9);
	printArray(b, 9);
	printArray(c, 4);
}
*/





/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

class Movie {
private:
	string title;
	double rating;
public:
	Movie(string t = " ", double r = 0.0) {
		title = t;
		rating = r;
	}
	void print_movie() {
		cout << title << " : " << rating << endl;
	}
};

int main() {

	vector<Movie> mov;

	mov.push_back(Movie("titanic", 9.9));
	mov.push_back(Movie("gone with the wind", 9.8));
	mov.push_back(Movie("공조", 9.7));
	mov.push_back(Movie("범죄도시", 9.5));

	vector<Movie>::iterator it;

	for (it = mov.begin(); it != mov.end(); it++) {
		it->print_movie();
	}

}
*/