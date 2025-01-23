
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
//    cout << "char 증가 후: " << c << endl;
//
//    addInt(&i);
//    cout << "int 증가 후: " << i << endl;
//
//    addFloat(&f);
//    cout << "float 증가 후: " << f << endl;
//
//    subChar(&c);
//    cout << "char 감소 후: " << c << endl;
//
//    subInt(&i);
//    cout << "int 감소 후: " << i << endl;
//
//    subFloat(&f);
//    cout << "float 감소 후: " << f << endl;
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
//	cout << "동적배열 " << arr[10] << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//
//    cout << "배열의 크기를 입력하세요: ";
//    cin >> n;
//
//    int* arr = new int[n];  
//
//    cout << n << "개의 값을 입력하세요:" << endl;
//    for (int i = 0; i < n; i++) {
//        cout <<  i + 1 << "번째 값: ";
//        cin >> arr[i];
//    }
//
//    cout << "입력된 배열의 값:" ;
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
//        cout << "자연수 x를 입력하세요: ";
//        cin >> x;
//        cout << "자연수 y를 입력하세요: ";
//        cin >> y;
//
//        if (x <= 0 || y <= 0) {
//            cout << "잘못된 입력입니다. x와 y는 자연수여야 합니다. 다시 입력하세요." << endl;
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
//    cout << "배열에 저장된 값:" << endl;
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

