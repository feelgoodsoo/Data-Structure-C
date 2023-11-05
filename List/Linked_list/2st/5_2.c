#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int main(void) {
    linkedList_h* L;
    listNode* p;
    L = createLinkedList_h();  // Create an empty list

    printf("(1) Insert [Mon],[Wed],[Sun] nodes into the list! \n");
    insertLastNode(L, "Mon");
    insertLastNode(L, "Wed");
    insertLastNode(L, "Sun");
    printList(L);

    printf("\n(2) Search for the [Wed] node in the list! \n");
    p = searchNode(L, "Wed");
    if (p == NULL) printf("The data you are looking for is not found.\n");
    else printf("Found [%s].\n", p->data);

    printf("\n(3) Insert a [Fri] node after [Wed] in the list! \n");
    insertMiddleNode(L, p, "Fri");
    printList(L);

    printf("\n(4) Delete the [Sun] node from the list! \n");
    p = searchNode(L, "Sun");
    deleteNode(L, p);
    printList(L);

    printf("\n(5) Reverse the order of the list! \n");
    reverse(L);
    printList(L);

    freeLinkedList_h(L);  // Free the memory of the list
    getchar();

    return 0;
}
