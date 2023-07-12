#include <iostream>
#include <string>
using namespace std;


class Histogram {
	int count[26] = { 0 };
	string str;

	int len = 0;

public:
	Histogram(string s);
	void makeHisto();//멤버변수str의 문자열을 알파벳순으로 갯수를 계산하는 함수
	void operator!();// 알파벳순으로 갯수를 출력하는 중복 연산자 함수
	Histogram& operator<<(string s);// 중복 연산자 함수. 리턴 타입 Histogram
	Histogram& operator<<(char c);// 중복 연산자 함수. 리턴 타입 Histogram
};
Histogram::Histogram(string s) { this->str = s; }
void Histogram::makeHisto() {
	len = 0;
	char c;

	for (int i = 0; i < str.size(); i++) {
		c = str[i];
		if (isalpha(c) != 0) { //알파벳여부 확인함수
			c = tolower(str[i]); // 문자 text[i]를 소문자로 변환하여 리턴.
			count[(int)c - 'a']++;
			len++;
		}
	}
}
void Histogram::operator!()
{
	makeHisto();
	
	cout << str << endl << endl;
	cout << "총 알파벳 수 " << len << endl;

	for (int i = 0; i < 26; i++) {
		cout << (char)('a' + i) << ":";
		for (int j = 0; j < count[i]; j++)
			cout << "*";
		cout << endl;
	}
}
Histogram& Histogram::operator<<(string s)
{
	this->str += s;
	return *this;
}
Histogram& Histogram::operator<<(char c)
{
	this->str += c;
	return *this;
}
int main() {
	Histogram song("Wise men say, \nonly fools rush in But I can't help, \n");
	song << "falling" << " in love with you." << "- by "; // 히스토그램에 문자열 추가
	song << 'k' << 'i' << 't'; // 히스토그램에 문자 추가
	!song; // 히스토그램 그리기
}