//insertion of node at the begining in doublylinklist

#include<stdio.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
void push(struct node** head_ref,int data){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
}