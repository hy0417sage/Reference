#include <iostream>
#include <string> //문자열 선언

using namesapce std;

namespace a
{
    int n;
}

namespace b
{
    int n;
}

int main(){
    a::n(10); //C++ 스타일의 선언 방법
    b::n(a);

    a = 15 //대입을 할 경우 선언 방식은 c와 동일하다.

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}