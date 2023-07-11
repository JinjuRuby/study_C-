/* 실습문제 5번
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
    cout << "큐에 삽입할 5개의 정수를 입력하라>> ";

    for (int i = 0; i < 5; i++) {
        cin >> n;
        mQ.enqueue(n); // 큐에 삽입
    }

    cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
    cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";

    while (mQ.length() != 0) {
        cout << mQ.dequeue() << ' '; // 큐에서 제거하여 출력
    }

    cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
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
    cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
    for (int i = 0; i < 5; i++) {
        cin >> n;
        mStack.push(n); // 스택에 푸시 
    }
    cout << "스택 용량:" << mStack.capacity() << ", 스택 크기:" << mStack.length() << endl;
    cout << "스택의 모든 원소를 팝하여 출력한다>> ";
    while (mStack.length() != 0) {
        cout << mStack.pop() << ' '; // 스택에서 팝 
    }
    cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;
}
*/