//==========================================================
//	a〜bの総和
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // sscanf(),scanf(),printf()
// 関数プロトタイプ
int SumOfFromTo(int from, int to);
void calcSum(int a, int b);

int main(int argc, char* argv[])
{
	int a, b;
	if (argc >= 3) {
		sscanf(argv[1], "%d", &a);
		sscanf(argv[2], "%d", &b);
		calcSum(a, b);
	}
	else {
		while (true) {
			printf("aの値:");
			scanf("%d", &a);
			printf("bの値:");
			scanf("%d", &b);
			calcSum(a, b);
		}
	}
	return 0;
}
void calcSum(int a, int b)
{
	int sum = SumOfFromTo(a, b);
	printf("%d～%dの総和は%d\n", a, b, sum);
}

int SumOfFromTo(int from, int to)
{
	// ここをコーディングしてください。
	// from<to の場合も対応してください。


}