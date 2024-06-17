//==========================================================
//	配列サンプル 初期化
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()

int main()
{
	int a[] = { 1, 2, 3, 4, 5 }; // ←配列の初期化子
	int na = sizeof(a) / sizeof(a[0]);

	printf("配列aの要素数は、%dです\n", na);

	for (int i = 0; i < na; i++) {
		printf("a[%d] =%d\n", i, a[i]);
	}
	return 0;
}