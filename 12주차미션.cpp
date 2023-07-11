/* 실습문제 10번
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

class Nation {
    string nation;
    string capital;
public:
    Nation(string nation = "no nation", string capital = "no capital") {
        this->nation = nation;
        this->capital = capital;
    }
    string getNation() {
        return nation;
    }
    string getCapital() {
        return capital;
    }
    bool nationCompare(string n) { 
        if (nation == n)
            return true;
        return false;
    }
};

int main() {
    vector<Nation> v;
    v.push_back(Nation("대한민국", "서울"));
    v.push_back(Nation("중국", "베이징"));
    v.push_back(Nation("일본", "도쿄"));
    v.push_back(Nation("미국", "와싱턴"));
    v.push_back(Nation("포르투갈", "리스본"));
    v.push_back(Nation("독일", "베를린"));
    v.push_back(Nation("영국", "런던"));
    v.push_back(Nation("우루과이", "몬테비데오"));
    v.push_back(Nation("가나", "아크라"));

    cout << "***** 나라의 수도 맞추기 게임을 시작합니다. *****\n";

    while (true) {
        int num;
        cout << "정보 입력: 1, 퀴즈: 2, 종료 3 >> ";
        cin >> num;
        switch (num) {
        case 1:
            cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다.\n";
            cout << "나라와 수도를 입력하세요(no no 이면 입력끝)\n";
            for (int i = v.size() + 1;; i++) {
                string n, c;
                bool b;
                cout << i << ">>";
                cin >> n >> c;
                if (n == "no" && c == "no")
                    break;
                for (int j = 0; j < v.size(); j++)
                    if (b = v.at(j).nationCompare(n)) {
                        cout << "already exists !!\n";
                        i--;
                        break;
                    }
                if (b)
                    continue;
                v.push_back(Nation(n, c)); // 정상적인 입력 값이면 vector v에 입력 
            }
            break;

        case 2:
            int random;
            while (true) {
                string c;
                random = rand() % v.size(); // v에 들어있는 원소의 개수보다 작은 숫자를 얻음
                cout << v.at(random).getNation() << "의 수도는?";
                cin >> c;
                if (c == "exit")
                    break;
                else if (v.at(random).getCapital() == c) // 입력받은 수도가 맞으면 Correct 출력 
                    cout << "Correct !!\n";
                else
                    cout << "No !!\n";
            }
            break;

        case 3:
            return 0;
        }
    }
}
*/





/* 실습문제 11번
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <string>
using namespace std;

class Book {
    int year;
    string name;
    string writer;
public:
    void set(int year = 0, string name = "no name", string writer = "no writer") {
        this->year = year;
        this->name = name;
        this->writer = writer;
    }
    int getYear() {
        return year;
    }
    string getName() {
        return name;
    }
    string getWriter() {
        return writer;
    }
    void show() {
        cout << year << "년도, " << name << ", " << writer << endl;
    }
};

int main() {
    
    vector<Book> book;
    Book b;

    int year;
    string name;
    string writer;
    cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
    
    while (true) {
        cout << "년도>>";
        cin >> year;
        if (year == -1)
            break;
        cin.ignore();
        cout << "책이름>>";
        getline(cin, name);

        cout << "저자>>";
        getline(cin, writer);

        b.set(year, name, writer);
        book.push_back(b);
    }

    cout << "총 입고된 책은 " << book.size() << "권 입니다.\n";
    cout << "검색하고자 하는 저자 이름을 입력하세요>>";
    cin.ignore();
    getline(cin, writer);
    for (int i = 0; i < book.size(); i++) {
        if (book[i].getWriter() == writer)
            book[i].show();
    }
    cout << "검색하고자 하는 년도를 입력하세요>>";
    cin >> year;
    for (int i = 0; i < book.size(); i++) {
        if (book[i].getYear() == year)
            book[i].show();
    }
}
*/




