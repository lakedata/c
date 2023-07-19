#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	pair<int, int> p1;
	const int size = 3;
	vector<pair<int, string>> vPair;
	int iArray[] = { 10, 20, 30 };
	string strArray[] = { "Seoul", "Busan", "Junju" };

	for (int i = 0; i < size; i++) {
		cout << "vPair[" << i << "] = " << "( "
			<< vPair[i].first << " " << vPair[i].second << ") " << endl;
	}
}