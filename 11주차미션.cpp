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
		cout << " ���� (ȣ���� 5~20 ���̸� �Է� �����մϴ�.)" << endl;
		exit(1);
	}
	if (!checkBaseSal)
	{
		cout << " ���� (�⺻���� ������ 1500000 ~ 4500000 �Դϴ�.)" << endl;
		exit(1);
	}

	cout << "��� : " << t.getName() << "\n��� : " << t.getEmNum() << ", ȣ�� : " << t.getSalary() << ", �⺻�� : " 
		<< t.getBaseSal() << ", �޿� : " << t.computeSalary() << endl;

	int checkTime, checkWage;
	parttimeEmployee j;
	j.setName("Jane");
	j.setEmNum(2);
	checkTime = j.setTime(6);
	checkWage = j.setWage(9160);
	if (!checkTime)
	{
		cout << " ���� (�ð��� 0~ 24 ���̸� �Է� �����մϴ�.)" << endl;
		exit(1);
	}
	if (!checkWage)
	{
		cout <<" ���� (�ñ��� ������ 9160�� �̻��Դϴ�.)" << endl;
		exit(1);
	}

	cout << "��� : " << j.getName() << "\n��� : " << j.getEmNum() << ", �ñ� : " << j.getWage() << ", ���ѽð� : " 
		<< j.getTime() << "�ð�" << ", �޿� : " << j.computeSalary() << endl;
}
*/