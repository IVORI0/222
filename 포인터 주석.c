#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int data;
    struct _node *next;
} node;

node *head, *tail;

void init_list(void) {
    head = (node*)malloc(sizeof(node));
    tail = (node*)malloc(sizeof(node));
    head->next = tail;
    tail->next = tail;
}

node* ordered_insert(int k) { //(가)오름차순 
    node *new_node = (node*)malloc(sizeof(node));
    new_node->data = k;

    node *prev = head;
    node *curr = head->next;

    while (curr != tail && curr->data < k) {
        prev = curr;
        curr = curr->next;
    }

    new_node->next = curr;
    prev->next = new_node;

    return new_node;
}
                                   
void print_list(node* t) {         //(나)리스트 출력하는 함수 
    while (t != tail) {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");
}

int delete_node(int k) {          //(다)노드를 삭제하는 함수 
    node *prev = head;
    node *curr = head->next;

    while (curr != tail) {
        if (curr->data == k) {
            prev->next = curr->next;
            free(curr);
            return 1;
        }
        prev = curr;
        curr = curr->next;
    }

    return 0; 
}

int main(void) {
    node *t;
    init_list();
    ordered_insert(10);
    ordered_insert(5);
    ordered_insert(8);
    ordered_insert(3);
    ordered_insert(1);
    ordered_insert(7);

    printf("\nInitial Linked list is ");
    print_list(head->next);

    delete_node(8);
    print_list(head->next);

    return 0;
}





