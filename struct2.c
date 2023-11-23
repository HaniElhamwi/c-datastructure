#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    char teamName[30];
    int rate;
} Team;

typedef struct
{
   char nameSurename[30];
   int age;
   Team team;
} Player;

int main(){

Player player;
strcpy(player.nameSurename ,"Mo Salah");
player.age = 20;
player.team.rate = 9;
strcpy(player.team.teamName , "Liverpool");

printf("Team name %s team rate %d" , player.team.teamName , player.team.rate);

 


return 1 ;
};
