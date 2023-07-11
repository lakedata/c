#include <iostream>
using namespace std;
class StaticTest {
	static int count;
	string name;
public: 
	StaticTest(string name) {
		count++;
		this->name = name;
		cout << "객체생성 : " << count << " " << "이름 :" << name << endl;
	}
};
int StaticTest::count = 0;

int main() {
	StaticTest str1("method 01");
	StaticTest str2("method 02");
	StaticTest str3("method 03");
}