/// <summary>
/// cm���� ǥ���� Ű�� �Է��Ͽ� ��Ʈ�� ��ġ�� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�. 1��Ʈ�� 12��ġ�̰� 1��ġ�� 2.54cm�̴�.
/// <��°�>
/// - Ű�� �Է��Ͻÿ�(cm) : 163
/// - 163cm�� 5��Ʈ 4.17��ġ�Դϴ�.
/// </summary>


#include <stdio.h>
#define FIT_1 12
#define FIT_2 2.54

int main(void)
{
	int cm, feet; //Ű
	float inch, c_inch; // cm �� inch ��ȯ

	printf("Ű�� �Է��Ͻÿ�(cm) : ");
	scanf("%d", &cm);

	c_inch = cm / FIT_2;
	feet = c_inch / FIT_1;
	inch = c_inch - feet * FIT_1;

	printf("%d cm�� %d��Ʈ %.2f��ġ �Դϴ�.", cm, feet, inch);

	return 0;
}