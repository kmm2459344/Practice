//==========================================================
//	�O�p�`��\������ �o���G�e�B
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
			scanf("%d", &n);
		} while (n <= 0);
		PrintTriangleLB(n); printf("\n");
		//PrintTriangleLU(n); printf("\n");
		//PrintTriangleRU(n); printf("\n");
		//PrintTriangleRB(n); printf("\n");
	}
	return 0;
}

void PrintTriangleLB(int n)
{
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
}
void PrintTriangleRU(int n)
{
	// �������R�[�f�B���O���܂��傤�B
	// �E�㑤�����p�̂Q���ӎO�p�`
}
void PrintTriangleRB(int n) {

}