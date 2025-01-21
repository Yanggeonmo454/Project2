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
//        cout << "붕어빵 만들기 시작" << endl;
//    }
//
//    void inputFill() {
//        cout << "어떤 속을 넣을까요? ";
//        cin >> fill;
//    }
//
//    void inputPrice() {
//        cout << "개당 가격은 얼마로 할까요? ";
//        cin >> price;
//    }
//
//    void inputEa() {
//        cout << "몇 개를 만들까요? ";
//        cin >> ea;
//    }
//
//    void printInfo() {
//        cout << "붕어빵 정보" << endl;
//        cout << "속재료: " << fill << endl;
//        cout << "개당 가격: " << price << endl;
//        cout << "개수: " << ea << endl;
//        cout << "총 가격: " << price * ea << endl;
//    }
//
//    ~Bread() {
//        cout << "붕어빵 만들기 끝" << endl;
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
//    Cat cat1("야옹이", 1);
//
//    string str_n = cat1.getName();
//    int cat_age = cat1.getAge();
//
//    cout << "고양이 이름은 " << str_n << " 입니다." << endl;
//    cout << "고양이 나이는 " << cat_age << " 살 입니다." << endl;
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
//    cout << "가로, 세로 길이를 입력하세요. ";
//    cin >> r1.width;
//    cin >> r1.height;
//
//    float S = r1.width * r1.height;
//
//    cout << "넓이는 " << S << endl;
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
//		cout << "이 차의 이름은 " << name << "입니다." << endl;
//	}
//	void getDoor() {
//
//		cout << "자동차의 도어는" << door << "입니다." << endl;
//	}
//	void getWheel() {
//
//		cout << "자동차의 바퀴는" << wheel << "입니다." << endl;
//	}
//
//	void getHorn() {
//
//		cout << "자동차의 경적은" << horn << "입니다." << endl;
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
//	c1.setData("붕붕", 4, 4, 10);
//	c1.getDoor();
//	c1.getHorn();
//	c1.getName();
//
//	Genesis gen1;
//	gen1.setData("봉봉", 5,5,20);
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
//        cout << "동물의 이름을 입력하세요: ";
//        cin >> name;
//        cout << "동물의 나이를 입력하세요: ";
//        cin >> age;
//    }
//
//    void printInfo() {
//        cout << "이름: " << name << ", 나이: " << age << "살" << endl;
//    }
//
//
//    void eat() {
//        cout << name << "이(가) 먹이를 먹습니다." << endl;
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
//        cout << name << "이(가) 두발로 이동합니다." << endl;
//    }
//};
//
//class Bird : public Animal {
//public:
//    void move()  {
//        cout << name << "이(가) 두 날개로 이동합니다." << endl;
//    }
//};
//
//int main() {
//
//    Cat cat;
//    cout << "고양이 정보: " << endl;
//    cat.inputInfo();
//    cat.printInfo();
//    cat.eat();
//    cat.move();
//
//    cout << endl;
//
//    Bird bird;
//    cout << "새 정보: " << endl;
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
//        cout << "캐릭터 이름을 입력하세요: ";
//        cin >> name;
//        cout << name << " 캐릭터가 생성되었습니다." << endl;
//    }
//
//    void changeName() {
//        cout << "변경할 캐릭터 이름을 입력하세요: ";
//        cin >> name;
//        cout << "캐릭터 이름이 " << name << "(으)로 변경되었습니다.\n";
//    }
//
//    void showInfo() {
//        cout << "\n[캐릭터 정보]\n";
//        cout << "이름: " << name << "\n";
//        cout << "레벨: " << level << "\n";
//        cout << "아이템 수: " << item_num << "\n";
//    }
//
//    void levelUp() {
//        level++;
//        cout << name << "의 레벨이 " << level << "(으)로 증가했습니다!\n";
//    }
//
//    void addItem() {
//        item_num++;
//        cout << name << "이(가) 아이템을 얻었습니다! (현재 아이템 수: " << item_num << ")\n";
//    }
//
//    void useItem() {
//        if (item_num > 0) {
//            item_num--;
//            cout << name << "이(가) 아이템을 사용했습니다! (남은 아이템 수: " << item_num << ")\n";
//        }
//        else {
//            cout << "아이템이 부족하여 사용할 수 없습니다.\n";
//        }
//    }
//
//    void control() {
//        int choice;
//        do {
//            cout << "\n[메뉴 선택]\n";
//            cout << "1. 캐릭터 이름 변경\n";
//            cout << "2. 레벨 올리기\n";
//            cout << "3. 아이템 추가하기\n";
//            cout << "4. 아이템 사용하기\n";
//            cout << "5. 캐릭터 정보 출력하기\n";
//            cout << "0. 종료\n";
//            cout << "선택: ";
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
//                cout << "프로그램을 종료합니다.\n";
//                break;
//            default:
//                cout << "잘못된 입력입니다. 다시 선택해주세요.\n";
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
//		cout << "네임스페이스 테스트1 입니다." << endl;
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
//	seoul::landmark = "남산";
//
//	num = 2;
//	landmark = "해운대";
//
//	cout << "서울 지역번호: " << seoul::num << ", 랜드마크: " << seoul::landmark << endl;
//	cout << "부산 지역번호: " << num << ", 랜드마크: " << landmark << endl;
//	
//	return 0;
//}