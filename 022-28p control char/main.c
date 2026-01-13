#include <stdio.h>

int main(void)
{
    printf("be happy\n"); //줄바꿈
    printf("12345678901234567890\n");
    printf("my\tfriend");//tab
    printf("goot\bd\tchance\n");//t로 커서이동후 d출력 tab후 줄바꿈
    printf("cow\rW\a\n");//cow출력후 줄앞으로 이동해 w로 바꿈 그리고 a beep

    return 0;
}
//출력후 제어문자는 insert개념으로 생각하면 편함,
//줄바꿔도 커서뒤에 내용이 따라 내려가지 않는 이유
