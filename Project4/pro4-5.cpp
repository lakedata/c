#include <iostream>
using namespace std;

class Color {
    int red, green, blue;
public:
    Color() { red = green = blue = 0; }
    Color(int r, int g, int b) { red = r, green = g, blue = b; }
    void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
    void show() { cout << red << ' ' << green << ' ' << blue << endl; }
};

int main()
{
    Color screenColor(255, 0, 0);
    Color* p;
    p = &screenColor;
    p->show(); //(*p).show�� ����
    Color colors[3];
    p = colors;

    //(5)p�� setColor()�� �̿��Ͽ� colors[0], colors[1], colors[2]�� ���� ����, �ʷ� , �Ķ����� �������� �ڵ� �ۼ�
    p[0].setColor(255, 0, 0);
    p[1].setColor(0, 255, 0);
    p[2].setColor(0, 0, 255);
    
    //(6)p�� show()�� �̿��Ͽ� colors �迭 ��� ��ü�� �� ���, for�� �̿�
    for (int i = 0; i < 3; i++) {
        p[i].show(); //(p+i)->show, (*(p+i)).show()�� ǥ������
    }
}