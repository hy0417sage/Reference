# 정리해 봅시다.

## 1장 : 프로그래밍이란 무엇인가?

### 클래스란 무엇인가?
- 자바의 메소드는 무조건 어딘가에 소속되어 있어야만 한다.
- 클래스는 자바의 가장 작은 단위로 자바의 메소드의 소속이 되어준다.

### 메소드란 무엇인가?
- 메소드는 자바의 행동이다.
- 클래스에 행동을 주어 언어로 현실에 있는 사물이나 추상적인 부분을 만들 수 있다.

### 메소드의 메개 변수는 어디에 적어주나요?
- 메소드의 매개변수는 메소드 이름안에 적어준다. (?)

### 메소드 이름 앞에 꼭 적어 줘야 하는 건 뭐죠?
- 메소드의 이름 앞에는 메소드의 리턴 타입을 적어줘야 한다.

### 클래스가 갖고 있어야 한다고 한 두가지가 뭐죠?
- 클래스는 상태와 행동을 가지고 있어야 한다, 하지만 항상 가지고 있지 않아도 된다. (필수 아님)
- 상태는 변수고 행동은 메소드

### 메소드에서 결과를 돌려주려면 어떤 예약어를 사용해야 하나요?
- void가 아닌 리턴타입을 지정해 주어 해당 값을 return해 주면 된다.

</br>

## 3장 : 자바를 제대로 알려면 객체가 무엇인지를 알아야 한다.

### 클래스와 객체의 차이점은?
- 클래스는 추상적인 개념 혹은 사물을 만들었다면 객체는 이를 실체화 시키는 것이다.
- 예를들어 자동차 클래스를 만들었으면 이 자동차를 현대차, 기아차, 외제차 등으로 나누며 실체화 시키는 것이다.(객체)

### 객체를 생성하기 위해서 꼭 사용해야 하는 예약어는 무엇인가?
- new 예약어 이다.
- 클래스 명은 말그대로 이러한 클래스가 있다 껍데기를 보여주는 것이고 앞에 new를 붙여야지 객체를 생성할 수 있다.

### 객체를 생성하기 위해서 사용하는 메소드 같이 생긴 클래스의 이름에 소괄호가 있는 것을 뭐라고 하나요?
- 생성자라고 한다.
- 이것을 클래스를 만들떄마다 직접 만들 필요는 없다. 알아서 생성해 주기 때문

### 객체의 메소드를 사용하려면 어떤 기호를 객체 이름과 메소드 이름 사이에 넣어주어야 하나요?
- 객체의 메소드를 사용하기 위해서는 .을 객체 이름과 메소드 사이에 넣어주면 된다.
- 이 점(.)은 클래스의 행동 즉 메소드를 호출한다.

### 메소드를 사용하기 위해서는 어떤 것을 만들어야 하나요?
- 메소드를 사용하기 위해서는 객체를 이용해서 메소드를 부르면 된다.
- 점으로 호츨할 수 있다.