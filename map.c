#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    char str[100];
    printf("enter name-");
    scanf("%[^\n]s" ,str);

    int number;
    srand(time(NULL));
    number = rand()%7;
    if(number==1)
    printf("ASCENT");
    
    if(number==2)
    printf("BIND");
    
    if(number==3)
    printf("BREEZE");

    if(number==4)
    printf("HAVEN");

    if(number==5)
    printf("SPLIT");

    if(number==6)
    printf("FRACTURE");

    if(number==7)
    printf("ICEBOX");

    if(number==0)
    printf("requeue");

    printf(" for %s" ,str);
    return 0;
}