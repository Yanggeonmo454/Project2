//#include <iostream>
//#include <string>
//using namespace std;
//
//class Bread {
//private:
//    string fill;
//    int price;
//    int ea;
//
//public:
//    Bread() {
//        cout << "�ؾ ����� ����" << endl;
//    }
//
//    void inputFill() {
//        cout << "� ���� �������? ";
//        cin >> fill;
//    }
//
//    void inputPrice() {
//        cout << "���� ������ �󸶷� �ұ��? ";
//        cin >> price;
//    }
//
//    void inputEa() {
//        cout << "�� ���� ������? ";
//        cin >> ea;
//    }
//
//    void printInfo() {
//        cout << "�ؾ ����" << endl;
//        cout << "�����: " << fill << endl;
//        cout << "���� ����: " << price << endl;
//        cout << "����: " << ea << endl;
//        cout << "�� ����: " << price * ea << endl;
//    }
//
//    ~Bread() {
//        cout << "�ؾ ����� ��" << endl;
//    }
//};
//
//int main() {
//    Bread B;
//    B.inputFill();
//    B.inputPrice();
//    B.inputEa();
//    B.printInfo();
//    return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Cat {
//private:
//    string name;
//    int age;
//
//public:
//    Cat(string _name, int _age) {
//        this->name = _name;
//        this->age = _age;
//    }
//
//    string getName() {
//        return name;
//    }
//
//    int getAge() {
//        return age;
//    }
//
//    void setName(string _name) {
//        this->name = _name;
//    }
//
//    void setAge(int _age) {
//        this->age = _age;
//    }
//};
//
//int main() {
//    Cat cat1("�߿���", 1);
//
//    string str_n = cat1.getName();
//    int cat_age = cat1.getAge();
//
//    cout << "����� �̸��� " << str_n << " �Դϴ�." << endl;
//    cout << "����� ���̴� " << cat_age << " �� �Դϴ�." << endl;
//
//    return 0;
//}



//#include <iostream>
//#include <sstream> 
//
//using namespace std;
//
//struct Rectangle {
//    float width;
//    float height;
//};
//
//int main() {
//    Rectangle r1;
//
//    cout << "����, ���� ���̸� �Է��ϼ���. ";
//    cin >> r1.width;
//    cin >> r1.height;
//
//    float S = r1.width * r1.height;
//
//    cout << "���̴� " << S << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <sstream> 
//
//using namespace std;
//
//class Car {
//private:
//	string name;
//	int door;
//	int wheel;
//	int horn;
//
//public:
//	void setData(string _n, int _d, int _w, int _h) {
//		
//		name = _n;
//		door = _d;
//		wheel = _w;
//		horn = _h;
//	}
//
//	void getName() {
//		cout << "�� ���� �̸��� " << name << "�Դϴ�." << endl;
//	}
//	void getDoor() {
//
//		cout << "�ڵ����� �����" << door << "�Դϴ�." << endl;
//	}
//	void getWheel() {
//
//		cout << "�ڵ����� ������" << wheel << "�Դϴ�." << endl;
//	}
//
//	void getHorn() {
//
//		cout << "�ڵ����� ������" << horn << "�Դϴ�." << endl;
//	}
//};
//
//class Genesis : public Car {
//
//};
//
//int main() {
//
//	Car c1;
//	c1.setData("�غ�", 4, 4, 10);
//	c1.getDoor();
//	c1.getHorn();
//	c1.getName();
//
//	Genesis gen1;
//	gen1.setData("����", 5,5,20);
//	gen1.getDoor();
//	gen1.getHorn();
//	gen1.getName();
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Animal {
//protected:
//    string name;
//    int age;
//
//public:
//
//    void inputInfo() {
//        cout << "������ �̸��� �Է��ϼ���: ";
//        cin >> name;
//        cout << "������ ���̸� �Է��ϼ���: ";
//        cin >> age;
//    }
//
//    void printInfo() {
//        cout << "�̸�: " << name << ", ����: " << age << "��" << endl;
//    }
//
//
//    void eat() {
//        cout << name << "��(��) ���̸� �Խ��ϴ�." << endl;
//    }
//
//    void move() {
//
//  }
//};
//
//class Cat : public Animal {
//public:
//
//    void move()  {
//        cout << name << "��(��) �ι߷� �̵��մϴ�." << endl;
//    }
//};
//
//class Bird : public Animal {
//public:
//    void move()  {
//        cout << name << "��(��) �� ������ �̵��մϴ�." << endl;
//    }
//};
//
//int main() {
//
//    Cat cat;
//    cout << "����� ����: " << endl;
//    cat.inputInfo();
//    cat.printInfo();
//    cat.eat();
//    cat.move();
//
//    cout << endl;
//
//    Bird bird;
//    cout << "�� ����: " << endl;
//    bird.inputInfo();
//    bird.printInfo();
//    bird.eat();
//    bird.move();
//
//    return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Character {
//private:
//    string name;
//    int level = 0;
//    int item_num = 0;
//
//public:
//    Character() {
//        cout << "ĳ���� �̸��� �Է��ϼ���: ";
//        cin >> name;
//        cout << name << " ĳ���Ͱ� �����Ǿ����ϴ�." << endl;
//    }
//
//    void changeName() {
//        cout << "������ ĳ���� �̸��� �Է��ϼ���: ";
//        cin >> name;
//        cout << "ĳ���� �̸��� " << name << "(��)�� ����Ǿ����ϴ�.\n";
//    }
//
//    void showInfo() {
//        cout << "\n[ĳ���� ����]\n";
//        cout << "�̸�: " << name << "\n";
//        cout << "����: " << level << "\n";
//        cout << "������ ��: " << item_num << "\n";
//    }
//
//    void levelUp() {
//        level++;
//        cout << name << "�� ������ " << level << "(��)�� �����߽��ϴ�!\n";
//    }
//
//    void addItem() {
//        item_num++;
//        cout << name << "��(��) �������� ������ϴ�! (���� ������ ��: " << item_num << ")\n";
//    }
//
//    void useItem() {
//        if (item_num > 0) {
//            item_num--;
//            cout << name << "��(��) �������� ����߽��ϴ�! (���� ������ ��: " << item_num << ")\n";
//        }
//        else {
//            cout << "�������� �����Ͽ� ����� �� �����ϴ�.\n";
//        }
//    }
//
//    void control() {
//        int choice;
//        do {
//            cout << "\n[�޴� ����]\n";
//            cout << "1. ĳ���� �̸� ����\n";
//            cout << "2. ���� �ø���\n";
//            cout << "3. ������ �߰��ϱ�\n";
//            cout << "4. ������ ����ϱ�\n";
//            cout << "5. ĳ���� ���� ����ϱ�\n";
//            cout << "0. ����\n";
//            cout << "����: ";
//            cin >> choice;
//
//            switch (choice) {
//            case 1:
//                changeName();
//                break;
//            case 2:
//                levelUp();
//                break;
//            case 3:
//                addItem();
//                break;
//            case 4:
//                useItem();
//                break;
//            case 5:
//                showInfo();
//                break;
//            case 0:
//                cout << "���α׷��� �����մϴ�.\n";
//                break;
//            default:
//                cout << "�߸��� �Է��Դϴ�. �ٽ� �������ּ���.\n";
//            }
//        } while (choice != 0);
//    }
//};
//
//int main() {
//    Character character;
//    character.control();
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//namespace test1 {
//	void print() {
//		cout << "���ӽ����̽� �׽�Ʈ1 �Դϴ�." << endl;
//	}
//}
//
//using namespace test1;
//int main() {
//
//
//	print();
//	return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//namespace seoul {
//	int num = 02;
//	string landmark;
//}
//
//namespace busan {
//	int num = 0;
//	string landmark;
//}
//
//using namespace busan;
//
//int main() {
//
//	seoul::num = 1;
//	seoul::landmark = "����";
//
//	num = 2;
//	landmark = "�ؿ��";
//
//	cout << "���� ������ȣ: " << seoul::num << ", ���帶ũ: " << seoul::landmark << endl;
//	cout << "�λ� ������ȣ: " << num << ", ���帶ũ: " << landmark << endl;
//	
//	return 0;
//}