/// <summary>
/// 2개의 double 형의 실수를 읽어서 합, 차 , 곱, 몫을 구하는 프로그램을 작성하라.
/// <출력값>
/// - 실수를 입력하시오. : 2.0 3.0
/// - 5.00   -1.00   6.00   067
/// </summary>


#include <stdio.h>

int main(void)
{
    double x, y;
    double sum, diff, mul, div;   //합,차,곱,몫
    printf("실수를 입력하시오. : ");
    scanf("%lf %lf", &x, &y);

    sum = x + y;
    diff = x - y;
    mul = x * y;
    div = x / y;
    printf("합:%.2f  차:%.2f  곱:%.2f  몫:%.2f", sum, diff, mul, div);

    return 0;
}