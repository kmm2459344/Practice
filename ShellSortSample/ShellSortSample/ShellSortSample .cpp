//=========================================================
//	シェルソート
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   // printf(),scanf()
#include <stdlib.h>  // srand(),rand()
#include <time.h>    // time()
// 関数プロトタイプ
void ShellSort(int array[], int arraySize);
int getRandRange(int min, int max);
void dumpArray(const int array[], int arraySize);

int main()
{
	srand(time(nullptr));
	int arraySize;
	int* array;

	while (true) {
		do {
			printf("要素数:");
			scanf("%d", &arraySize);
		} while (arraySize <= 2);

		array = (int*)calloc(arraySize, sizeof(int));
		if (array == nullptr) {
			printf("calloc()失敗\n");
			exit(1);
		}
		for (int i = 0; i < arraySize; i++) {
			array[i] = getRandRange(1, 100);
		}
		dumpArray(array, arraySize);
		ShellSort(array, arraySize);
		printf("昇順にソートしました\n");
		dumpArray(array, arraySize);

		free(array);
	}
	return 0;
}

void ShellSort(int array[], int arraySize)
{
	for (int h = arraySize / 2; h > 0; h /= 2) {
		for (int i = h; i < arraySize; i++) {
			int tmp = array[i];
			int j;
			for (j = i - h; j >= 0 && array[j] > tmp; j -= h) {
				array[j + h] = array[j];
			}
			array[j + h] = tmp;
		}
	}
}

void dumpArray(const int array[], int arraySize)
{
	for (int i = 0; i < arraySize; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}
}

int getRandRange(int min, int max)
{
	int wid = max - min + 1;
	return min + rand() % wid;
}