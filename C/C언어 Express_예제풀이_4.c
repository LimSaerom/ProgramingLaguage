/// <summary>
/// 3개의 정수값을 입력받아서, 3개의 정수값 중에서 최대값을 출력하는 프로그램을 작성하라.
/// <출력값>
/// - 정수 3개를 입력하시오 : 2 3 4
/// - 최대값은 4입니다.
/// </summary>


#include <stdio.h>

int main(void)
{
    //조건연산자 ?:을 2번 사용하는 방법으로 코드 작성
    int x, y, z;
    int max;
    printf("3개의 정수를 입력하시오: ");
    scanf("%d %d %d", &x, &y, &z);

    max = x > y ? x : y && y > z ? y : z;
    //x가 y보다 크다가 참일때 x값, 거짓일때 y값

    printf("최대값은 %d입니다.\n", max);

    return 0;
}