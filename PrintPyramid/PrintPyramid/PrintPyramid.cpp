//==========================================================
//	�s���~�b�h��\������
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// �֐��v���g�^�C�v
void PrintPyramid(int n);

int main()
{
	while (true) {
		int n;
		do {
			printf("���i�̃s���~�b�h�ł���? ");
			scanf("%d", &n);
		} while (n <= 0);
		PrintPyramid(n);
	}
	return 0;
}

void PrintPyramid(int n)
{
	// �������R�[�f�B���O���Ă��������B
		for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			putchar(' ');
		}
		for (int j = 1; j <= (i - 1) * 2 + 1; j++) {
			putchar('*');
		}
		putchar('\n');
	}
}