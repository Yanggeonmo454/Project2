#include <iostream>

int main()
{
    int num1 = 0;
    int num2 = 0;
    char op;

    std::cout << "숫자를 입력하세요." << std::endl;
    std::cin >> num1;

    std::cout << "연산자를 입력하세요. (+, -, *, /)" << std::endl;
    std::cin >> op;

    std::cout << "숫자를 입력하세요." << std::endl;
    std::cin >> num2;

    if (op == '+') {
        std::cout << num1 << op << num2 << "=" << (num1 + num2) << std::endl;
    }
    else if (op == '-') {
        std::cout << num1 << op << num2 << "=" << (num1 - num2) << std::endl;
    }
    else if (op == '*') {
        std::cout << num1 << op << num2 << "=" << (num1 * num2) << std::endl;
    }
    else if (op == '/') {
        if (num2 != 0) {
            std::cout << num1 << op << num2 << "=" << (num1 / num2) << std::endl;
        }
        else {
            std::cout << "0으로 나눌 수 없습니다." << std::endl;
        }
    }
    else {
        std::cout << "잘못된 입력입니다." << std::endl;
    }

    return 0;
}