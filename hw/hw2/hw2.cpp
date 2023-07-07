#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// 짝수만 랜덤하게 발생시키는 클래스
class EvenRandom {
public:
	EvenRandom(); // seed 설정
	int next(); // 랜덤 짝수 리턴
	int nextInRange(int low, int high); // low와 high 사이의 랜덤 짝수 리턴
};
//함수 구현
EvenRandom::EvenRandom() {
	srand((unsigned int)time(NULL));
}
int EvenRandom::next() {
	int num = 0;
	do {
		num = rand() % RAND_MAX;
	} while (num % 2 != 0);

	return num;
}
int EvenRandom::nextInRange(int low, int high) {
	int num = 0;
	do {
		num = rand() % (high - low + 1) + low;
	} while (num % 2 != 0);

	return num;
}
int main() {
	EvenRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 짝수 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 짝수 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10); // 2에서 10 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl;
}
