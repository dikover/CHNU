#include <iostream>

int main() {
    int K;
    std::cout << "Введіть оцінку (1-5): ";
    if (!(std::cin >> K)) {
        std::cerr << "Помилка вводу\n";
        return 1;
    }

    std::cout << "--------------------------\n";

    switch (K) {
        case 1:
            std::cout << "Погано\n";
            break;
        case 2:
            std::cout << "Незадовільно\n";
            break;
        case 3:
            std::cout << "Задовільно\n";
            break;
        case 4:
            std::cout << "Добре\n";
            break;
        case 5:
            std::cout << "Відмінно\n";
            break;
        default:
            std::cout << "Невірне значення (має бути 1-5)\n";
            break;
    }

    return 0;
}
