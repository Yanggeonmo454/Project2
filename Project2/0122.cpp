
#include <iostream>
using namespace std;

//void addChar(char* ptr) {
//    (*ptr)++;
//}
//
//void addInt(int* ptr) {
//    (*ptr)++;
//}
//
//void addFloat(float* ptr) {
//    (*ptr) += 1.0f;
//}
//
//void subChar(char* ptr) {
//    (*ptr)--;
//}
//
//void subInt(int* ptr) {
//    (*ptr)--;
//}
//
//void subFloat(float* ptr) {
//    (*ptr) -= 1.0f;
//}
//
//int main() {
//    char c = 'A'; 
//    int i = 10;   
//    float f = 5.5; 
//
//    addChar(&c);
//    cout << "char ���� ��: " << c << endl;
//
//    addInt(&i);
//    cout << "int ���� ��: " << i << endl;
//
//    addFloat(&f);
//    cout << "float ���� ��: " << f << endl;
//
//    subChar(&c);
//    cout << "char ���� ��: " << c << endl;
//
//    subInt(&i);
//    cout << "int ���� ��: " << i << endl;
//
//    subFloat(&f);
//    cout << "float ���� ��: " << f << endl;
//
//
//    return 0;
//}

//int main() {
//
//	int* arr = new int[10];
//
//	arr[0] = 10;
//
//	cout << "�����迭 " << arr[10] << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//
//    cout << "�迭�� ũ�⸦ �Է��ϼ���: ";
//    cin >> n;
//
//    int* arr = new int[n];  
//
//    cout << n << "���� ���� �Է��ϼ���:" << endl;
//    for (int i = 0; i < n; i++) {
//        cout <<  i + 1 << "��° ��: ";
//        cin >> arr[i];
//    }
//
//    cout << "�Էµ� �迭�� ��:" ;
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    delete[] arr;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int x, y;
//
//    while (true) {
//        cout << "�ڿ��� x�� �Է��ϼ���: ";
//        cin >> x;
//        cout << "�ڿ��� y�� �Է��ϼ���: ";
//        cin >> y;
//
//        if (x <= 0 || y <= 0) {
//            cout << "�߸��� �Է��Դϴ�. x�� y�� �ڿ������� �մϴ�. �ٽ� �Է��ϼ���." << endl;
//        }
//        else {
//            break;  
//        }
//    }
//
//    int** arr = new int* [x];  
//    for (int i = 0; i < x; i++) {
//        arr[i] = new int[y];  
//    }
//
//    int value = 1;
//    for (int i = 0; i < x; i++) {
//        for (int j = 0; j < y; j++) {
//            arr[i][j] = value++;
//        }
//    }
//
//    cout << "�迭�� ����� ��:" << endl;
//    for (int i = 0; i < x; i++) {
//        for (int j = 0; j < y; j++) {
//            cout << arr[i][j] ;  
//        }
//        cout << endl;
//    }
//
//    for (int i = 0; i < x; i++) {
//        delete[] arr[i];  
//    }
//    delete[] arr;  
//
//    return 0;
//}

