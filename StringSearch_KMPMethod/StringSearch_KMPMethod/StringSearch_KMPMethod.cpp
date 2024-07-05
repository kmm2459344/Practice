//=========================================================
//	文字列探索　KMP法
//=========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf(),scanf()
#include <string.h> // strlen()

// 関数プロトタイプ
int kmp_match(const char* txt, const char* pat);

const int NOT_FOUND = -1;

int main()
{
	const int STRING_SIZE = 256;
	char str1[STRING_SIZE];
	char str2[STRING_SIZE];

	while (true) {
		puts("KMP法");
		printf("テキスト:");
		scanf("%s", str1);

		printf("パターン:");
		scanf("%s", str2);

		int idx = kmp_match(str1, str2);
		if (idx == NOT_FOUND) {
			puts("テキスト中にパターンは存在しません");
		}
		else {
			printf("%d文字目にマッチしました\n", idx + 1);
		}
		putchar('\n');
	}
	return 0;
}

int kmp_match(const char* txt, const char* pat)
{
	int pt; // txtをなぞるカーソル
	int pp; // patをなぞるカーソル
	int skip[1024]; // スキップテーブル

	// スキップ表の作成
	int ppt = 1;
	pp = 0;
	skip[ppt] = 0;
	while (pat[ppt] != '\0') {
		if (pat[ppt] == pat[pp]) {
			skip[++ppt] = ++pp;
		}
		else if (pp == 0) {
			skip[++ppt] = pp;
		}
		else {
			pp = skip[pp];
		}
	}

	// 探索
	pp = 0;
	pt = 0;
	while (txt[pt] != '\0' && pat[pp] != '\0') {
		if (txt[pt] == pat[pp]) {
			pt++;
			pp++;
		}
		else if (pp == 0) {
			pt++;
		}
		else {
			pp = skip[pp];
		}
	}
	if (pat[pp] == '\0') {
		return pt - pp;
	}
	return NOT_FOUND;
}