#include<stdio.h>
#include<stdlib.h>
 
 struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *addFrontOfList(struct node *head , int data){
  struct  node *temp = (struct node *)malloc(sizeof(struct node));

  temp->data= data;
  temp->prev= NULL;
   temp->next= head;
  if(head == NULL){
   head = temp;
  }else{
     head->prev = temp;
    head = temp;
  }
 
  return head;
};


int main(){


    struct node *head;

    addFrontOfList(head , 30);
    addFrontOfList(head ,40);
    printf("head one %d \n" , head->data);
    // printf("head two %d \n" , head->next->data);
    return 1;
}