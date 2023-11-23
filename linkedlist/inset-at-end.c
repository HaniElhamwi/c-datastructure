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


struct node *addEnd(struct node *head , int data){
    struct node  *temPointer;
    temPointer = head;
    struct node *temp =(struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    while (temPointer->next != NULL)
    {
        temPointer = temPointer->next; 
    }
    temPointer->next = temp;
    return temp;
};

 void printer(struct node *head){
   struct node  *printer;
   printer = head;
  while (printer)
  {
    /* code */
    printf("\n printer data %d" , printer->data);
    printer = printer->next;
  }
 }
  void reversePrinter(struct node *head){
   struct node  *printer;
   printer = head;
  while (printer)
  {
    /* code */
    printf("\n printer data %d" , printer->data);
    printer = printer->next;
  }
 }
int main(){
    struct node *head = NULL;
    struct node *data =  addFront(14);
    if(head == NULL){
        head = data;
    }
    printf("pointed data %d <===>"  , data->data);
    printf("head is %d <==" , head->data);

   addEnd(head , 50);
   addEnd(head , 100);
   printer(head);
}
