
#include<stdio.h>
#include<stdlib.h>
#define MAX_LEN 5



int stack_arr[MAX_LEN];
int top = -1;

void push(int x)
{
    
    if(top == MAX_LEN -1){
    printf("stack is full\n");
    return;
}
top++;
stack_arr[top] = x;
}
int pop(){
    if(top == -1){
        printf("\nstack is empty");
        return -1;
    }
    int data = stack_arr[top];
    printf("%d\n" , data);
    top--;
    return data;
}

int main(){

push(10);
push(20);
push(30);
push(40);
push(50);
push(60);

pop();
pop();
pop();
pop();
pop();
pop();



// printf("%d\n" , stack_arr[0]);
// printf("%d\n" , stack_arr[1]);
// printf("%d\n" , stack_arr[2]);
// printf("%d\n" , stack_arr[3]);


    return 1;
}
