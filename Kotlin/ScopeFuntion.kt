/*Apply 함수*/
val person = Person().apply{
    firstName = "sage"
    lastname = "hy"
}
//java
Person person = new Person();
person.firstName = "sage";
person.lastName = "hy";


/*Also 함수
객체의 유효성을 확인하거나 디버깅 용도로 사용한다. */
Random.nextInt(100).also{
    print("getRandomInt() generated value $it") //value를 생략
}
//value생략 안한 버전
Random.nextInt(100).also{ value ->
    print("getRandomInt() generated value $value")
}


/* Let함수 */
val number: Int?
val sumNumberStr = number?.let{
    "${sum(10, it)}"
}.orEmpty()


/* With 함수 */
val person = Person()
with(person){
    work()
    sleep()
    println(age)
}

/* Run함수
어떤 값을 계산할 필요가 있거나 객체 구성과 결과가 한번에 있을떄 유용하다.
반환 값이 람다의 결과 값이다. 
확장 함수로 사용이 가능하다.*/
val result = service.run{
    port = 8080
    query() 
}

//자바와는 다르게 Data Class라는 기능을 제공해 줌.(getter setter 자동으로 만들어줌)
//스코프 함수X
data class Object(var s: String)

//lambda expression
button.setOnClickListener { v ->

}

/* lateinit, lazy init 
 NullSafe한 코드를 사용하기 위해서 non-null Type으로 변수를 선언함
 초기값이 없는 변수는 어떻게 최화를 해야할까?*/
var nullableNumber: Int? = null
lateinit var lateinitNumber: Int

//추후 초기화 하는 코드
lateinitNumber = 10

//사용할 때
nullableNumber?.add()
lateinitNumber.add()

val lazyNumber : Int by lazy{
    100
}

// 사용하기 전까지는 lazyNumber 라는 변수에 100이 할당되지 않음.

lazyNumber.add()
//사용할 때 100이 할당됨