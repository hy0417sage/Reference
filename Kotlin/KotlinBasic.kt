/* Kotlin 기초 개념 */

fun main(args: Array<String>){
    print("Hello World!") ///자바와 다르게 세미콜론이 붙지 않는다.
}

//함수선언
fun sum(a: Int, b: Int): Int{
    return a + b
}

fum sum(a: Int, b: Int) = a + b //표현식으로 작성한 함수 위와 동일한 동작!
// 함수 선언문 옆에 (=)
fun max(a: Int, b: Int) = if(a > b) a else b

//변수 선언 방식
val a: Int = 1
val b = 2
val c = 3.14
val d: String
d = "필수로 있어야 하는 구문" //null이 가능하지 않은 타입
//d의 초기값이 없으면 null이 될 수 있는데, d는 null이 될 수 없기 때문에 초기화를 해줘야 함

val e: String?
var d: String = "첫번째 초기화"
e = "두번째 초기화"

//Type
//정수형 : byte, short, int, long
//실수형 : Float, Double
//그 외 : Char, String, Boolean

//? -> null이 될 수 있다.

//반복문
for(i in 1..5){
    println(i)
} // 1 2 3 4 5

for (i in 1..5 step 3){
    print(i)
} // 1 4

for(i in 6 downTo 0 step 2){
    println(i)
} // 6 4 2 0

val numberList = listOf(100, 200, 300)
for(number in numberList){
    println(number)
} // 100, 200, 300

//while문
var x = 5
while ( x > 0 ){
    println(x)
    x--
} // 5 4 3 2 1

x = 0
while (x > 0){
    println(x)
    x--
} //출력없음

var y = 0
do{
    print(y)
    y--
} while(y > 0)
// 0

//If문
var max: Intif(a > b){
    max = a
}else {
    max = b
}

//As expression
val max = if(a>b){
    print("Choose a")
    a
} else{
    print("Choose b")
    b
}

when (x){
    1 -> print("x == 1")
    2 -> print("x == 2")
    else -> {
        print("x is neither 1 nor 2")
    }
}

when (x){
    0, 1 -> print("x == 0 or x == 1")
    else -> print("otherwise")
}

when (x){
    in 1..10 -> print("x는 1부터 10 범위 안에 있음")
    !in 10..20 -> print("x는 10 부터 20 범위 안에 없음")
    else -> print("otherwise")
}

when (x){
    is Int -> print("x는 인트형")
    else -> print("x는 인트형이 아님")
}