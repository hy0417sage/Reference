#include <iostream>

using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //범위 기반 for문
    for (int n : arr){
        cout << n << endl;
    }

    //범위기반 for문의 단점
    for (int n : arr){
        cout << n << ' ';
        n++; //반영 되지 않고 출력됨. 메모리 상에서 n이 할당된 칸이 따로 있어 arr[6] 자체를 증가시킬 수 없기 때문.
    }

    //But! 래퍼런스 변수(참조형 변수) 개념을 활용하면 문제가 해결된다.
    for (int &n : arr){
        cout << n << ' ';
        n++;   
    }
}

