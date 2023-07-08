#include <iostream>
#include <string>
using namespace std;
class lnteger {
	int value;
public:
	lnteger(int n) { value = n; };
	lnteger(string s) { value = stoi(s); };
	void set(int n) { value = n; }
	int get() { return value; }
	bool isEven() { return value % 2 == 0 ? true : false; }

};

int main() {
	lnteger n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';
	lnteger m("300");
	cout << m.get() << ' ';//300 출력
	cout << m.isEven(); //true(정수로 1)출력
}