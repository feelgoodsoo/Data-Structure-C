#ifndef ___CircDblLinkedList
#define ___CircDblLinkedList
#include "Member.h"

/*--- 구조체 정의 ---*/
typedef struct __node {
    Member        data;         // 데이터 멤버
    struct __node* prev;        // 이전 노드를 가리키는 포인터
    struct __node* next;        // 다음 노드를 가리키는 포인터
} Dnode;

/*--- 원형 이중 연결 리스트 ---*/
typedef struct {
    Dnode* head;                // 더미 노드(헤드)를 가리키는 포인터
    Dnode* crnt;                // 현재 위치를 가리키는 포인터
} Dlist;

/*--- 리스트 초기화 ---*/
void Initialize(Dlist* list);

/*--- 현재 위치의 데이터를 출력 ---*/
void PrintCurrent(const Dlist* list);

/*--- 현재 위치의 데이터를 출력(개행 포함) ---*/
void PrintLnCurrent(const Dlist* list);

/*--- compare 함수가 x와 일치하는 항목을 검색 ---*/
Dnode* Search(Dlist* list, const Member* x,
    int compare(const Member* x, const Member* y));

/*--- 리스트 전체를 출력 ---*/
void Print(const Dlist* list);

/*--- 리스트 전체를 역순으로 출력 ---*/
void PrintReverse(const Dlist* list);

/*--- 다음 노드로 이동 ---*/
int Next(Dlist* list);

/*--- 이전 노드로 이동 ---*/
int Prev(Dlist* list);

/*--- p 다음에 새로운 항목 x를 삽입 ---*/
void InsertAfter(Dlist* list, Dnode* p, const Member* x);

/*--- 더미 노드 앞에 항목을 삽입 ---*/
void InsertFront(Dlist* list, const Member* x);

/*--- 더미 노드 뒤에 항목을 삽입 ---*/
void InsertRear(Dlist* list, const Member* x);

/*--- p를 삭제 ---*/
void Remove(Dlist* list, Dnode* p);

/*--- 더미 노드 앞의 항목을 삭제 ---*/
void RemoveFront(Dlist* list);

/*--- 더미 노드 뒤의 항목을 삭제 ---*/
void RemoveRear(Dlist* list);

/*--- 현재 노드의 항목을 삭제 ---*/
void RemoveCurrent(Dlist* list);

/*--- 리스트 전체를 삭제 ---*/
void Clear(Dlist* list);

/*--- 원형 이중 연결 리스트 종료 ---*/
void Terminate(Dlist* list);
#endif
