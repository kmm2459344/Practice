//==========================================================
//	三角形を表示する バラエティ
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// 関数プロトタイプ
void PrintTriangleLB(int n);
void PrintTriangleLU(int n);
void PrintTriangleRU(int n);
void PrintTriangleRB(int n);

int main()
{
	while (true) {
		int n;
		do {
			printf("何段の三角形ですか? ");
			scanf("%d", &n);
		} while (n <= 0);
		PrintTriangleLB(n); printf("\n");
		PrintTriangleLU(n); printf("\n");
		PrintTriangleRU(n); printf("\n");
		PrintTriangleRB(n); printf("\n");
	}
	return 0;
}

void PrintTriangleLB(int n)
{
	// 左下側が直角の２等辺三角形
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void PrintTriangleLU(int n)
{
	// ここをコーディングしましょう。
	// 左上側が直角の２等辺三角形
	for (int i = 1; i <= n; i++) {		// i行（i = 1, 2, … , len）
		for (int j = 1; j <= n - i + 1; j++)	// 各行にlen - i個の' 'を表示
			putchar('*');
		for (int j = 1; j <= i; j++)		// 各行にi個の'*'を表示
			putchar(' ');
		putchar('\n');						// 改行
	}
}
void PrintTriangleRU(int n)
{
	// ここをコーディングしましょう。
	// 右上側が直角の２等辺三角形
	for (int i = 1; i <= n; i++) {		// i行（i = 1, 2, … , len）
		for (int j = 1; j <= i; j++)	// 各行にlen - i個の' 'を表示
			putchar(' ');
		for (int j = 1; j <= n - i; j++)		// 各行にi個の'*'を表示
			putchar('*');
		putchar('\n');						// 改行
	}

}
void PrintTriangleRB(int n) {
	// 右下側が直角の２等辺三角形
	for (int i = 1; i <= n; ++i) {
		// スペースを表示
		for (int j = 1; j <= n - i; ++j) {
			printf(" ");
		}
		// アスタリスクを表示
		for (int j = 1; j <= i; ++j) {
			printf("*");
		}
		printf("\n");
	}
}