//#include <iostream>
//#include <string>

//int main() {
//
//	std::string str = " ";
//
//	//std::cin >> str;
//
//	getline(std::cin, str);
//
//	std::cout << "���ڿ�: " << str << std::endl;
//
//	return 0;
//}

//using namespace std;
//
//int main() {
//	string str1 = "";
//	string str2 = "codingon";
//	string str3 = ("codingon");
//	string str4(str2);
//
//	char str_arr[] = { 'h', 'e','l', 'l', 'o', NULL };
//
//	string str5(str_arr);
//
//	cout << "str 1:" << str1 << endl;
//	cout << "str 2:" << str2 << endl;
//	cout << "str 3:" << str3 << endl;
//	cout << "str 4:" << str4 << endl;
//	cout << "str 5:" << str5 << endl;
//	
//	return 0;
//
//}

//#include <iostream>
//#include <string>
//
//int main() {
//
//    std::string s = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";
//
//    std::cout << s.length() << std::endl;
//    std::cout << s[100] << std::endl;
//    std::cout << s.find("two") << std::endl;
//    std::cout << s.find("two", 12) << std::endl;
//    
//    return 0;
//}

//#include <iostream>
//#include <string>
//#include <cctype>
//
//using namespace std;
//
//int main() {
//	
//	int flag = 1;
//
//	while (flag) {
//
//		cout << "���ڿ� 1 �Է�" << endl;
//		string str = "";
//		string str2 = "";
//
//		cin >> str;
//		cout << "���ڿ� 2 �Է�" << endl;
//		cin >> str2;
//
//		int count = str.length();
//
//		int index = 0;
//		int index_2 = 0;
//
//		while (index < count) {
//
//			int val = isdigit(str[index]);
//			if (val == 0) {
//
//				cout << "NO" << endl;
//				break;
//			}
//
//			else {
//				index_2++;
//			}
//
//			index++;
//		}
//		if (index_2 == count)
//		{
//			cout << "ok" << endl;
//			flag = 0;
//		}
//
//
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//    string str = " ";
//    string str2 = " ";
//    bool flag = true;
//    bool flag2 = true;
//    while (flag || flag2)
//    {
//        cout << "���ڿ� 1 �Է� : ";
//        cin >> str;
//        cout << "���ڿ� 2 �Է� : ";
//        cin >> str2;
//        int count = str.length();
//        int index = 0;
//        int index_2 = 0;
//        while (index < count)
//        {
//            int val = isdigit(str[index]);
//            if (val == 0)
//            {
//                cout << "str1 is NO" << endl;
//                break;
//            }
//            else {
//                index_2++;
//            }
//            index++;
//        }
//        if (index_2 == count)
//        {
//            cout << "str1 is OK" << endl;
//            flag = false;
//        }
//        int count2 = str2.length();
//        int index2 = 0;
//        int index_22 = 0;
//        while (index2 < count2)
//        {
//            int val2 = isdigit(str2[index2]);
//            if (val2 == 0)
//            {
//                cout << "str2 is NO" << endl;
//                break;
//            }
//            else {
//                index_22++;
//            }
//            index2++;
//        }
//        if (index_22 == count2)
//        {
//            cout << "str2 is OK" << endl;
//            flag2 = false;
//        }
//    }
//
//    cout << str + str2 << endl;
//
//
//    return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//
//    string s = "Codingon";
//    
//    s[0] = tolower(s[0]);
//    cout << s << endl;
//
//    cout << s.substr(2, 4) << endl;
//
//    cout << s.replace(2, 4, "oooo") << endl;
//
//    cout << s.erase(2, 5) << endl;
//
//    return 0;
//}
//

//#include <iostream>
//
//int main() {
//
//	using namespace std;
//
//	int num[10] = { 1,2,3,4,5,6,7,8,9,10, };
//
//	cout << num[1] << endl;
//	cout << num[2] << endl;
//	cout << num[4] << endl;
//	cout << num[6] << endl;
//	
//	return 0;

//}

//#include <iostream>  // iostream ��� ���� ����
//
//using namespace std;
//
//int main() {  // main �Լ� ����
//    int num[10];  // int�� �迭 ���� (ũ�� 10)
//
//    // �� �Է� �ޱ�
//
//    for (int i = 0; i < 10; i++) {
//        cout << "10���� ������ �Է��ϼ���: ";
//        cin >> num[i];  // �迭�� �� �Է� �ޱ�
//    
//    }
//
//    // �������� ���
//    cout << "�Է��� ���� �������� ����մϴ�: ";
//    for (int i = 9; i >= 0; i--) {
//        cout << num[i] << " ";  // �������� ���
//    }
//    cout << endl;
//
//    return 0;  // ���α׷� ����
//}

