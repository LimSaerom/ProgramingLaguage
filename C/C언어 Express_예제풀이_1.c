/// <summary>
/// ���������� ������ �����ϰ� �� ���� ���� ��, �Ž������� �׼��� ������ �����ؾ� �� �Ž������� ȭ��� ���� ���� ����ϴ� ���α׷��� �ۼ��غ���.
/// -���ǰ��� �Է��Ͻÿ� : 8, 600
/// - ������ �ݾ��� �Է��Ͻÿ� : 10, 000
/// - �Ž������� ������ �����ϴ�.
/// õ���� : 1��
/// ����� ���� : 0��
/// ��� ���� : 4��
/// </summary>


#include <stdio.h>
#define WON_1 5000
#define WON_2 1000
#define WON_3 500
#define WON_4 100

int main()
{
    int item, pay, change;        //��ǰ����,���Աݾ�,�ܱ� ��������
    int k5000, k1000, k500, k100;    //�ܵ� ��������

    printf("���ǰ��� �Է��Ͻÿ�.");
    scanf("%d", &item);

    printf("������ �ݾ��� �Է��Ͻÿ�.");
    scanf("%d", &pay);

    change = pay - item;
    k5000 = change / WON_1;    //5,000���� ����
    change = change % WON_1;

    k1000 = change / WON_2;   //1,000���� ����
    change = change % WON_2;

    k500 = change / WON_3;   //500�� ����
    change = change % WON_3;

    k100 = change / WON_4;   //500�� ����
    change = change % WON_4;

    printf("�Ž������� ������ �����ϴ�./n ��õ����%d��, õ����%d�� �����%d��, ���%d��", k5000, k1000, k500, k100);
    return 0;
}