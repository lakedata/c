#include <iostream>
#include <string>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double sre) = 0;//src를 다른 단위로 변환
	virtual string getSourceString() = 0;//소스 단위 명칭 원
	virtual string getDestString() = 0;//dest 단위 명칭달러
public:
	Converter(double ratio) { this->ratio = ratio; }
	virtual void run() = 0;
};

class WonToDollar: public Converter {
protected:
	double convert(double src) { return src / ratio; }
	string getSourceString() { return "원"; }
	string getDestString() { return "달러"; }
public:
	WonToDollar(double ratio): Converter(ratio) {}
	void run() {
		double src;
		cout << "원을 달러로 바꿉니다. 원을 입력하세요>>";
		cin >> src;
		cout << "변환 결과:" << convert(src) << getDestString << endl;
	}

};

int main() {
	Converter* wd = new WonToDollar(1170);//upCastring
	wd->run(); //overriding
}