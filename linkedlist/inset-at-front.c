#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};

struct node *addFront( int data){
 struct node *temp =(struct node *)malloc(sizeof(struct node));
 temp->data = data;
 temp->next = NULL;
return temp;
};
int main(){
    struct node *head = NULL;
    struct node *data =  addFront(14);
    if(head == NULL){
        head = data;
    }
    printf("pointed data %d <===>"  , data->data);
     printf("head is %d <==" , head->data);
    // (struct node *)malloc(sizeof(struct node))
}
