//overload : 다중 정의(여러번 정의)
//매게 변수의 형을 자동으로 인식해서 적합한 함수를 찾아 실행해 준다.

#include <iostream>
using namespace std;

//Ver1
void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void swap(double &a, double &b){
    double tmp = a;
    a = b;
    b = tmp;
}

void swap(int* &a, int* &b){
    int* &tmp = a;
    a = b;
    b = tmp;
}

//Ver2
int inventory[64] = {0};
int score = 0;

void getItem(int itemId){
    inventory[itemId]++;
}

void getItem(int itemId, int cnt){
    inventory[itemId] += cnt;
}

int main(){
    int a = 20, b = 30;
    double da = 2.222, db = 3.333;
    int *pa = &a, *pb = &b;

    swap(a, b);
    swap(da, db);
    swap(*pa, *pb);

    cout << a << ' ';
    cout << b << ' ';
}
