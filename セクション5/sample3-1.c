#include <stdio.h>

void main(){
    int a;
    printf("数値を入力");
    scanf("%d", &a);
    if (a > 2) {
        printf("aは2よりも大きい。\n");
    }
    else{
        printf("aは2以下。\n");
    }
}