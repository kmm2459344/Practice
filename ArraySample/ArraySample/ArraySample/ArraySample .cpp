//==========================================================
//	配列サンプル
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
#include <stdlib.h>  // srand(),rand()
#include <time.h>    // time()

const int N = 5;

int main()
{
	srand(time(nullptr));

	int a[N];   // ←配列の宣言
	for (int i = 0; i < N; i++) {
		a[i] = rand() % 100;  // ←配列の要素に代入
	}
	for (int i = 0; i < N; i++) {
		printf("a[%d] =%d\n", i, a[i]);  // ←配列の要素を取得
	}
	return 0;
}