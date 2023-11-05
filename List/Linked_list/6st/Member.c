// ȸ�� ������ Member(�ҽ�)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Member.h"

/*--- ȸ�� ��ȣ �� �Լ� ---*/
int MemberNoCmp(const Member* x, const Member* y)
{
    return x->no < y->no ? -1 : x->no > y->no ? 1 : 0;
}

/*--- ȸ�� �̸� �� �Լ� ---*/
int MemberNameCmp(const Member* x, const Member* y)
{
    return strcmp(x->name, y->name);
}

/*--- ȸ�� ������(��ȣ�� �̸�)�� ���(�� �ٲ� ����) ---*/
void PrintMember(const Member* x)
{
    printf("%d %s", x->no, x->name);
}

/*--- ȸ�� ������(��ȣ�� �̸�)�� ���(�� �ٲ� ����) ---*/
void PrintLnMember(const Member* x)
{
    printf("%d %s\n", x->no, x->name);
}

/*--- ȸ�� ������(��ȣ�� �̸�)�� ���� ---*/
Member ScanMember(const char* message, int sw)
{
    Member temp;
    printf("%sput data.\n", message);
    if (sw & MEMBER_NO) { printf("num: ");  scanf("%d", &temp.no); }
    if (sw & MEMBER_NAME) { printf("name: ");  scanf("%19s", &temp.name); }
    return temp;
}
