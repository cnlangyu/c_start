#include<stdio.h>

int *func(int num){
    if(num == 0){
        return 0;
    }
    if(num == 1){
        return &num;
    }
    return num * (*func(num - 1));
}

void main(void){
    int num = 4;
    int *pn = func(num);
    printf("%d! = %d\n", num, *pn);
}