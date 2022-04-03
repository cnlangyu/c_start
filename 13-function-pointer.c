/**
 * @file 13-function-pointer.c
 * @author function pointer
 * @brief 
 * @version 0.1
 * @date 2022-04-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>

int square(int num){
    return num * num;
}

int compute(int (*fp)(int), int num){
    return ((*fp)(num));
}

int add(int n1, int n2){
    return n1 + n2;
}

int sub(int n1, int n2){
    return n1 - n2;
}

int calc(int (*fp)(int, int), int n1, int n2){
    return (*fp)(n1, n2);
}

void main(){
    int n1 = 1, n2 = 3;
    printf("n1 + n2 = %d\n", calc(&add, n1, n2));
    printf("n1 - n2 = %d\n", calc(&sub, n1,n2));

printf("\n\n\n==========================\n\n\n\n");
    int num = 2;
    int (*fp)(int);
    fp = square;
    printf("area = %d\n", (*fp)(num));
    printf("area = %d\n", fp(num));
printf("------------------\n");
    printf("compute = %d\n", compute(fp, num));
}