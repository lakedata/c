#include <iostream>
using namespace std;
int main(void) {
	pair<int, int> p1;
	p1 = make_pair(10, 20);//함수 생성자 이용
	pair<int, int> p2(30, 40);//생성자를 이용
	pair<pair<int, int>, pair<double, double>> pp2;//pair 내부에 pair 가능
	pp2 = make_pair(make_pair(100, 200), make_pair(10.2, 34.3));

	printf("p1 = (%d %d)\n", p1.first, p1.second);
	printf("p2 = (%d %d)\n", p2.first, p2.second);

	printf("pp2.first = (%d %d)\n", pp2.first.first, pp2.first.second);
	printf("pp2.second = (%lf %lf)\n", pp2.second.first, pp2.second.second);
}