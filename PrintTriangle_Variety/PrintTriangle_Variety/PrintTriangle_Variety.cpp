//==========================================================
//	�O�p�`��\������ �o���G�e�B
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// �֐��v���g�^�C�v
void PrintTriangleLB(int n);
void PrintTriangleLU(int n);
void PrintTriangleRU(int n);
void PrintTriangleRB(int n);

int main()
{
	while (true) {
		int n;
		do {
			printf("���i�̎O�p�`�ł���? ");
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
	// �����������p�̂Q���ӎO�p�`
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void PrintTriangleLU(int n)
{
	// �������R�[�f�B���O���܂��傤�B
	// ���㑤�����p�̂Q���ӎO�p�`
	for (int i = 1; i <= n; i++) {		// i�s�ii = 1, 2, �c , len�j
		for (int j = 1; j <= n - i + 1; j++)	// �e�s��len - i��' '��\��
			putchar('*');
		for (int j = 1; j <= i; j++)		// �e�s��i��'*'��\��
			putchar(' ');
		putchar('\n');						// ���s
	}
}
void PrintTriangleRU(int n)
{
	// �������R�[�f�B���O���܂��傤�B
	// �E�㑤�����p�̂Q���ӎO�p�`
	for (int i = 1; i <= n; i++) {		// i�s�ii = 1, 2, �c , len�j
		for (int j = 1; j <= i; j++)	// �e�s��len - i��' '��\��
			putchar(' ');
		for (int j = 1; j <= n - i; j++)		// �e�s��i��'*'��\��
			putchar('*');
		putchar('\n');						// ���s
	}

}
void PrintTriangleRB(int n) {
	// �E���������p�̂Q���ӎO�p�`
	for (int i = 1; i <= n; ++i) {
		// �X�y�[�X��\��
		for (int j = 1; j <= n - i; ++j) {
			printf(" ");
		}
		// �A�X�^���X�N��\��
		for (int j = 1; j <= i; ++j) {
			printf("*");
		}
		printf("\n");
	}
}