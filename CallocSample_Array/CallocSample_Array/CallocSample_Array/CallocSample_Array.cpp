//==========================================================
//	callocサンプル 配列
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
#include <stdlib.h>  // srand(),rand()
#include <time.h>    // time()

int main()
{
	srand(time(nullptr));

	int na;
	printf("要素数:");
	scanf("%d", &na);

	int* a = (int*)calloc(na, sizeof(int));
	if (a == nullptr) {
		puts("記憶域の確保に失敗しました\n");
	}
	else {
		printf("%d個の整数を入力します\n", na);
		for (int i = 0; i < na; i++) {
			a[i] = rand() % 100;
		}
		printf("各要素の値は次のとおりです\n");
		for (int i = 0; i < na; i++) {
			printf("a[%d] = %d\n", i, a[i]);
		}
		free(a);
	}
	return 0;
}