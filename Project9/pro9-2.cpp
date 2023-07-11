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
	//객체가 소멸될 떄 호출된다.
	~Employee() {
		count--;//직원이 하나 줄어드는 것이므로 count 하나 감소
	}
	//정적 멤버 함수
	static int getCount() {
		return count;
	}
};