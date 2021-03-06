# Linux 기본 명령어 11개

1. ls - 현재 위치의 파일 목록 조회
2. cd - 디렉터리 이동
3. touch - 0바이트 파일 생성, 파일의 날짜와 시간을 수정
4. mkdir - 디렉터리 생성
5. cp - 파일 복사
6. mv - 파일 이동
7. rm - 파일 삭제 
8. cat - 파일의 내용을 화면에 출력, 리다이렉션 기호('>')를 사용하여 새로운 파일 생성
9. redirection - 화면의 출력 결과를 파일로 저장
10. alias - 자주 사용하는 명령어들을 별명으로 정의하여 쉽게 사용할 수 있도록 설정
11. pwd (print working directory) - 현재 작업중인 디렉토리 정보 출력


</br>

## Linux 기본 명령어 1..10까지의 명령어 옵션과 설명
 
1. ls (List segments) : 현재 위치의 파일 목록 조회
- ls -l : 파일의 상세정보 나타냄
- ls -a : 숨김 파일 표시
- ls -t : 파일들을 생성시간순(제일 최신 것부터)으로 표시
- ls -rt : 파일들을 생성시간순(제일 오래된 것부터)으로 표시
- ls -f : 파일 표시 시 마지막 유형에 나타내는 파일명을 끝에 표시
- ('/' : 디렉터리, '*' : 실행파일, '@' : 링크 등등,,,)
- 각 옵션 복합적으로 사용가능
 
 </br>

2. cd (Change directory) : 디렉터리 이동
- cd ~ : 홈 디렉터리로 이동
- cd / : 최상위 디렉터리로 이동
- cd . : 현재 디렉터리 
- cd .. : 상위 디렉터리로 이동
- cd - : 이전 경로로 이동
 
</br>

3. touch : 0바이트 파일 생성, 날짜와 시간을 수정
- touch filename : filename의 파일을 생성
- touch -c filename : filename의 시간을 현재시간으로 갱신
- touch -t **YYYYMMDDhhmm** filename : filename의 시간을 날짜 정보(YYYYMMDDhhmm)로 갱신
- touch -r oldfile newfile  : newfile의 날짜 정보를 oldfile의 날짜 정보와 동일하게 변경
 
 </br>

4. mkdir (Make dirctory) : 새로운 디렉터리 생성
- mkdir dirname : dirname이라는 디렉터리 생성
- mkdir dir1 dir2: 한 번에 여러 개의 디렉터리 생성
- mkdir -p dirname/sub_dirname : dirname이라는 디렉터리 생성, sub_dirname이라는 하위 디렉터리도 생성
- mkdir -m 700 dirname : 특정 퍼미션(권한)을 갖는 디렉터리 생성

</br>

5. cp (Copy) : 파일 복사
- cp file1 file2 : file1을 file2라는 이름으로 복사
- cp -f file1 file2 : 강제 복사(file2라는 파일이 이미 있을 경우 강제로 기존 file2를 지우고 복사 진행)
- cp -r dir1 dir2 : 디렉터리 복사. 폴더 안의 모든 하위 경로와 파일들을 복사
 
 </br>

6. mv (Move) : 파일 이동
- mv file1 file2 : file1 파일을 file2 파일로 변경
- mv file1 /dir : file1 파일을 dir 디렉터리로 이동
- mv file1 file2 /dir : 여러 개의 파일을 dir 디렉터리로 이동
- mv /dir1 /dir2 : dir1 디렉터리를 dir2 디렉터리로 이름 변경
 
 </br>

7. rm (Remove) : 파일 삭제
- rm file1 : file1을 삭제
- rm -f file1 : file1을 강제 삭제
- rm -r dir : dir 디렉터리 삭제 (디렉터리는 -r 옵션 없이 삭제 불가)
 
 </br>

8. cat (Catenate) : 파일의 내용을 화면에 출력, 리다이렉션 기호('>')를 사용하여 새로운 파일 생성
- cat file1 : file1의 내용을 출력
- cat file1 file2 : file1과 file2의 내용을 출력
- cat file1 file2 | more : file1과 file2의 내용을 페이지별로 출력
- cat file1 file2 | head : file1과 file2의 내용을 처음부터 10번째 줄까지만 출력
- cat file1 file2 | tail : file1과 file2의 내용을 끝에서부터 10번째 줄까지만 출력
 
 </br>

9. redirection ('>', '>>') : 화면의 출력 결과를 파일로 저장
- '>' 기호 : 기존에 있는 파일 내용을 지우고 저장
- '>>' 기호 : 기존 파일 내용 뒤에 덧붙여서 저장
- '<' 기호 : 파일의 데이터를 명령에 입력
    - cat file1 firle2 > file3 : file1, file2의 명령 결과를 합쳐서 file3라는 파일에 저장
    - car file4 >> file3 : file3에 file4의 내용 추가
    - cat < file1 : file1의 결과 출력
    - cat < file1 > file2 : file1의 출력 결과를 file2에 저장
 
</br>

10. alias : 자주 사용하는 명령어들을 별명으로 정의하여 쉽게 사용할 수 있도록 설정
- alias 별명 = '명령어 정의'
- ex) alias lsa = 'ls -a' : lsa를 실행하면 -a 옵션을 갖는 ls를 실행합니다.
```
unalias lsa
unalias lsa : lsa라는 alias를 해제
```