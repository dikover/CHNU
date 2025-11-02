#include <iostream>
using namespace std;

int main() {
    int K;
    cout << "Введіть оцінку (1–5): ";
    cin >> K;

    cout << "--------------------------\n";

    switch (K) {
        case 1:
            cout << "погано";
            break;
        case 2:
            cout << "незадовільно";
            break;
        case 3:
            cout << "задовільно";
            break;
        case 4:
            cout << "добре";
            break;
        case 5:
            cout << "відмінно";
            break;
        default:
            cout << "помилка";
            break;
    }

    cout << endl;
    return 0;
}
