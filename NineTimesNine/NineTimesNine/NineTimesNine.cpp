//==========================================================
//	���\��\������
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()

int main()
{
	//��s��
	printf("   | �P �Q �R �S �T �U �V �W �X\n");
	//��s��
	printf("---+----------------------------\n");

	//�O�s�ڈȉ�
	for (int i = 1; i <= 9; i++) {
		//����2�񕶂̋L��
		printf("%2d", i);
		printf(" |");
		//5��ڈȉ��̔z��
		for (int j = 1; j <= 9; j++) {
			printf("%3d", i * j);			// ���s
		}
		putchar('\n');
	}

	return 0;
}