/*
2. 범위 기반의 for문을 사용하여 이차원 배열을 출력해 보세요.
*/

#include <iostream>

using namespace std;

int main(){
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    //결론 : 배열에 대한 레퍼런스를 사용해야한다.
    for(int(&ln)[3] : arr){
        for(int &col : ln){
            cout << col << " ";
        }
    }

    //오토 키워드로 간편하게 출력할 수 있음.
    for(auto &ln : arr){
        for(auto &col : ln){
            cout << col << ' ';
        }
    }

    //비교하면서 공부하자.
    for(int(*ln)[3] = arr ; ln < arr + 2 ; ln++){
        for(int *c = *ln ; c < *ln + 3 ; c++){
            cout << *c << ' ';
        }
    } 
     
}