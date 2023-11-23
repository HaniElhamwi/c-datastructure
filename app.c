
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


typedef struct Node{
  int value;
  struct Node *next;
}Node;


typedef struct {
  Node *head;
  Node *tail;
  int size;
}Queue;

Queue *create_queue();
int size(Queue *queue);
bool is_empty(Queue *queue);
int peek(Queue *queue , bool *status);
void enqueue(Queue *queue , int value);
int dequeue(Queue *queue , bool *status);
void destroy(Queue *queue);



// void print_queue(Queue *queue);
// void clear(Queue *queue);

int main(){

  Queue *queue = create_queue();
  if(is_empty(queue)) printf("Queue is empty\n");
  enqueue(queue , 5);
  if(!is_empty(queue)) printf("Queue is not empty\n");
  enqueue(queue , 6);
  enqueue(queue , 10);
  printf("queue size is : %d" , queue->size);

  return 0;
   
} 


Queue *create_queue(){
  Queue *queue = malloc(sizeof(Queue));
  queue->head = NULL;
  queue->tail = NULL;
  queue->size = 0;
  return queue;
}
int size(Queue *queue){
  return queue->size;
}
bool is_empty(Queue *queue){
  if(queue->size == 0){
    return 1;
  }else{
    return 0;
  }
}
int peek(Queue *queue , bool *status){
  if(queue->size == 0){
    *status = false;
    return 0;
  }else{
    *status = true;
    return queue->head->value;
  }
}
void enqueue(Queue *queue , int value){
  Node *node = malloc(sizeof(Node));
  node->value = value;
  node->next = NULL; 
   if(is_empty(queue)){
    queue->head = node;
    queue->tail = node;
}else{
  queue->tail->next = node;
  queue->tail = node;
}
  queue->size +=1;
}
int dequeue(Queue *queue , bool *status){
  if(is_empty(queue)){
    *status = false;
    return NULL;
  }else{
    int value;
    *status = true;
    Node *temp = queue->head;
    if(queue->size == 1){
      queue->head = NULL;
      queue->tail = NULL;
    }
    value = temp->value;
    free(temp);
    queue->size--;

    return value;
  }
}
void destroy(Queue *queue);














// push(1);
// push(2);
// push(2);
// push(2);
// push(2);

// int stack_arr[MAX];
// int top = -1;

// void push(int data){

//   if(MAX - 1 == top){
//    printf("the stack if full");
//     return;
//   }
//   top = top + 1 ;
//   stack_arr[top] = data;
// }

// int pop(){
//   if(top != -1){
//     int value ;
//     value = stack_arr[top];
//     top = top - 1;
//     return value;
//   }
//   else{
//     printf("the stack is empty");
//   }
// }








// print nodes start

// struct node {
// int data;
// struct node *link;
// };

// void print_data(struct node *head){

//     printf("ITS PRINTING");
//     printf("%d its head" , head);
//     struct node  *temp = head;
//     while(temp != NULL){
//      printf("%d" , temp->data);
//         temp = temp->link;
//     }
// }


// int main(){
//     struct node *head = NULL;
//     head = (struct node *)malloc(sizeof(struct node));
//     head->data = 35;
//     head->link = NULL;


//   struct node *current = malloc(sizeof(struct node));
//   current->data = 59;
//   current->link = NULL;
//   head->link = current;
//   struct node *current2 = malloc(sizeof(struct node));
//   current2->data = 100;
//   current->link = current2;
//   current2->link = NULL;
//   print_data(head);
//   return 0;

// } 


// print nodes ends


// void enterAtTheEnd(struct node *head){

//     struct node *ptr = head;
//     struct node *current = malloc(sizeof(struct node));
//     current->data = 2001;
//     current->link = NULL;
//     while(ptr->link != NULL){
//         ptr = ptr->link;
//     }
//     ptr->link = current;
//     current->link = NULL;
// }

// void newFunc(struct node *head){

//     struct node *temp = malloc(sizeof(struct node));
//     temp->data = 203;
//     temp->link = head;
//     head = temp;

// }

// void deleteLastNode(struct node *head){

//     struct node *temp = malloc(sizeof(struct node));
//     temp = head;
  
//   while (temp->link->link != NULL)
//   {
//     /* code */
//     temp = temp->link;
//   }
//   printf("%d" ,temp->link->data);
// //   free malloc
//  free(temp->link);
//  temp->link = NULL;

  
// }

// void print_data(struct node *head){

//     printf("ITS PRINTING");
//     printf("%d its head" , head);
//     struct node  *temp = head;
//     while(temp != NULL){
//      printf("%d" , temp->data);
//         temp = temp->link;
//     }
// }

