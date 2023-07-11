/* �ǽ����� 5��
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class BaseArray {
    int num;
    int* array;
protected:
    BaseArray(int num = 100) {
        this->num = num; array = new int[num];
    }
    ~BaseArray() { delete[] array; }
    void put(int index, int val) { array[index] = val; }
    int get(int index) { return array[index]; }
    int getNum() { return num; }
};

class MyQueue : public BaseArray {
    int front = 0;
    int back = 0;
public:
    MyQueue(int num) : BaseArray(num) { ; }
    void enqueue(int n) {
        back++;
        put(back, n);
    }
    int capacity() {
        return getNum();
    }
    int length() {
        return back;
    }
    int dequeue() {
        front++;
        back--;
        return get(front);
    }
};

int main() {
    MyQueue mQ(100);
    int n;
    cout << "ť�� ������ 5���� ������ �Է��϶�>> ";

    for (int i = 0; i < 5; i++) {
        cin >> n;
        mQ.enqueue(n); // ť�� ����
    }

    cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
    cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";

    while (mQ.length() != 0) {
        cout << mQ.dequeue() << ' '; // ť���� �����Ͽ� ���
    }

    cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
}
*/





/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class BaseArray {
    int num;
    int* array;
protected:
    BaseArray(int num = 100) {
        this->num = num; array = new int[num];
    }
    ~BaseArray() { delete[] array; }
    void put(int index, int val) { array[index] = val; }
    int get(int index) { return array[index]; }
    int getNum() { return num; }
};

class MyStack : public BaseArray {
    int top = 0;
public:
    MyStack(int num) : BaseArray(num) { ; }
    void push(int val) {
        put(top, val);
        top++;
    }
    int capacity() { return getNum(); }
    int length() { return top; }
    int pop() {
        top--;
        return get(top);
    }
};

int main() {
    MyStack mStack(100);
    int n;
    cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";
    for (int i = 0; i < 5; i++) {
        cin >> n;
        mStack.push(n); // ���ÿ� Ǫ�� 
    }
    cout << "���� �뷮:" << mStack.capacity() << ", ���� ũ��:" << mStack.length() << endl;
    cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";
    while (mStack.length() != 0) {
        cout << mStack.pop() << ' '; // ���ÿ��� �� 
    }
    cout << endl << "������ ���� ũ�� : " << mStack.length() << endl;
}
*/