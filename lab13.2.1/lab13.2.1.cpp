#include <iostream>
#include <cmath>
#include<Windows.h>
// Макро-визначення
#define MAX(а, б) ((а) > (б) ? (а) : (б))
#define MIN(а, б) ((а) < (б) ? (а) : (б))
#define ABS(х) ((х) >= 0 ? (х) : -(х))
#define POWER(base, exp) pow((base), (exp))

using namespace std;  

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double x, y, z;

    cout << "Введіть значення x: ";
    cin >> x;

    cout << "Введіть значення y: ";
    cin >> y;

    cout << "Введіть значення z: ";
    cin >> z;

    // Умовна компіляція в залежності від значення z
#if defined(DEBUG) && (DEBUG == 1)
    cout << "Включений режим налагодження." << endl;
#else
    cout << "Вимкнений режим налагодження." << endl;
#endif

    // Логічний вираз
    double w;
#if (z > 10)
    w = МАКС(СТЕПІНЬ(x, 3), СТЕПІНЬ((x + y), 2));
#else
    w = MIN(ABS(x - z), ABS(x + z));
#endif

    // Виведення результату
    cout << "Значення w: " << w << endl;

    return 0;
}
