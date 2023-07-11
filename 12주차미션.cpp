/* �ǽ����� 10��
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
    v.push_back(Nation("���ѹα�", "����"));
    v.push_back(Nation("�߱�", "����¡"));
    v.push_back(Nation("�Ϻ�", "����"));
    v.push_back(Nation("�̱�", "�ͽ���"));
    v.push_back(Nation("��������", "������"));
    v.push_back(Nation("����", "������"));
    v.push_back(Nation("����", "����"));
    v.push_back(Nation("������", "���׺񵥿�"));
    v.push_back(Nation("����", "��ũ��"));

    cout << "***** ������ ���� ���߱� ������ �����մϴ�. *****\n";

    while (true) {
        int num;
        cout << "���� �Է�: 1, ����: 2, ���� 3 >> ";
        cin >> num;
        switch (num) {
        case 1:
            cout << "���� " << v.size() << "���� ���� �ԷµǾ� �ֽ��ϴ�.\n";
            cout << "����� ������ �Է��ϼ���(no no �̸� �Է³�)\n";
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
                v.push_back(Nation(n, c)); // �������� �Է� ���̸� vector v�� �Է� 
            }
            break;

        case 2:
            int random;
            while (true) {
                string c;
                random = rand() % v.size(); // v�� ����ִ� ������ �������� ���� ���ڸ� ����
                cout << v.at(random).getNation() << "�� ������?";
                cin >> c;
                if (c == "exit")
                    break;
                else if (v.at(random).getCapital() == c) // �Է¹��� ������ ������ Correct ��� 
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





/* �ǽ����� 11��
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
        cout << year << "�⵵, " << name << ", " << writer << endl;
    }
};

int main() {
    
    vector<Book> book;
    Book b;

    int year;
    string name;
    string writer;
    cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << endl;
    
    while (true) {
        cout << "�⵵>>";
        cin >> year;
        if (year == -1)
            break;
        cin.ignore();
        cout << "å�̸�>>";
        getline(cin, name);

        cout << "����>>";
        getline(cin, writer);

        b.set(year, name, writer);
        book.push_back(b);
    }

    cout << "�� �԰�� å�� " << book.size() << "�� �Դϴ�.\n";
    cout << "�˻��ϰ��� �ϴ� ���� �̸��� �Է��ϼ���>>";
    cin.ignore();
    getline(cin, writer);
    for (int i = 0; i < book.size(); i++) {
        if (book[i].getWriter() == writer)
            book[i].show();
    }
    cout << "�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ���>>";
    cin >> year;
    for (int i = 0; i < book.size(); i++) {
        if (book[i].getYear() == year)
            book[i].show();
    }
}
*/




