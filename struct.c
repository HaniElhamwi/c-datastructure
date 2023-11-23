#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct  Book
{
    char name[30];
    float price;
    int paper;

};

typedef struct {
   char nameSurename[30];
   int age;
}Writer ;

int main(){


    struct Book book1;
    strcpy(book1.name, "Book1");
    book1.paper = 30;
    book1.price = 120; 
    printf("Info %s %f %d" , book1.name , book1.price, book1.paper);

    // Assign a pointer 
    struct Book *book2 = (struct Book*)malloc(sizeof(struct Book));
    strcpy(book2->name , "Stroy 2");
    book2->paper = 40;
    book2->price = 300;
    printf("Info %s %f %d" , book2->name , book2->price, book2->paper);


    // using typedef
    Writer writer1;
    strcpy(writer1.nameSurename , "Hani Elhamwi");
    writer1.age = 25;


    // typedef with pointers
    Writer *writer2 =(Writer*)malloc(sizeof(Writer));
    writer2->age = 30;
    strcpy(writer2->nameSurename , "Mo Salah");
    printf("Info %d  %s" , writer2->age , writer2->nameSurename);
    return 1;
}

