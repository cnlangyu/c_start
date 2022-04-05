/**
 * @file 26-my-like-typedef-used.c
 * @author langyu95@foxmail.com
 * @brief 我喜欢的typedef用法
 * @version 0.1
 * @date 2022-04-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>

typedef int Integer;
typedef struct Date
{
    int year;
    int month;
    int day;
}Date, *P_Date;

void main(void){
    Date date = {
        2022,4,4
    };
    P_Date pd = &date;
    printf("now %d-%d-%d\n", pd->year, pd->month, pd->day);
    Integer _int = 1;
    printf("Integer = %d\n", _int);
}