/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Employee {
	string name;
	int emnum;
public:
	Employee() { this->name = "No_one", this->emnum = 0; }
	string getName() { return name; }
	int getEmNum() { return emnum; }
	void setName(string name) { this->name = name; }
	void setEmNum(int emnum) { this->emnum = emnum; }
	virtual int computeSalary() = 0;
};

class salariedEmployee : public Employee {
	int salary, basesal;
public:
	salariedEmployee(int salary = 5, int basesal = 1500000) { this->salary = salary, this->basesal = basesal; }
	int setSalary(int salary) {
		if (salary >= 5 && salary <= 20) {		
			this->salary = salary;
			return 1;
		}
		else
		return 0;
	}
	int setBaseSal(int basesal) {
		if (basesal >= 1500000 && basesal <= 4500000) {
			this->basesal = basesal;
		return 1;
	}
		else
		return 0;
	}
	int getSalary() { return salary; }
	int getBaseSal() { return basesal; }
	virtual int computeSalary() { return salary * 120000 + basesal; }
};

class parttimeEmployee : public Employee {
	int time, wage;
public:
	parttimeEmployee(int time = 0, int wage = 0) { this->time = time; this->wage = wage; }
	int setTime(int time) { 
		if (time >= 0 && time <= 24) {
			this->time = time;
			return 1;
		}
		else
			return 0;
	}
	int setWage(int wage) { 
		if (wage >= 9160) {
			this->wage = wage;
			return 1;
		}
		else
			return 0;
	}
	int getTime() { return time; }
	int getWage() { return wage; }
	virtual int computeSalary() { return time * wage; }
};

int main()
{
	int checkSalary, checkBaseSal;
	salariedEmployee t;
	t.setName("Tom");
	t.setEmNum(1);
	checkSalary = t.setSalary(12);
	checkBaseSal = t.setBaseSal(2000000);
	if (!checkSalary)
	{
		cout << " 오류 (호봉은 5~20 사이만 입력 가능합니다.)" << endl;
		exit(1);
	}
	if (!checkBaseSal)
	{
		cout << " 오류 (기본급의 범위는 1500000 ~ 4500000 입니다.)" << endl;
		exit(1);
	}

	cout << "사원 : " << t.getName() << "\n사번 : " << t.getEmNum() << ", 호봉 : " << t.getSalary() << ", 기본급 : " 
		<< t.getBaseSal() << ", 급여 : " << t.computeSalary() << endl;

	int checkTime, checkWage;
	parttimeEmployee j;
	j.setName("Jane");
	j.setEmNum(2);
	checkTime = j.setTime(6);
	checkWage = j.setWage(9160);
	if (!checkTime)
	{
		cout << " 오류 (시간은 0~ 24 사이만 입력 가능합니다.)" << endl;
		exit(1);
	}
	if (!checkWage)
	{
		cout <<" 오류 (시급의 범위는 9160원 이상입니다.)" << endl;
		exit(1);
	}

	cout << "사원 : " << j.getName() << "\n사번 : " << j.getEmNum() << ", 시급 : " << j.getWage() << ", 일한시간 : " 
		<< j.getTime() << "시간" << ", 급여 : " << j.computeSalary() << endl;
}
*/