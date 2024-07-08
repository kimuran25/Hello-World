#include <stdio.h>
#include <stdlib.h>

int GetRandom();

void main(){
    int dice;
    dice = GetRandom();

    if (dice==2 || dice==4 ||dice==6){
        printf("丁");
    } 
    else{
        printf("半");
    }
    printf("%d", dice);
}

int GetRandom(){
    return (int)rand()%6;
}