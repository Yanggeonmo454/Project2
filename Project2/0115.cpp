//#include <iostream>
//
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    char op;
//
//    std::cout << "���ڸ� �Է��ϼ���." << std::endl;
//    std::cin >> num1;
//
//    std::cout << "�����ڸ� �Է��ϼ���. (+, -, *, /)" << std::endl;
//    std::cin >> op;
//
//    std::cout << "���ڸ� �Է��ϼ���." << std::endl;
//    std::cin >> num2;
//
//    if (op == '+') {
//        std::cout << num1 << op << num2 << "=" << (num1 + num2) << std::endl;
//    }
//    else if (op == '-') {
//        std::cout << num1 << op << num2 << "=" << (num1 - num2) << std::endl;
//    }
//    else if (op == '*') {
//        std::cout << num1 << op << num2 << "=" << (num1 * num2) << std::endl;
//    }
//    else if (op == '/') {
//        if (num2 != 0) {
//            std::cout << num1 << op << num2 << "=" << (num1 / num2) << std::endl;
//        }
//        else {
//            std::cout << "0���� ���� �� �����ϴ�." << std::endl;
//        }
//    }
//    else {
//        std::cout << "�߸��� �Է��Դϴ�." << std::endl;
//    }
//
//    return 0;
//}



//#include <iostream>
//
//int main() {
//    int val = 0; 
//    int until = 10; 
//
//    for (int i = 0; i <= until; i=i+2) {
//
//        std::cout << "i = " << i << std::endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//
//int main() {
//	int val = 5;
//
//	std::cout << "5��" << std::endl;
//
//	for (int i = 1; i <= 9; i++) {
//
//		std::cout << val << "x" << i << "=" << val * i << std::endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//
//int main() {
//	
//	std::cout << "1~9�� ���" << std::endl;
//
//	for (int i = 1; i <= 9; i++) {
//		std::cout <<"-----" << i<<"��" << "-----"  << std::endl;
//		for (int j = 1; j <= 9; j++) {
//			std::cout << i << "x" << j << "=" << i * j << std::endl;
//		}
//	}
//	return 0;
//}

//#include <iostream>
//
//int main() {
//
//    std::cout << "1���� n������ ���� ���ϱ�" << std::endl;
//
//    int res = 0;
//    int input = 0;
//    std::cout << "����(���� ����)�� �Է��ϼ���." << std::endl;
//    std::cin >> input;
//
//    for (int i = 1; i <= input; i++) {
//        res += i;
//    }
//
//    std::cout << "1���� " << input << "������ ���� " << res << "�Դϴ�." << std::endl;
//
//    return 0;
//}


//#include <iostream>
//
//int main() {
//    int val = 5;
//    int i = 1;
//
//    std::cout << "5��" << std::endl;
//    while (i <= 9) {
//        std::cout << val << "x" << i << "=" << val * i << std::endl;
//        i++; 
//    }
//
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    int i = 2;
//    int j = 1;
//
//    while (i <= 9) {
//        std::cout << i << "��" << std::endl;
//
//        while (j <= 9) {
//            std::cout << i << "x" << j << "=" << i * j << std::endl; 
//            j++; 
//        }
//
//        j = 1; 
//        i++; 
//    }
//
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    int input = 0;
//    int i = 1;  
//    int sum = 0; 
//
//    std::cout << "1���� n������ �� ���ϱ�" << std::endl;
//    std::cout << "���ڸ� �Է��ϼ���." << std::endl;
//    std::cin >> input;
//
//    while (i <= input) {
//        sum += i; 
//        i++; 
//    }
//
//    std::cout << "1���� " << input << "������ ���� " << sum << "�Դϴ�." << std::endl;
//
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    int input = 0;
//    int sum = 0;
//
//    std::cout << "����ڰ� �Է��� ���� ���ϱ�" << std::endl;
//    std::cout << "���ڸ� �Է��ϼ��� (0 : exit) : ";
//    std::cin >> input;
//
//    while (input != 0) {
//        sum += input;  
//        std::cout << "���ڸ� �Է��ϼ��� (0 : exit) : ";
//        std::cin >> input;  
//    }
//
//    std::cout << "�հ�: " << sum << std::endl;  
//
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    int n;
//
//    std::cout << "���ڸ� �Է��ϼ���: ";
//    std::cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= i; j++) {
//            std::cout << "*";  
//        }
//        std::cout << std::endl;  
//    }
//
//    return 0;
//}
//
//#include <iostream>
//
//int main() {
//    int n;
//
//    std::cout << "���ڸ� �Է��ϼ���: ";
//    std::cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        // ���� ���
//        for (int j = 1; j <= n - i; j++) {
//            std::cout << " ";
//        }
//
//        // �� ���
//        for (int k = 1; k <= 2 * i - 1; k++) {
//            std::cout << "*";
//        }
//
//        // �� �ٲ�
//        std::cout << std::endl;
//    }
//
//    return 0;
//}
