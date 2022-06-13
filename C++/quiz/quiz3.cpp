/*
-> 함수 오버로딩 문제
3. 다음과 같은 함수 정의에서 컴파일 오류가 나는 이유를 찾아보세요.
*/

void drawRectangle(int l, int r, int t, int b){

}

void drawRectangle(int x = 0, int y = 0, int w, int h){
    //오류 이유 : 디폴트 매개변수는 오른쪽부터 줘야하기 때문.
}

void drawRectangle(int w, int h, int x = 0, int y = 0){
    //또다시 오류가 나는 이유 : 
    //인자 값이 동일해 졌기 때문.
}

