#include<iostream>
#include<vector>
using namespace std;
void printVector(const vector<int> &v) {
	int n = v.size();
	for (int i = 0; i < n; i++) {
		cout << v[i] << ' ';
	cout << endl;
}

double getAverage(const vector<int> &v) {
	int sum = 0;
	int n = v.size();
	for (int i = 0; i < n; i++) {
		sum += v[i];
	}
	return (double)sum / n;
}

int main() { bhbhvb
	vector<int> v;
	cout << "정수를 5개 입력하세요>>";
	for (int i = 0; i < 5; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	printVector(v);
	cout << "평균 = " << getAverage(v) << endl;//평균 계산 후 출력
}