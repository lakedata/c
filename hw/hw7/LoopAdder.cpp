#include <iostream>
#include <string>
using namespace std;
class LoopAdder { // 추상 클래스
protected:
	virtual void read() = 0; // x, y 값을 읽어 들이는 함수
	virtual void write() = 0; // sum을 출력하는 함수
	virtual int calculate() = 0; // 순수 가상 함수. 루프를 돌면서 합을 구하는 함수
public:
	virtual void run() = 0; // 연산을 진행하는 함수
};

class ForLoopAdder : public LoopAdder {
	string name; int x, y, sum;
	void read();
	void write();
	int getX() { return x; }
	int getY() { return y; }
	int calculate() {
		int sum = 0;
		for (int i = getX(); i <= getY(); i++)
			sum += i;
		return sum;
	}

public:
	ForLoopAdder(string name = "") { this->name = name; }
	void run();
};

void ForLoopAdder::read() {
	cout << name << ":" << endl;
	cout << "처음 수에서 두번째 수까지 더합니다.두 수를 입력하세요 >> ";
	cin >> x >> y;
}
void ForLoopAdder::write() {
	cout << x << "에서 " << y << "까지의 합 " << sum << " 입니다." << endl;
}
void ForLoopAdder::run() {
	read();
	sum = calculate();
	write();
}

int main() {
	LoopAdder* La = new ForLoopAdder("For Loop");//upcasting
	La->run();
}
