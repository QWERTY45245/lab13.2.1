#include <iostream>
#include <cmath>
#include<Windows.h>
// �����-����������
#define MAX(�, �) ((�) > (�) ? (�) : (�))
#define MIN(�, �) ((�) < (�) ? (�) : (�))
#define ABS(�) ((�) >= 0 ? (�) : -(�))
#define POWER(base, exp) pow((base), (exp))

using namespace std;  

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double x, y, z;

    cout << "������ �������� x: ";
    cin >> x;

    cout << "������ �������� y: ";
    cin >> y;

    cout << "������ �������� z: ";
    cin >> z;

    // ������ ��������� � ��������� �� �������� z
#if defined(DEBUG) && (DEBUG == 1)
    cout << "��������� ����� ������������." << endl;
#else
    cout << "��������� ����� ������������." << endl;
#endif

    // ������� �����
    double w;
#if (z > 10)
    w = ����(���ϲ��(x, 3), ���ϲ��((x + y), 2));
#else
    w = MIN(ABS(x - z), ABS(x + z));
#endif

    // ��������� ����������
    cout << "�������� w: " << w << endl;

    return 0;
}
