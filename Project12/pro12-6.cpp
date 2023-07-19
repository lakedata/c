#include <iostream>
#include <string>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double sre) = 0;//src�� �ٸ� ������ ��ȯ
	virtual string getSourceString() = 0;//�ҽ� ���� ��Ī ��
	virtual string getDestString() = 0;//dest ���� ��Ī�޷�
public:
	Converter(double ratio) { this->ratio = ratio; }
	virtual void run() = 0;
};

class WonToDollar: public Converter {
protected:
	double convert(double src) { return src / ratio; }
	string getSourceString() { return "��"; }
	string getDestString() { return "�޷�"; }
public:
	WonToDollar(double ratio): Converter(ratio) {}
	void run() {
		double src;
		cout << "���� �޷��� �ٲߴϴ�. ���� �Է��ϼ���>>";
		cin >> src;
		cout << "��ȯ ���:" << convert(src) << getDestString << endl;
	}

};

int main() {
	Converter* wd = new WonToDollar(1170);//upCastring
	wd->run(); //overriding
}