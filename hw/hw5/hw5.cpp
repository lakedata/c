#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
class Random {
public:
	static void seed() {
		srand(time(NULL));
	};
	static int nextInt(int min, int max) {
		return (rand() % (max-min+1)) + min;
	};
	static char nextAlphabet() {
		int flag = rand() % 2;
		//소문자
		if (flag == 0) {
			return 'a' + rand() % 26;
		}
		// 대문자
		else {
			return 'A' + rand() % 26;
		}
	};
	static double nextDouble() {
		return rand() / (double)(RAND_MAX + 1);
	};
};
int main() {
	Random::seed();
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) cout << Random::nextInt(1, 100) << ' ';
	cout << endl;
	cout << "알파벳을 랜덤하게 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) cout << Random::nextAlphabet() << ' ';
	cout << endl;
	cout << "랜덤한 실수를 10개를 출력합니다" << endl;
	for (int i = 0; i < 5; i++) cout << Random::nextDouble() << ' ';
	cout << endl;
	for (int i = 0; i < 5; i++) cout << Random::nextDouble() << ' ';
	cout << endl;
}