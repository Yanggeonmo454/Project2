#include <iostream>

int main()
{
    int num1 = 0;
    int num2 = 0;
    char op;

    std::cout << "���ڸ� �Է��ϼ���." << std::endl;
    std::cin >> num1;

    std::cout << "�����ڸ� �Է��ϼ���. (+, -, *, /)" << std::endl;
    std::cin >> op;

    std::cout << "���ڸ� �Է��ϼ���." << std::endl;
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
            std::cout << "0���� ���� �� �����ϴ�." << std::endl;
        }
    }
    else {
        std::cout << "�߸��� �Է��Դϴ�." << std::endl;
    }

    return 0;
}