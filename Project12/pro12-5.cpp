#include <iostream>
using namespace std;

class Calculator {
protected:
	virtual int input() = 0;
	virtual int calc(int a, int b) = 0;
public:
	virtual void run() = 0;

};

class Adder : public Calculator {
protected:
	int calc(int a, int b) {
		return a + b;
	}
};


class Subtracotor : public Calculator {
protected:
	int calc(int a, int b) {//순수 가상 함수 구현
		return a - b;
	}
};


int main() {
	calculator adder = new Adder();
	calculator subtractor = new subtractor();
	adder->run();
	subtractor->run();
}