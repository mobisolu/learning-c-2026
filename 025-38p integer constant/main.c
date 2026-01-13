#include <stdio.h>

int main(void)
{
    printf("%d\n", 12); // 10진수 리터럴
    printf("%d\n", 014); //8진수
    printf("%d\n", 0xc); // 16진수 리터럴
    printf("%o\n", 12);
    printf("%x\n", 12);
    printf("%X\n", 12);//MAC주소같은통신은 대문자,관례같은거라 라이브러리에서 선택권준거로생각



return 0;
}
/*
처음 예제실행후 %d 가 정수 출력이라 16진수여도 10진법으로 나오는줄 알았으나 
chatGPT의 정정

%d은 int 기준
정수 상수의 진법은 입력방식이고, %d는 출력방식이다
int를 10진수로 출력

%d  int 를 10진수로 출력
%o  8진수로 출력
%x 16진수로 출력



*/
