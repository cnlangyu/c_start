/**
 * @file 14-return-function-pointer.c
 * @author langyu
 * @brief function return a function pointer
 * @version 0.1
 * @date 2022-04-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>

int (*select(char))(int, int);


int add(int n1, int n2){
    return n1 + n2;
}
int sub(int n1, int n2){
    return n1 - n2;
}

int calc(int (*fp)(int, int), int n1, int n2){
    // return (*fp)(n1,n2);
    return fp(n1,n2);
}

int (*select(char op))(int, int){
    switch (op)
    {
    case '+':
    return add;
    case '-':
    return sub;
    }
    return NULL;
}

void main(){

    int n1, n2;
    char op;
    printf("please input ");
    scanf("%d%c%d", &n1, &op, &n2);

    int (*fp)(int, int) = select(op);
    printf("-------\n");
    if(fp != NULL){
        printf("%d %c %d = %d\n", n1, op, n2, calc(fp, n1, n2));
    }
    else{
        printf("no select\n");
    }
    

}