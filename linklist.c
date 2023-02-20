#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};
//linklist traversal
 void linkedlisttraversal(struct node *ptr)
 {
    while (ptr != NUll)
    {
        printf("element: %d", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *NUll;
    // allocate memory for nodes in the linklist in heap

    head = (struct node *) malloc(sizeof(struct node));
    second = (struct node *) malloc(sizeof(struct node));
    third = (struct node *) malloc(sizeof(struct node));

    // link first and second notes
    head-> data = 7;
    head-> next = second;

    second-> data = 22;
    second->next = third;

    third-> data = 44;
    third->next = NUll;

    linkedlisttraversal(head);
    return 0;
}
