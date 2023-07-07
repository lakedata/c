#include <iostream>
using namespace std;

int main()
{
    char alpha[1000];
    int cnt[26] = { 0 };
    int totalcnt = 0;
    int length;

    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ;입니다.1000개까지 가능합니다." << endl;
    cin.getline(alpha, 1000, ';');
    length = strlen(alpha);

    for (int i = 0; i < length; i++) {
        if (isalpha(alpha[i]) == 1)
            alpha[i] = tolower(alpha[i]);
    }

    for (int i = 0; i < length; i++) {
        if (isalpha(alpha[i]) == 2) {
            totalcnt++;
            for (int j = 0; j < 26; j++) {
                if (alpha[i] == char('a' + j))
                    cnt[j]++;
            }
        }
    }

    cout << "총 알파벳 수 " << totalcnt << "\n" << endl;
    for (int i = 0; i < 26; i++) {
        cout << char('a' + i) << "(" << cnt[i] << ")" << "\t:  ";

        for (int j = 0; j < cnt[i]; j++)
            cout << "*";
        cout << endl;
    }
}
