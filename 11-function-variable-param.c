/**
 * @file 11-function-variable-param.c
 * @author langyu
 * @brief Can variable param function learn
 * @version 0.1
 * @date 2022-04-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdarg.h>



int sum(int n, ...){
    int sum = 0;
    va_list vap;
    va_start(vap, n);
    for(int i = 0; i < n; i++){
        sum += va_arg(vap, int);
    }
    va_end(vap);
    return sum;
}

void main(){
    int n1 = 1, n2 = 2, n3 = 3;
    printf("sum = %d\n", sum(3, n1,n2,n3));
}