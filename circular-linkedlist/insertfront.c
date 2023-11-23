#include<stdio.h>
#include<stdlib.h>
 
 struct node {
    int data;
    struct node *next;
};

struct node *addFrontOfList(struct node *head , int data){
  struct  node *temp = (struct node *)malloc(sizeof(struct node));
temp->data = data;
temp->next = head;
if(head != NULL){
  struct node *temp2 = head;
while (temp2->next != head)
{
  temp2 =temp2->next;
}
temp2->next = temp;
}
head = temp;
  return head;
};
int  main(){
    struct node *head = NULL;
    addFrontOfList(head , 30);
    addFrontOfList(head ,40);
    // printf("head data is %d" , head->data);
    printf("Test");
    return 1;
}