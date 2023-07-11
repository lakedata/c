#include <iostream>
#include <string>
using namespace std;
class Employee {
	string name;
	double salary;
	static int count;
public:
	Employee(string n = " ", double s = 0.0) :name(n), salary(s) {
		count++;
	}
	//��ü�� �Ҹ�� �� ȣ��ȴ�.
	~Employee() {
		count--;//������ �ϳ� �پ��� ���̹Ƿ� count �ϳ� ����
	}
	//���� ��� �Լ�
	static int getCount() {
		return count;
	}
};