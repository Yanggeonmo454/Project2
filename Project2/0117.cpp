//#include <iostream>
//using namespace std;
//
//int main() {
//    int grade[5];
//    int sum = 0;
//
//    for (int i = 0; i < 5; i++) {
//        cout << (i + 1) << "�� �л��� ������ �Է��ϼ���: ";
//        cin >> grade[i];
//    }
//
//    for (int j = 0; j < 5; j++) {
//        sum += grade[j];
//    }
//
//    double avg = static_cast<double>(sum) / 5;
//    cout << "���: " << avg << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <sstream> // ���ڿ� ��Ʈ�� ����� ���� ���
//using namespace std;
//
//int main() {
//    int exam[5][3];
//
//    cout << "�л��� ���� ������ �Է��ϼ��� (����: ���� ���� ����)." << endl;
//
//    cout << "�Է�" << endl;
//    for (int i = 0; i < 5; i++) {
//        cout << (i + 1) << "�� �л��� ����, ����, ���� ������ : ";
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
//    cout << "���" << endl;
//    for (int i = 0; i < 5; i++) {
//        cout << (i + 1) << "�� �л��� ����, ����, ���� ������: ";
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
//	cout << "����, ���� ���̸� �Է��ϼ���. " ;
//	cin >> r1.width;
//	cin >> r1.height;
//
//	float S = r1.width * r1.height;
//
//	cout << "���̴�" << S << endl;

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
//        cout << i + 1 << "��° �л��� ����, ����, ���� ������ (�Է�): ";
//        getline(cin, str);
//        //for �� �Ⱦ��� �Ѱ�
//        //cout << str << endl;
//        //int val = str.find(" ");
//        //cout << "ù��° find �� : " << val << endl;
//        //string tmp = str.substr(0, val);
//        //cout << "ù��° ���� : " << tmp << endl;
//        //int val2 = str.find(" ", val + 1);
//        //cout << "�ι�° find �� : " << val2 << endl;
//        //string tmp2 = str.substr(val+1, val2 - val);
//        //cout << "�ι�° ���� : " << tmp2 << endl;
//        //string tmp3 = str.substr(val2+1);
//        //cout << "����° ���� : " << tmp3 << endl;
//        for (int i_i = 0; i_i < subject; i_i++)
//        {
//            //for�� ����
//            val = str.find(" ", point);
//            string tmp = str.substr(point, val - point);
//            point = val + 1;
//            exam[i][i_i] = stoi(tmp);
//        }
//    }
//    cout << "----------------------------------------" << endl;
//    for (int j = 0; j < 5; j++)
//    {
//        cout << j + 1 << "��° �л��� ����, ����, ���� ������ (���): " << exam[j][0] << " " << exam[j][1] << " " << exam[j][2] << endl;
//    }
//    return 0;
//}