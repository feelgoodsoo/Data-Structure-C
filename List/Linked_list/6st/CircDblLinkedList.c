// ���� ���� ���� ����Ʈ(�ҽ�)
#include <stdio.h>
#include <stdlib.h>
#include "Member.h"
#include "CircDblLinkedList.h"

/*--- 1���� ��带 �������� ���� ---*/
static Dnode* AllocDnode(void)
{
    return calloc(1, sizeof(Dnode));
}

/*--- ����� �� ������� ���� ----*/
static void SetDnode(Dnode* n, const Member* x, const Dnode* prev, const Dnode* next)
{
    n->data = *x;       // ������
    n->prev = prev;     // ���� ��忡 ���� ������
    n->next = next;     // ���� ��忡 ���� ������
}

/*--- ����Ʈ�� ��� �ִ��� �˻� ---*/
static int IsEmpty(const Dlist* list)
{
    return list->head->next == list->head;
}

/*--- ����Ʈ�� �ʱ�ȭ ---*/
void Initialize(Dlist* list)
{
    Dnode* dummyNode = AllocDnode();            // ���� ��� ����
    list->head = list->crnt = dummyNode;
    dummyNode->prev = dummyNode->next = dummyNode;
}

/*--- ������ ����� �����͸� ��� ---*/
void PrintCurrent(const Dlist* list)
{
    if (IsEmpty(list))
        printf("Node does not exist.");
    else
        PrintMember(&list->crnt->data);
}

/*--- ������ ����� �����͸� ���(�� �ٲ� ���� �߰�) ---*/
void PrintLnCurrent(const Dlist* list)
{
    PrintCurrent(list);
    putchar('\n');
}

/*--- compare �Լ��� x�� ��ġ�ϴ� ��带 �˻� ---*/
Dnode* Search(Dlist* list, const Member* x,
    int compare(const Member* x, const Member* y))
{
    Dnode* ptr = list->head->next;
    while (ptr != list->head) {
        if (compare(&ptr->data, x) == 0) {
            list->crnt = ptr;
            return ptr;                 // �˻� ����
        }
        ptr = ptr->next;
    }
    return NULL;                        // �˻� ����
}

/*--- ��� ����� �����͸� ����Ʈ ������� ��� ---*/
void Print(const Dlist* list)
{
    if (IsEmpty(list))
        puts("Node does not exist.");
    else {
        Dnode* ptr = list->head->next;
        puts("all lists");
        while (ptr != list->head) {
            PrintLnMember(&ptr->data);
            ptr = ptr->next;            // ���� ��� ����
        }
    }
}

/*--- ��� ����� �����͸� ����Ʈ ������ �������� ��� ---*/
void PrintReverse(const Dlist* list)
{
    if (IsEmpty(list))
        puts("Node does not exist.");
    else {
        Dnode* ptr = list->head->prev;

        puts("all lists");
        while (ptr != list->head) {
            PrintLnMember(&ptr->data);
            ptr = ptr->prev;            // ���� ��� ����
        }
    }
}

/*--- ������ ��带 �������� ���� ---*/
int Next(Dlist* list)
{
    if (IsEmpty(list) || list->crnt->next == list->head)
        return 0;                       // ������ �� ����
    list->crnt = list->crnt->next;
    return 1;
}

/*--- ������ ��带 �������� ���� ---*/
int Prev(Dlist* list)
{
    if (IsEmpty(list) || list->crnt->prev == list->head)
        return 0;                       // �ǵ��ư� �� ����
    list->crnt = list->crnt->prev;
    return 1;
}

/*--- p�� ����Ű�� ��� �ٷ� ���� ��带 ���� ---*/
void InsertAfter(Dlist* list, Dnode* p, const Member* x)
{
    Dnode* ptr = AllocDnode();
    Dnode* nxt = p->next;

    p->next = p->next->prev = ptr;
    SetDnode(ptr, x, p, nxt);
    list->crnt = ptr;                       // ������ ��带 ����
}

/*--- �Ӹ��� ��带 ���� ---*/
void InsertFront(Dlist* list, const Member* x)
{
    InsertAfter(list, list->head, x);
}

/*--- ������ ��带 ���� ---*/
void InsertRear(Dlist* list, const Member* x)
{
    InsertAfter(list, list->head->prev, x);
}

/*--- p�� ����Ű�� ��带 ���� ---*/
void Remove(Dlist* list, Dnode* p)
{
    p->prev->next = p->next;
    p->next->prev = p->prev;
    list->crnt = p->prev;       // ������ ����� ���� ��带 ����
    free(p);
    if (list->crnt == list->head)
        list->crnt = list->head->next;
}

/*--- �Ӹ� ��带 ���� ---*/
void RemoveFront(Dlist* list)
{
    if (!IsEmpty(list))
        Remove(list, list->head->next);
}

/*--- ���� ��带 ���� ---*/
void RemoveRear(Dlist* list)
{
    if (!IsEmpty(list))
        Remove(list, list->head->prev);
}

/*--- ������ ��带 ���� ---*/
void RemoveCurrent(Dlist* list)
{
    if (list->crnt != list->head)
        Remove(list, list->crnt);
}

/*--- ��� ��带 ���� ---*/
void Clear(Dlist* list)
{
    while (!IsEmpty(list))          // �� �� ������
        RemoveFront(list);          // �Ӹ� ��带 ����
}

/*--- ���� ���� ���� ����Ʈ ���� ---*/
void Terminate(Dlist* list)
{
    Clear(list);                    // ��� ��带 ����
    free(list->head);               // ���� ��带 ����
}
