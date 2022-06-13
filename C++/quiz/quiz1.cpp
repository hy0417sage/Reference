/*
1. 이름과 정수를 입력받고, 다음과 같이 출력되는 프로그램을 작성해 보세요.
이름 입력 : hy0417sage
점수입력 : 80
hy0417sage님의 점수는 80점 입니다.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int grade;

    cout << "이름 입력 : ";
    cin >> name;
    cout << "점수 입력 : ";
    cin >> grade;

    cout << name << "님의 점수는 " << grade << "점 입니다." << endl;

    return 0;
}
