// 원형 이중 연결 리스트를 사용하는 프로그램
#include <stdio.h>
#include <stdlib.h>
#include "Member.h"
#include "CircDblLinkedList.h"

/*--- 메뉴 ---*/
typedef enum Menu{
    TERMINATE, INS_FRONT, INS_REAR,  RMV_FRONT, RMV_REAR, PRINT_CRNT,
    RMV_CRNT,  SRCH_NO,   SRCH_NAME, PRINT_ALL, NEXT, PREV, CLEAR
} Menu;

/*--- 메뉴 선택 ---*/
Menu SelectMenu(void)
{
    int  ch;
    char *mstring[] = {
        "Insert into Head",    "Insert into Tail",    "Delete Head",
        "Delete tail",     "print current node",    "delete current node",
        "Search by Num",         "Search by Name",        "list all nodes",
        "move back current node", "move front current node", "delete all",
    };
    do {
        for (int i = TERMINATE; i < CLEAR; i++) {
            printf("(%2d) %-18.18s  ", i + 1, mstring[i]);
            if ((i % 3) == 2)
                putchar('\n');
        }
        printf("(0) Done: ");
        scanf("%d", &ch);
    } while (ch < TERMINATE || ch > CLEAR);
    return (Menu)ch;
}

/*--- 메인 ---*/
int main(void)
{
    Menu menu;
    Dlist list;
    Initialize(&list);              // 원형 이중 연결 리스트를 초기화
    do {
        Member x;
        switch (menu = SelectMenu()) {
         /* 머리에 노드를 삽입 */
         case INS_FRONT :
                x = ScanMember("Insert into Head", MEMBER_NO | MEMBER_NAME);
                InsertFront(&list, &x);
                break;

         /* 꼬리에 노드를 삽입 */
         case INS_REAR :
                x = ScanMember("Insert into Tail", MEMBER_NO | MEMBER_NAME);
                InsertRear(&list, &x);
                break;

         /* 머리 노드를 삭제 */
         case RMV_FRONT :
                RemoveFront(&list);
                break;

         /* 꼬리 노드를 삭제 */
         case RMV_REAR :
                RemoveRear(&list);
                break;

         /* 선택한 노드의 데이터를 출력 */
         case PRINT_CRNT :
                PrintLnCurrent(&list);
                break;

         /* 선택한 노드를 삭제 */
         case RMV_CRNT :
                RemoveCurrent(&list);
                break;

         /* 번호로 Search */
         case SRCH_NO :
                x = ScanMember("Search", MEMBER_NO);
                if (Search(&list, &x, MemberNoCmp) != NULL)
                    PrintLnCurrent(&list);
                else
                    puts("[Number] No data Found");
                break;

         /* 이름으로 Search */
         case SRCH_NAME :
                x = ScanMember("Search", MEMBER_NAME);
                if (Search(&list, &x, MemberNameCmp) != NULL)
                    PrintLnCurrent(&list);
                else
                    puts("[Name] No data Found");
                break;

         /* 모든 노드의 데이터를 출력 */
         case PRINT_ALL :
                Print(&list);
                break;

         /* 선택한 노드를 뒤쪽으로 진행 */
         case NEXT :
                Next(&list);
                break;

         /* 선택한 노드를 앞쪽으로 진행 */
         case PREV :
                Prev(&list);
                break;

         /* 모든 노드를 삭제 */
         case CLEAR :
                Clear(&list);
                break;
        }
    } while (menu != TERMINATE);
    Terminate(&list);           // 원형 이중 연결 리스트 종료

    return 0;
}
