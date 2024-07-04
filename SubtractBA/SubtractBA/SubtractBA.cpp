//==========================================================
//	差分b-a
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // sscanf(),scanf(),printf()
// 関数プロトタイプ

int main(int argc, char* argv[])
{
	int a, b;
	do {
		printf("aの値:");
		scanf("%d", &a);
	} while (a <= 0);

	// ここをコーディングしてください。
	// b<=a なら再度入力させます。

	do {
		printf("bの値");
		scanf("%d", &b);
	} while (a >= b);

	printf("%d - %d = %d\n", b, a, b - a);
	return 0;
}