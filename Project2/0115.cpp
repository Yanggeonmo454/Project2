//#include <iostream>
//
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    char op;
//
//    std::cout << "숫자를 입력하세요." << std::endl;
//    std::cin >> num1;
//
//    std::cout << "연산자를 입력하세요. (+, -, *, /)" << std::endl;
//    std::cin >> op;
//
//    std::cout << "숫자를 입력하세요." << std::endl;
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
//            std::cout << "0으로 나눌 수 없습니다." << std::endl;
//        }
//    }
//    else {
//        std::cout << "잘못된 입력입니다." << std::endl;
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
//	std::cout << "5단" << std::endl;
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
//	std::cout << "1~9단 출력" << std::endl;
//
//	for (int i = 1; i <= 9; i++) {
//		std::cout <<"-----" << i<<"단" << "-----"  << std::endl;
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
//    std::cout << "1부터 n까지의 합을 구하기" << std::endl;
//
//    int res = 0;
//    int input = 0;
//    std::cout << "숫자(양의 정수)를 입력하세요." << std::endl;
//    std::cin >> input;
//
//    for (int i = 1; i <= input; i++) {
//        res += i;
//    }
//
//    std::cout << "1부터 " << input << "까지의 합은 " << res << "입니다." << std::endl;
//
//    return 0;
//}


//#include <iostream>
//
//int main() {
//    int val = 5;
//    int i = 1;
//
//    std::cout << "5단" << std::endl;
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
//        std::cout << i << "단" << std::endl;
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
//    std::cout << "1부터 n까지의 합 구하기" << std::endl;
//    std::cout << "숫자를 입력하세요." << std::endl;
//    std::cin >> input;
//
//    while (i <= input) {
//        sum += i; 
//        i++; 
//    }
//
//    std::cout << "1부터 " << input << "까지의 합은 " << sum << "입니다." << std::endl;
//
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    int input = 0;
//    int sum = 0;
//
//    std::cout << "사용자가 입력한 숫자 더하기" << std::endl;
//    std::cout << "숫자를 입력하세요 (0 : exit) : ";
//    std::cin >> input;
//
//    while (input != 0) {
//        sum += input;  
//        std::cout << "숫자를 입력하세요 (0 : exit) : ";
//        std::cin >> input;  
//    }
//
//    std::cout << "합계: " << sum << std::endl;  
//
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    int n;
//
//    std::cout << "숫자를 입력하세요: ";
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
//    std::cout << "숫자를 입력하세요: ";
//    std::cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        // 공백 출력
//        for (int j = 1; j <= n - i; j++) {
//            std::cout << " ";
//        }
//
//        // 별 출력
//        for (int k = 1; k <= 2 * i - 1; k++) {
//            std::cout << "*";
//        }
//
//        // 줄 바꿈
//        std::cout << std::endl;
//    }
//
//    return 0;
//}
