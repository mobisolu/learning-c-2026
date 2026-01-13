#include <stdio.h>

int main(void)
{
    printf("%d\n", 10);//정수 10을 %d위치에 출력
    printf("%lf\n", 3.4);//실수3.4를 %lf에 소수점6번째까지출력
    printf("%.1lf\n", 3.45);//실수3.45를 소수점이하 첫번째자리까지출력 나머지 반올림

    printf("%.10lf\n", 3.4);//소숫점 10번째자리까지 출력

    printf("%d과 %d의 합은 %d입니다.\n" ,10, 20, 10+20);//인자,인자,인자
    printf("%.1lf-%.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);//argument,argument

    return 0;
}

