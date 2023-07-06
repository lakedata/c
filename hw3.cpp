#include <iostream>
using namespace std;
class Sample {
	int* p; int capacity; int size;
public:
	Sample(int n) {
		capacity = n, p = new int[n];
	}
	void read();
	void write();
	int big();
	int getSize() { return size; }
	~Sample() { delete[] p; }
};
//구현할 멤버 함수
void Sample::read() {
	cout << "입력하려는 정수의 갯수는? ";
	cin >> size;

	cout << "5개의 정수를 입력하시오 ";
	for (int i = 0; i < size; i++)
		cin >> p[i];
}
void Sample::write() {
	for (int i = 0; i < size; i++)
		cout << p[i] << " ";
	cout << "\n" << endl;
}
int  Sample::big() {
	int max = -999;
	for (int i = 0; i < size; i++) {
		if (p[i] > max)
			max = p[i];
	}
	return max;
}

int main() {
	Sample s(10); // 10개 동적 정수 배열을 가진 Sample 객체 생성
	s.read(); // 키보드에서 정수 배열 읽기
	cout << "동적배열 정수 " << s.getSize() << "개를 출력합니다.";
	s.write(); // 정수 배열 출력
	cout << "가장 큰 수는 " << s.big() << endl; // 가장 큰 수 출력
}