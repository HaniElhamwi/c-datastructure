#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



typedef struct node
{
    int value;
    struct node *next;
} node;



typedef struct 
{
    node *head;
    node *tail;
} queue;

void init_queue(queue *q){
    q->head = NULL;
    q->tail = NULL;

}

bool enqueue(queue *q , int value){
node * temp = malloc(sizeof(node));
if(temp == NULL) return false;
 temp->value = value;
 temp->next = NULL;
if(q->tail != NULL){
  q->tail->next = temp;
}
q->tail = temp;
if(q->head == NULL){
    q->head = temp;
}
return true;
}

int dequeue(queue *q){
    if(q->head ==NULL) return -1;
    node *temp = malloc(sizeof(node));
    temp = q->head;
    if(q->head->next){
        q->head = q->head->next;
    }else{
        q->head = NULL;
        q->tail = NULL;
    }
    int data = temp->value;
    free(temp);
    return data;
}

int main(){

    return -1;
}
