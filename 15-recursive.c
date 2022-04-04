/**
 * @file 15-recursive.c
 * @author langyu95@foxmail.com
 * @brief 递归求阶乘
 * @version 0.1
 * @date 2022-04-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>

int factorial(int num){
    // if(num < 0){
    //     return NULL;
    // }
    if(num == 0){
        return 0;
    }
    if(num == 1){
        return num;
    }
    return num * factorial(num - 1);
}

void main(void){
    int num = 0;
    printf("input the num: ");
    scanf("%d", &num);
    printf("num %d factorial equal %d \n", num, factorial(num));

    int *p = &num;
    printf("p + 1 = %d\n", (*p) + 1);
    *p = 2 * (*p);
    printf("2p = %d\n", *p);

}

