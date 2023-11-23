#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node *link;
}*top =NULL;

struct node  *push(int data){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = top;
    top = temp;
    return temp;
}

struct node *pop(){
    if(top == NULL){
        printf("Stack is empty\n");
        return -1;
    }
    else{
        int popData = top->data;
        struct node  *temp = top;
        top =top->link;
        free(temp);
        printf("%d" , popData);
        return popData;
    }
}


int main(){


push(10);
push(20);
push(30);
push(40);
pop();
pop();


return -1;
}