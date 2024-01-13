#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* insert(struct node *head , int data){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;

    return head;
}

void printList(struct node *head){
    while(head != NULL){
        printf("%d " , head->data);
        head = head->next;
    }
}

int findMax(struct node* head){
int max = head->data;
while(head != NULL){
 if(head->data > max) max = head->data;
    head= head->next;
}
return max;
}
struct node* addMax(struct node *head , int max){
    while (head != NULL)
    {
     head->data += max;
     printf("%d    " , head->data);
     head = head->next;
    }
    return head;
}
int main(){
    struct node *head = NULL;
  head=  insert(head , 1);
  head=  insert(head , 2);
  head=  insert(head , 3);
  head=  insert(head , 5);
  head=  insert(head , 6);
  head=  insert(head , 7);

 int max = findMax(head);
 head = addMax(head , max);
   printList(head);
        return 0;
}
