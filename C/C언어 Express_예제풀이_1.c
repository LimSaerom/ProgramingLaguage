/// <summary>
/// 편의점에서 물건을 구입하고 만 원을 냈을 때, 거스름돈의 액수와 점원이 지급해야 할 거스름돈을 화폐와 동전 수를 계산하는 프로그램을 작성해보자.
/// -물건값을 입력하시오 : 8, 600
/// - 투입한 금액을 입력하시오 : 10, 000
/// - 거스름돈은 다음과 같습니다.
/// 천원권 : 1장
/// 오백원 동전 : 0개
/// 백원 동전 : 4개
/// </summary>


#include <stdio.h>
#define WON_1 5000
#define WON_2 1000
#define WON_3 500
#define WON_4 100

int main()
{
    int item, pay, change;        //제품가격,투입금액,잔금 변수선언
    int k5000, k1000, k500, k100;    //잔돈 변수선언

    printf("물건값을 입력하시오.");
    scanf("%d", &item);

    printf("투입한 금액을 입력하시오.");
    scanf("%d", &pay);

    change = pay - item;
    k5000 = change / WON_1;    //5,000원권 개수
    change = change % WON_1;

    k1000 = change / WON_2;   //1,000원권 개수
    change = change % WON_2;

    k500 = change / WON_3;   //500원 개수
    change = change % WON_3;

    k100 = change / WON_4;   //500원 개수
    change = change % WON_4;

    printf("거스름돈은 다음과 같습니다./n 오천원권%d개, 천원권%d개 오백원%d개, 백원%d개", k5000, k1000, k500, k100);
    return 0;
}