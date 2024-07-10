//==========================================================
//	�����N���X�g
//==========================================================
#include "LinkedList.h"
#include <stdio.h>   // printf(),puts()
#include <stdlib.h>  // calloc(),free()

// �֐��v���g�^�C�v
static Node* allocNode(void);
static void setNode(Node* node, const Member x, Node* next);
static void dumpMem(const void* adrs, int dumpSize, const char* title);

// ���`���X�g�̏�����
void Initialize(List* list)
{
	list->head = nullptr;
	list->current = nullptr;
}
// ����
Node* Search(List* list, const Member* x, int compare(const Member* a, const Member* b))
{
	Node* node = list->head;
	while (node != nullptr) {
		if (compare(&node->data, x) == 0) {
			list->current = node;
			return node;
		}
		node = node->next;
	}
	// ������Ȃ�����!!
	return nullptr;
}
// �擪�Ƀm�[�h��}��
void InsertFront(List* list, const Member* x)
{
	Node* next = list->head;
	Node* newNode = allocNode();
	setNode(newNode, *x, next);
	list->head = newNode;
	list->current = newNode;
}
// �����Ƀm�[�h��}��
void InsertRear(List* list, const Member* x)
{
	if (list->head == nullptr) {
		InsertFront(list, x);
	}
	else {
		Node* node = list->head;
		while (node->next != nullptr) {
			node = node->next;
		}
		Node* newNode = allocNode();
		setNode(newNode, *x, nullptr);
		node->next = newNode;
		list->current = newNode;
	}
}
// �擪�m�[�h���폜
void RemoveFront(List* list)
{
	if (list->head != nullptr) {
		Node* delNode = list->head;
		list->head = delNode->next;
		list->current = delNode->next;
		free(delNode);
	}
}
// �����m�[�h���폜
void RemoveRear(List* list)
{
	if (list->head != nullptr) {
		if (list->head->next == nullptr) {
			RemoveFront(list);
		}
		else {
			Node* node = list->head;
			Node* prev;
			do {
				prev = node;
				node = node->next;
			} while (node->next != nullptr);
			prev->next = nullptr;
			list->current = prev;
			free(node);
		}
	}
}
// ���ڃm�[�h���폜
void RemoveCurrent(List* list)
{
	if (list->current != nullptr) {
		if (list->current == list->head) {
			RemoveFront(list);
		}
		else {
			Node* current = list->current;
			Node* node = list->head;
			while (node->next != current) {
				node = node->next;
			}
			node->next = current->next;
			free(current);
			list->current = node;
		}
	}
}
// �S�m�[�h���폜
void Clear(List* list)
{
	while (list->head != nullptr) {
		RemoveFront(list);
	}
	list->current = nullptr;
}
// ���ڃm�[�h�̃f�[�^��\��
void PrintCurrent(const List* list)
{
	Node* current = list->current;
	if (current == nullptr) {
		printf("���ڃm�[�h�͂���܂���");
	}
	else {
		PrintMember(&current->data);
	}
}
// ���ڃm�[�h�̃f�[�^��\��(���s����)
void PrintLnCurrent(const List* list)
{
	PrintCurrent(list);
	putchar('\n');
}
// �S�m�[�h�̃f�[�^�����X�g���ɕ\��
void Print(const List* list)
{
	Node* node = list->head;
	if (node == nullptr) {
		puts("�m�[�h������܂���");
	}
	else {
		puts("�y�ꗗ�\�z");
		while (node != nullptr) {
			PrintLnMember(&node->data);
			node = node->next;
		}
	}
}
// ���`���X�g�̌�n��
void Terminate(List* list)
{
	Clear(list);
}

static Node* allocNode(void)
{
	Node* node = (Node*)calloc(1, sizeof(Node));
	if (node == nullptr) {
		puts("Calloc���s");
		exit(1);
	}
	return node;
}
static void setNode(Node* node, const Member x, Node* next)
{
	node->data = x;
	node->next = next;
}
void DumpList(List* list)
{
	char nodeName[100];
	int num = 0;
	puts("�yList�_���v�z");
	dumpMem(list, sizeof(List), "list");
	Node* ptr = list->head;
	while (ptr != nullptr) {
		snprintf(nodeName, sizeof(nodeName), "node(%d)", num++);
		dumpMem(ptr, sizeof(Node), nodeName);
		ptr = ptr->next;
	}
}

static void dumpMem(const void* _adrs, int dumpSize, const char* title)
{
	const int lineSize = 16;
	printf("--%s--\n", title);
	const unsigned char* adrs = (const unsigned char*)_adrs;

	const unsigned char* end = &adrs[dumpSize];
	while (adrs < end) {
		printf("%p:", adrs);
		for (int i = 0; i < lineSize; i++) {
			if (&adrs[i] < end) {
				printf(" %02x", adrs[i]);
			}
			else {
				printf("   ");
			}
		}
		printf(" : ");
		for (int i = 0; i < lineSize; i++) {
			if (&adrs[i] < end) {
				int c = (adrs[i] >= 0x20) ? adrs[i] : '.';
				printf("%c", c);
			}
			else {
				printf(" ");
			}
		}
		putchar('\n');
		adrs += lineSize;
	}
	putchar('\n');
	putchar('\n');
	putchar('\n');
}