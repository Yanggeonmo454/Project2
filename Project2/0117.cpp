//#include <iostream>
//using namespace std;
//
//int main() {
//    int grade[5];
//    int sum = 0;
//
//    for (int i = 0; i < 5; i++) {
//        cout << (i + 1) << "번 학생의 성적을 입력하세요: ";
//        cin >> grade[i];
//    }
//
//    for (int j = 0; j < 5; j++) {
//        sum += grade[j];
//    }
//
//    double avg = static_cast<double>(sum) / 5;
//    cout << "평균: " << avg << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <sstream> // 문자열 스트림 사용을 위한 헤더
//using namespace std;
//
//int main() {
//    int exam[5][3];
//
//    cout << "학생별 과목 성적을 입력하세요 (형식: 영어 수학 과학)." << endl;
//
//    cout << "입력" << endl;
//    for (int i = 0; i < 5; i++) {
//        cout << (i + 1) << "번 학생의 영어, 수학, 과학 성적은 : ";
//        string line; 
//        getline(cin, line); 
//        istringstream iss(line);
//
//        for (int j = 0; j < 3; j++) {
//            iss >> exam[i][j]; 
//        }
//    }
//
//
//    cout << "출력" << endl;
//    for (int i = 0; i < 5; i++) {
//        cout << (i + 1) << "번 학생의 영어, 수학, 과학 성적은: ";
//        for (int j = 0; j < 3; j++) {
//            cout << exam[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}



//using namespace std;
//
//struct Car {
//	string name;
//	int age;
//	int door;
//	float engine_temp;
//};
//
//int main() {
//
//	Car c1;
//	c1.name = "Kim";
//	c1.age = 2000;
//	c1.door = 10;
//	c1.engine_temp = 99.9;
//
//	cout << c1.name << endl;
//	cout << c1.age << endl;
//	cout << c1.door << endl;
//	cout << c1.engine_temp << endl;
//
//	return 0;
//}


//#include <iostream>
//#include <sstream> 
//
//using namespace std;
//
//struct Rectangle {
//	float width;
//	float height;
//
//};
//
//int main() {
//
//	Rectangle r1;
//	
//	cout << "가로, 세로 길이를 입력하세요. " ;
//	cin >> r1.width;
//	cin >> r1.height;
//
//	float S = r1.width * r1.height;
//
//	cout << "넓이는" << S << endl;

//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//    const int student = 5;
//    const int subject = 3;
//    int exam[student][subject] = {};
//    string str = " ";
//    int point = 0;
//    int val = 0;
//    for (int i = 0; i < student; i++)
//    {
//        cout << i + 1 << "번째 학생의 영어, 수학, 과학 성적은 (입력): ";
//        getline(cin, str);
//        //for 문 안쓰고 한거
//        //cout << str << endl;
//        //int val = str.find(" ");
//        //cout << "첫번째 find 값 : " << val << endl;
//        //string tmp = str.substr(0, val);
//        //cout << "첫번째 숫자 : " << tmp << endl;
//        //int val2 = str.find(" ", val + 1);
//        //cout << "두번째 find 값 : " << val2 << endl;
//        //string tmp2 = str.substr(val+1, val2 - val);
//        //cout << "두번째 숫자 : " << tmp2 << endl;
//        //string tmp3 = str.substr(val2+1);
//        //cout << "세번째 숫자 : " << tmp3 << endl;
//        for (int i_i = 0; i_i < subject; i_i++)
//        {
//            //for문 쓴거
//            val = str.find(" ", point);
//            string tmp = str.substr(point, val - point);
//            point = val + 1;
//            exam[i][i_i] = stoi(tmp);
//        }
//    }
//    cout << "----------------------------------------" << endl;
//    for (int j = 0; j < 5; j++)
//    {
//        cout << j + 1 << "번째 학생의 영어, 수학, 과학 성적은 (출력): " << exam[j][0] << " " << exam[j][1] << " " << exam[j][2] << endl;
//    }
//    return 0;
//}