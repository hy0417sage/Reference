# 코드 분석하며 모르겠는 c++언어 기록
```c++
void Activity::onCreated()
{
    qCInfo(category, "카테고리 %s에 로그인된 정보 메세지", category . categoryName()); //정보 메세지를 카테고리에 기록한다.
    qCInfo(카테고리)
}
```

## Qt 이벤트 핸들링 방식
+ QT의 시그널과 슬롯(Signal, Slot), Connect 함수 사용법
1. 시그널 : QPushButton에서 mouse click, double click, mouse over 등과 같이 정의된 것.
2. 슬롯 : valueChanged()와 같이 값을 변경하기 위해 제공되는 Virtual 함수.
```c++
connectSignal = connect(...);
// Qt에 시그널 스롯 삭제하기
disconnect(connectSignal);
```
- qml에 시그널 슬롯을 연결하지 않고 invokemethod를 호출하는 방식


## C++ 싱글톤 패턴
```c++
bool SingletonClass::instanceFlag = false;
SingletonClass* SingletonClass::instance = NULL;
+*
// 싱글턴 인스턴스를 반환할 멤버함수
SingletonClass* SingletonClass::getInstance(){
	if(!instance){
		instance = new SingletonClass();
		instanceFlag = true;
	}
	return instance;
}

// total의 값을 증가 시킴
void SingletonClass::addValue(int value){
	total = total + value;
}
// totla 값을 반환
int SingletonClass::getTotalValue(){
	return total;
}

//reinterpret_cast : int* -> char -> int*
//포인터와 관련된 캐스트
int main() {
    int* p = new int(100);
    char c = reinterpret_cast<char> (p);
    printf("%d ", c);

    int* temp = reinterpret_cast<int *>(c);
    printf("%d ", *temp);

    return 0;
}
```
