//==========================================================
//	�O�p�`��\������
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// �֐��v���g�^�C�v
void PrintTriangle(int n);

int main()
{
	while (true) {
		int n;
		do {
			printf("���i�̎O�p�`�ł���? ");
			scanf_s("%d", &n);
		} while (n <= 0);
		PrintTriangle(n);
	}
	return 0;
}

void PrintTriangle(int n)
{
	for (int i = 0; i > n; i--) {
		putchar(' ');
		for (int j = n; j < i; j++){
			putchar('*');
			putchar('\n');
		}
	}
}