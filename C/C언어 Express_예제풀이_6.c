/// <summary>
/// 100보다 작은 정수를 입력받아서 이것을 십의 자리, 일의 자리로 분리하여 출력하는 프로그램을 작성하시오. 즉 사용자가 정수 23으,f 입력하면 2, 3을 차례로 출력하면 된다.
/// <출력값>
/// - 정수를 입력하시오 : 23	
/// - 십의자리 : 2
/// - 일의자리 : 3
/// </summary>


#include <stdio.h>

int main(void)

{
	int x;
	int ten, one;    //십의자리, 일의자리

	printf("정수를 입력하시오. : ");
	scanf("%d", &x);

	ten = x / 10;
	one = x % 10;
	printf("십의자리 : %d\n  일의자리 : %d\n", ten, one);

	return 0;
}