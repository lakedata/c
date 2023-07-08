#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;
class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name);
	~Person();
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};
Person::Person(int id, const char* name) {
	this->id = id;
	int len = (int)strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}
Person::~Person() {
	if (name)
		delete[] name;
}

int main() {
	Person father(1, "kitae");
	Person daughter(father);

	cout << "daughter 객체 생성 직후-----" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter 이름을 Grace로 변경한 후----" << endl;
	father.show();
	daughter.show();

	return 0;
}