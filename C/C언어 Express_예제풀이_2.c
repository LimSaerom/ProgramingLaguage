/// <summary>
/// 사용자로부터 2개의 정수를 입력받아서 첫 번째 정수를 두 번째 정수로 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램을 작성하시오.
/// <출력값>
/// -정수 2개를 입력하시오. : 10 3
/// - 몫 : 3
/// - 나머지 : 1
/// </summary>

#include <stdio.h>


int main(void)
{
	int x, y;
	int quotient, mod; // 나머지, 몫

	printf("정수 2개를 입력하시오. :");
	scanf("%d %d", &x, &y);

	quotient = x / y;
	printf("몫 : %d\n", quotient);

	mod = x % y;
	printf("나머지 : %d\n", mod);

	return 0;
}