#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "InsertLinkedList.h"

int main(void) {
    linkedList_h* L;
    L = createLinkedList_h();
    printf("(1) Creating an empty list! \n");
    printList(L);

    printf("\n(2) Inserting a [Wed] node into the list! \n");
    insertFirstNode(L, "Wed");
    printList(L);

    printf("\n(3) Inserting a [Fri] node at the end of the list! \n");
    insertLastNode(L, "Fri");
    printList(L);

    printf("\n(4) Inserting a [Mon] node at the beginning of the list! \n");
    insertFirstNode(L, "Mon");
    printList(L);

    printf("\n(5) Freeing the list space to create an empty list! \n");
    freeLinkedList_h(L);
    printList(L);

    getchar();
    return 0;
}
