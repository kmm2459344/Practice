//=========================================================
//	ハノイの塔　解法
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   // printf(),scanf()

typedef enum {
	A=1,
	B=2,
	C=3,
} POS;

// 関数プロトタイプ
void move(int no, POS from, POS to);

int main()
{
	while (true) {
		int n;
		do {
			printf("ハノイの塔\a円盤の数:");
			scanf("%d", &n);
		} while (n < 1);

		move(n, A, C);
	}
	return 0;
}

void move(int no, POS from, POS to)
{
	//char A = 'A';
	//char B = 'B';
	//char C = 'C';

	char ChTMP = 'A';
	char toTMP = 'A';

	POS tmp =(POS)((A + B + C) - from - to);
	if (no > 1) {
		move(no - 1, from, tmp);
	}

	switch (from)
	{
	case 1:
		ChTMP = 'A';
		break;
	case 2:
		ChTMP = 'B';
		break;
	case 3:
		ChTMP = 'C';
		break;
	}

	switch (to)
	{
	case 1:
		toTMP = 'A';
		break;
	case 2:
		toTMP = 'B';
		break;
	case 3:
		toTMP = 'C';
		break;
	}

	printf("円盤[%d]を %c軸から %c軸へ移動\n", no, ChTMP, toTMP);
	if (no > 1) {
		move(no - 1, tmp, to);
	}
}