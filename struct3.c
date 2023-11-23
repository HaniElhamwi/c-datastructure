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
   Team *team;
} Player;
int main(){
Team *team1 = (Team*)malloc(sizeof(Team));
strcpy(team1->teamName , "Liverpool");
    team1->rate = 7;
    Player p1;
    p1.team = team1;
    p1.age =30;
    strcpy(p1.nameSurename , "Mo Salah");
    printf(" age is  %d name  %s  Plays for %s" , p1.age , p1.nameSurename , p1.team->teamName);                
    return 1;
}