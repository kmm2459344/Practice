//=====================================
// 4値の最小値
//=====================================
#include <stdio.h>
#include <stdlib.h>  // srand(),rand()
#include <time.h>    // time()
// 関数プロトタイプ
int MinOfFour(int a, int b, int c, int d);

int main()
{
	srand(time(nullptr));
	int a = rand() % 100;
	int b = rand() % 100;
	int c = rand() % 100;
	int d = rand() % 100;
	int ans = MinOfFour(a, b, c, d);
	printf("MinOfFour(%d,%d,%d,%d) => %d\n", a, b, c, d, ans);
	return 0;
}
int MinOfFour(int a, int b, int c, int d)
{
	// ここをコーディングしてください
	int min = a;
	min > b ? min = b : min;
	min > c ? min = c : min;
	min > d ? min = d : min;

	return min;

}