# Vector

> c++의 벡터는 C++ 표준라이브러리(STL)에 있는 컨테이너로 사용자가 사용하기 편하게 정의된 class다. 
> 속도적인 측면에서 array(배열)에 비해 성능은 떨어지지만 메모리를 효율적으로 관리하고 예외 처리가 쉽다는 장점이 있다.

```c++
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    //Vector의 초기화
    vector<int> v;
    vector<int>v(4); //int형 벡터의 크기를 4로 할당(모든 백터요소 0으로 초기화)
    vector<int>v = {1, 2, 3};
    vector<int>v[] = {{1,2}, {3, 4}};
    vector<vector<int>> v; //2아춴 백터 생성(행과 열 모두 가변)
    vector<int> v = {1, 2, 3, 4, 5};
    v.assign(5, 10);


    //Vector의 Iterators 백터의 시작점과 끝지점 값 반환.
    vector<int> v = {1, 2, 3, 4};
    for_each(v.begin(), v.end(), [&](int& n){
        cout << n << endl; //1, 2, 3, 4
    });
    for_each(v.rbegin(), v.rend(), [&](int& n){
        cout << n << endl;
    });

    vector<int>::iterator itor = v.begin();
    for (; itor != v.end(); itor++)
        cout << *itor << endl;        //output : 1 2 3 4

    vector<int>::reverse_iterator itor2 = v.rbegin();
    for (; itor2 != v.rend(); itor2++)
        cout << *itor2 << endl;        //output : 4 3 2 1


    //Vector Element access(백터의 요소 접근)
    vector<int> v = { 1, 2, 3, 4};
    cout << v.front() << endl;        //output : 1
    cout << v.back() << endl;        //output : 4
    cout << v.at(1) << endl;        //output : 2
    cout << v[2] << endl;            //output : 3​
```



## ※vector의 at과 []에 대한 차이점!
- 둘다 똑같이 N번째의 요소 접근이지만, at은 범위를 검사하여 범위 밖의 요소에 접근 시 예외처리를 발생시킨다. (std::out_of_range)
- 하지만 [](operator [])는 범위검사를 하지 않으며 예외처리르 발생시키지 않는다. 
- 또한, 해당범위 밖의 요소에 접근을 시도한다면 일반적인 디버깅(g++ or VC++)이 발생한다.
- 백터는 효율을 중점으로 둔 라이브러리 함수여서 보통 []를 권장하고 있으며 여러가지 방법으로 유효성 검사가 가능하기 때문에 []를 많이 사용하고 있다.*/

```c++
    //Vector에 요소 삽입
    vector<int> v;

    v.push_back(10);
    v.push_back(20);        //v = { 10, 20 } 마지막 부분에 새로운 요소 추가

    v.insert(v.begin() + 1, 100);     // v = { 10, 100, 20 } 사용자가 원하는 위치에 요소 삽입

    v.pop_back();        // v = { 10, 100 } 벡터의 마지막 부분 제거

    v.emplace_back(1); //v = { 10, 100, 1 } 
    v.emplace_back(2);    //v = { 10, 100, 1, 2 } 백터의 마지막 부분에 새로운 요소 추가(move로 인해 복사생성자 X) 
    v.emplace(v.begin() + 2, -50);    //v = { 1, 100, -50, 1, 2 } 사용자가 원하는 위치에 요소 삽입(move로 인해 복사생성자 X) 

    v.erase(v.begin() + 1); // v = { 1, -50, 1, 2 } 사용자가 원하는 index값의 요소를 지운다.
    v.resize(6);    // v = { 1, -50, 1, 2, 0, 0 }  백터의 사이즈를 조정한다.(범위 초과시 0으로 초기화) 
    v.clear();    // v = empty() 백터의 모든 요소를 지운다.(return size = 0)
```

## 벡터의 크기 
- size()와 capacity() 두개가 있다.
- size()는 벡터가 생성된 크기이며 capacity는 벡터의 최대 할당 크기라고 생각하면 된다.
- 백터의 크기가 capacity()의 크기를 초과해 버린다면 reallocate(재할당)이 발생한다.
- 이로 인해 모든 값들을 새로운 메모리 공간에 복사한 후 기존 벡터를 파괴해 버린다.
- 여기서 복사 생성자가 발생하게 된다. (퍼포먼스가 저하된다.)

+ reallocate이 자주 일어나는 현상을 막기 위해서 reserve()라는 함수를 사용해주면 되는데 이 함수는 백터의 capacity() 크기를 설정해주는 함수로 충분한 백터를 만들어서 불필요한 생성과정을 없애주는 역할을 한다.
+ 하지만 reserve()를 너무 크게 잡게되면 백터가 불필요하게 늘어나 메모리를 많이 잡아먹을 수 있다.
+ 따라서 남은 공간을 잡아주는 함수가 바로 shrink_to_fit()이라는 함수다.
+ 이 함수를 통해 capacity()의 크기를 조정해 줄 수 있다.

```c++
    vector<int> v = { 1, 2, 3, 4};
    v.clear();
    cout << v.capacity() << endl;    //output : 10

    vector<int>().swap(v);
    cout << v.capacity() << endl;    //output : 0​
```
+ clear()로 백터의 값들을 지우게 되면 백터의 요소들은 없어지지만 capacity()는 남아있는다.
+ clear()로 백터의 값들을 지운 후 다시 사용하지 않는다면 해당 백터의 메모리 공간은 잉여로 남기 때문에 swap을 이용하면 잉여 공간을 없앨 수 있다.
+ 하지만 함수가 끝나면 자동으로 힙에서 메모리가 해제되니 한개의 함수에소 백터를 재활용해 사용하지 않는 이상 굳이 안해도 된다.


## 백터의 용량
- v.empty() : 백터가 빈공간이면 true, 값이 있다면 false 
- v.size() : 백터의 크기 반환 
- v.capacity() : heap에 할당된 백터의 실제크기(최대크기) 반환 
- v.max_size() : 백터가 system에서 만들어 질 수 있는 최대 크기 반환 
- v.reserve(숫자) : 백터의 크기 설정 
- v.shrink_to_fit() : capacity의 크기를 백터의 실제 크기에 맞춤 
    

```c++
  vector<int>v = { 1, 2, 3, 4 };

    cout << v.size() << endl;    //output : 4
    cout << v.capacity() << endl; //output : 10 (컴파일 환경에 따라 달라질 수 있음)

    v.reserve(6);
    cout << v.capacity() << endl; //output : 6
    cout << v.max_size() << endl; //output : 1073741823(시스템 성능에 따라 달라질 수 있음)

    v.shrink_to_fit();
    cout << v.capacity() << endl; //output : 4

    cout << v.empty() << endl; //output : false
    v.clear();
    cout << v.empty() << endl; //output : true​

    return 0;

}
```
