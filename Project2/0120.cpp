//#include <iostream>
//
//using namespace std;
//
//int sensor_cal(int sensor_val, int offset) {
//
//	int result = 0;
//
//	result = sensor_val - offset;
//
//	return result;
//}
//
//void motor_speed(int motor_num, int speed) {
//
//	cout << motor_num << " �� ���͸� " << speed << "�ӵ��� �۵�" << endl;
//	
//	return;
//}
//
//void main() {
//
//	sensor_cal(50,5);
//	motor_speed(5, 200);
//
//	return;
//}

//#include <iostream>
//
//using namespace std;
//
//int evenodd(int num) {
//
//	if (num % 2 == 0) {
//
//		cout << "¦��" << endl;
//	}
//
//	else if(num % 2 != 0) {
//
//		cout << "Ȧ��" << endl;
//
//	}
//
//	return 0;
//}
//
//int main() {
//
//	evenodd(3);
//
//	return 0;
//}

//int max(int num1, int num2, int num3) {
//    
//    if (num1 > num2 && num1 > num3) {
//        cout << num1 << endl;
//    }
//    
//    else if (num2 > num1 && num2 > num3) {
//        cout << num2 << endl;
//    }
//    
//    else {
//        cout << num3 << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int evenodd(int num) {
//    if (num % 2 == 0) {
//        cout << "¦��" << endl;
//    }
//    else if (num % 2 != 0) {
//        cout << "Ȧ��" << endl;
//    }
//    return 0;
//}
//
//int max(int num1, int num2, int num3) {
//    if (num1 > num2 && num1 > num3) {
//        cout << num1 << endl;
//    }
//    else if (num2 > num1 && num2 > num3) {
//        cout << num2 << endl;
//    }
//    else {
//        cout << num3 << endl;
//    }
//    return 0;
//}
//
//int main() {
//    evenodd(3);
//    max(2, 5, 99);
//    
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int add(int num1, int num2) {
//    return num1 + num2;  
//}
//
//int sub(int num1, int num2) {
//    if (num1 > num2) {
//        return num1 - num2;  
//    }
//    else {
//        return num2 - num1; 
//    }
//}
//
//int mul(int num1, int num2) {
//    return num1 * num2;  
//}
//
//int divide(int num1, int num2) {
//    if (num2 != 0) {
//        return static_cast<double>(num1) / num2;  
//    }
//    else {
//        cout << "0���� ���� �� �����ϴ�." << endl;
//        return 0;  
//    }
//}
//
//int main() {
//    cout << add(2, 5) << endl;
//    cout << sub(2, 5) << endl;
//    cout << mul(2, 5) << endl;
//    cout << divide(2, 5) << endl;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Calclass {
//
//private:
//	int val;
//public:
//	void set_val(int num) {
//		val = num;
//	}
//	void inc_val(int num) {
//		val = val + num;
//	}
//	void dec_val(int num) {
//		val = val - num;
//	}
//
//	void print_val() {
//		cout << "���� ��� ��" << val << endl;
//	}
//
//
//};
//
//void main() {
//
//	Calclass cc1, cc2;
//
//	cc1.set_val(3);
//	cc1.inc_val(310);
//	cc1.dec_val(3);
//	cc1.print_val();
//
//	return;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Calculator {
//
//public:
//    // ����ڷκ��� ���ڿ� ������ �Է¹ޱ�
//    void input() {
//        cout << "���� 1, ������, ���� 2�� �Է��ϼ��� : ";
//        cin >> num1 >> op >> num2;
//    }
//
//    // ��� �����ϱ�
//    void calculate() {
//        if (op == '+') {
//            result = num1 + num2;
//        }
//        else if (op == '-') {
//            result = num1 - num2;
//        }
//        else if (op == '*') {
//            result = num1 * num2;
//        }
//        else if (op == '/') {
//            if (num2 != 0) {
//                result = static_cast<double>(num1) / num2;
//            }
//            else {
//                cout << "0���� ���� �� �����ϴ�." << endl;
//                result = 0;
//            }
//        }
//        else;
//    }
//
//    void output() {
//        cout << num1 << " " << op << " " << num2 << " = " << result << endl;
//    }
//
//private:
//    int num1, num2;  
//    char op;        
//    double result;   
//};
//
//int main() {
//    Calculator calc;
//
//    calc.input();    
//    calc.calculate(); 
//    calc.output();    
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class test {
//private:
//    int* arr; 
//    int size; 
//
//public:
//  
//    test() {
//        size = 10;              
//        arr = new int[size];    
//        for (int i = 0; i < size; i++) {
//            arr[i] = i + 1;    
//        }
//
//        std::cout << "������! " << endl;
//        for (int i = 0; i < size; i++) {
//            std::cout << arr[i] << " ";
//        }
//        std::cout << std::endl;
//    }
//
//    ~test() {
//        std::cout << "�Ҹ���!" << endl;
//        for (int i = size - 1; i >= 0; i--) {
//            std::cout << arr[i] << " ";
//        }
//        std::cout << std::endl;
//
//        delete[] arr;
//    }
//};
//
//int main() {
//    test t1; 
//    return 0;             
//}


//#include <iostream>
//using namespace std;
//
//class Test {
//private:
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
//
//public:
//    Test() {
//        cout << "������ ";
//        for (int i = 0; i < 10; i++) {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//
//    ~Test() {
//        cout << "�Ҹ��� ";
//        for (int i = 9; i >= 0; i--) {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    Test t1; 
//    return 0; 
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class FishBreadMaker {
//private:
//    string filling;    // �����
//    int pricePerPiece; // ���� ����
//    int quantity;      // ���� ����
//
//public:
//    // ����� �Է�
//    void setFilling() {
//        cout << "����Ḧ �Է��ϼ���: ";
//        cin >> filling;
//    }
//
//    // ���� ���� �Է�
//    void setPricePerPiece() {
//        cout << "���� ������ �Է��ϼ���: ";
//        cin >> pricePerPiece;
//    }
//
//    // ���� ���� �Է�
//    void setQuantity() {
//        cout << "���� ������ �Է��ϼ���: ";
//        cin >> quantity;
//    }
//
//    // ���� ���
//    void printTotalPrice() {
//        int totalPrice = pricePerPiece * quantity;
//        cout << "�����: " << filling << endl;
//        cout << "���� ����: " << pricePerPiece << "��" << endl;
//        cout << "���� ����: " << quantity << "��" << endl;
//        cout << "�� ����: " << totalPrice << "��" << endl;
//    }
//};
//
//int main() {
//    FishBreadMaker maker; // �ؾ Ʋ ��ü ����
//
//    maker.setFilling();        // ����� �Է�
//    maker.setPricePerPiece();  // ���� ���� �Է�
//    maker.setQuantity();       // ���� ���� �Է�
//    maker.printTotalPrice();   // �� ���� ���
//
//    return 0;
//}
//
