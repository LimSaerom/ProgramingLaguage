/// <summary>
/// ����ڷκ��� 2���� ������ �Է¹޾Ƽ� ù ��° ������ �� ��° ������ �������� �� ��� �Ǵ� ��� �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// <��°�>
/// -���� 2���� �Է��Ͻÿ�. : 10 3
/// - �� : 3
/// - ������ : 1
/// </summary>

#include <stdio.h>


int main(void)
{
	int x, y;
	int quotient, mod; // ������, ��

	printf("���� 2���� �Է��Ͻÿ�. :");
	scanf("%d %d", &x, &y);

	quotient = x / y;
	printf("�� : %d\n", quotient);

	mod = x % y;
	printf("������ : %d\n", mod);

	return 0;
}