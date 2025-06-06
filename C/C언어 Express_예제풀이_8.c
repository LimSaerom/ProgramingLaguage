﻿/// <summary>
/// 정수에 비트 연산자 <<를 한 번 적용하면 2를 곱한 값을 얻을 수 있다. 또 정수에 비트 연산자 >>를 한 번 적용하면 2로 나눈 값을 얻을 수 있다.
/// 사용자로부터 정수x,y를 입력받아서 x<<y의 값을 출력하는 프로그램을 작성하여보자.
/// <출력값>
/// - 정수를 입력하시오. : 10
/// - 2를 곱하고 싶은 횟수 : 3
/// - 10 << 3 의 값 : 80
/// </summary>


#include <stdio.h>
int main(void)
{
	int x, y;

	printf("정수를 입력하시오. : ");
	scanf("%d", &x);

	printf("2를 곱하고 싶은 횟수 : ");
	scanf("%d", &y);

	printf("%d << %d = %d\n", x, y, x << y);


	return 0;
}