#ifndef SLL_H
#define SLL_H

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

void sll_printlist(const Node* head);
int sll_insertAtEnd(Node** head_ref, int value);
int sll_deleteAtBeginning(Node** head_ref);
int sll_deleteAtEnd(Node** head_ref);
int sll_deleteByValue(Node** head_ref, int value);
int sll_insertAtBeginning(Node** head_ref, int value);
void sll_Demo(void);
int sll_search(const Node* head, int key);
int sll_reverseList(Node** head_ref);
void delete_sll(Node* head);
int sll_getLength(const Node* head);
int sll_insertAtPosition(Node** head_ref, int value, int position);
int sll_deleteAtPosition(Node** head_ref, int position);

#endif