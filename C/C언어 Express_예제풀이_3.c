/// <summary>
/// 2���� double ���� �Ǽ��� �о ��, �� , ��, ���� ���ϴ� ���α׷��� �ۼ��϶�.
/// <��°�>
/// - �Ǽ��� �Է��Ͻÿ�. : 2.0 3.0
/// - 5.00   -1.00   6.00   067
/// </summary>


#include <stdio.h>

int main(void)
{
    double x, y;
    double sum, diff, mul, div;   //��,��,��,��
    printf("�Ǽ��� �Է��Ͻÿ�. : ");
    scanf("%lf %lf", &x, &y);

    sum = x + y;
    diff = x - y;
    mul = x * y;
    div = x / y;
    printf("��:%.2f  ��:%.2f  ��:%.2f  ��:%.2f", sum, diff, mul, div);

    return 0;
}