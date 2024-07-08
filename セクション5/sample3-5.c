#include <stdio.h>
 
void main(){
    int num;
    printf("値を入力：");
    scanf("%d",&num);

    switch(num){
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        default:
            printf("不適切な値です\n");
            break;
    }
}