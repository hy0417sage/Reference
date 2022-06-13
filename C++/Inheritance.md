## 상속이란?
- 객체지향 프로그래밍의 주요한 특성 중 하나이며 이를 통해 프로그램의 논리적 구조를 계층적으로 구성할 수 있다. 
- 자식 클래스가 부모 클래스의 속성을 그대로 물려받아 사용할 수 있다. 따라서 소스의 재사용성을 높인다.
- 부모님의 재산을 물려받는 것처럼 클래스 내의 재산을 물려받는 것이라고 생각하면 된다.


## 자식 클래스
자식 클래스는 파생 클래스라고도 불리며 부모 클래스의 모든 속성을 물려받는다. 자식 클래스는 콜론(:)을 활용해 부모 클래스와 연결 된다.


## C++에서 클래스를 상속하는 것은 이와 같다.
```C++
class 클래스명{
    // ..
}
class 클래스명 : 접근제한자 클래스명
{
    // ..
}
```
- 클래스를 상속 시키려면 상속 받을 클래스의 이름 옆에 : 와 접근 제한자, 그리고 상속할 클래스의 이름을 붙여주면 된다.

## 접근 지정자
```C++
class hy0417sage{
    private:

    public:
}
class kimmandu : public hy0417sage
{
    private:

    public:
}
```
- private로 정의되면 부모 클래스의 모든 공용 부분의 멤버가 자식 클래스의 전용 멤버처럼 사용 가능하다.


## 상속의 사용
자식 클래스는 파생 클래스라고도 불리며 부모 클래스의 모든 속성을 물려받는다. 자식 클래스는 콜론(:)을 활용해 부모 클래스와 연결된다.
```C++
#include<iostream>
#include<string>

using namespace std;
class Person{
private:
	string name;
public:
	Person(string name) : name(name) { }
	string getName() {
		return name;
	}
	void showName() {
		cout << "이름: " << getName() << '\n';
	}
};

class Student: Person{
private:
	int studentID;
public:
	Student(int studentID, string name) : Person(name) {
	this->studentID = studentID;
}
void show() {
	cout << "번호: " << studentID << '\n';
	cout << "이름: " << getName() << '\n';
}
};

int main(void) {
	Student student(1, "김만두");
	student.show();
	system("pause");
}
```
## 오버라이딩
오버라이딩은 부모 클래스에서 정의된 함수를 자식 클래스에서 재 정의하는 문법이다. 오버라이딩을 적용한 함수의 원형은 기존의 함수와 동일한 매개변수를 전달 받는다.
```C++
#include<iostream>
#include<string>

using namespace std;

class Person{
private:
	string name;
public:
	Person(string name) : name(name) { }
	string getName() {
		return name;
	}
	void showName() {
		cout << "이름: " << getName() << '\n';
	}
};

class Student: Person{
private:
	int studentID;
public:
	Student(int studentID, string name) : Person(name) {
	this->studentID = studentID;
	}
	void show() {
		cout << "학생번호: " << studentID << '\n';
		cout << "학생이름: " << getName() << '\n';
	}
	// 오버라이드
	void showName() {
		cout << "학생 이름 : " << getName() << '\n';
	}
};

int main(void) {
	Student student(1, "김만두");
	student.showName();
	system("pause");
}
```

## 다중 상속
여러 개의 클래스로부터 멤버를 상속 받는 것을 말한다.
```C++
#include<iostream>
#include<string>

using namespace std;

class Person{
private:
	string name;
public:
	Person(string name) : name(name) { }
	string getName() {
		return name;
	}
	void showName() {
		cout << "이름: " << getName() << '\n';
	}
};

class Temp {
public:
	void showTemp() {
		cout << "임시 부모 클래스\n";
	}
};

class Student: Person, public Temp{
private:
	int studentID;
public:
	Student(int studentID, string name) : Person(name) {
	this->studentID = studentID;
	}
	void show() {
		cout << "번호: " << studentID << '\n';
		cout << "이름: " << getName() << '\n';
	}
	// 오버라이드
	void showName() {
		cout << "이름 : " << getName() << '\n';
	}
};

int main(void) {
	Student student(1, "김만두");
	student.showName();
	student.showTemp();
	system("pause");
}
```

## 다중 상속의 한계
- 여러개의 부모 클래스에 동일한 멤버가 존재할 가능성이 있다.
- 하나의 클래스를 의도치 않게 여러번 상속받을 가능성이 있다.

## 상속 관계에서 생성자, 소멸자
```c++
#include<iostream>

using namespace std;

class parentClass {
public:
    parentClass() { 
        cout << "parentClass 생성자 " << endl;
    }
    ~parentClass() {
        cout << "parentClass 소멸자 " << endl;
    }
};
class childClass : public parentClass {
public:
    childClass() {
        cout << "childClass 생성자 " << endl;
    }
    ~childClass() {
        cout << "childClass 소멸자 " << endl;
    }
};

int main()
{
    childClass C;
    return 0;
}
```
```console
parentClass 생성자 
childClass 생성자 
childClass 소멸자 
parentClass 소멸자 
```

## 멤버 이니셜라이저
- 멤버 이니셜라이저는 부모 클래스의 멘버 변수를 초기화 하기 위해서 생성자 함수를 호출 한다던가, 클래스 내의 변수를 초기화 한다던가, const 변수를 초기화 할때 사용된다.
- 생성자의 몸체 부분보다 먼저 실행된다는 특징을 가지고 있다.

