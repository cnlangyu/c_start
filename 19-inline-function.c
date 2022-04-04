/**
 * @file 19-inline-function.c
 * @author langyu95@foxmail.com
 * @brief 内联函数
 * @version 0.1
 * @date 2022-04-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<stdio.h>

// gcc 19-inline-function.c -O
//内联函数省去了方法调用连续申请堆栈的浪费
inline int square(int x);

inline int square(int x){
    return x * x;
}

void main(void){
    for(int i = 1; i <= 40; i++)
    {
        printf("%d的平方是%d\n", i, square(i));
    }
}