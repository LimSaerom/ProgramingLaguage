/// <summary>
/// cm으로 표현된 키를 입력하여 피트와 인치로 변환하는 프로그램을 작성하시오. 1피트는 12인치이고 1인치는 2.54cm이다.
/// <출력값>
/// - 키를 입력하시오(cm) : 163
/// - 163cm는 5피트 4.17인치입니다.
/// </summary>


#include <stdio.h>
#define FIT_1 12
#define FIT_2 2.54

int main(void)
{
	int cm, feet; //키
	float inch, c_inch; // cm → inch 변환

	printf("키를 입력하시오(cm) : ");
	scanf("%d", &cm);

	c_inch = cm / FIT_2;
	feet = c_inch / FIT_1;
	inch = c_inch - feet * FIT_1;

	printf("%d cm는 %d피트 %.2f인치 입니다.", cm, feet, inch);

	return 0;
}