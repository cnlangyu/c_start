/**
 * @file 12-function-pointer-function.c
 * @author langyu
 * @brief pointer function learn : is a return pointer variable
 * @version 0.1
 * @date 2022-04-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>


//return a pointer variable
char *getWord(char c){
    switch (c)
    {
    case 'A':
        return "Apple";
    case 'B':
        return "B";
    default:
        return "NON";
    }
}

//不要返回局部变量指针
// error
char *getWord1(char c){
    char s1[] = "Apple";
    char s2[] = "B";
    switch (c)
    {
    case 'A':
        return s1;
    case 'B':
        return s2;
    default:
        return "NON";
    }

}

void main(){
    char input;
    printf("input a char ");
    scanf("%c", &input);
    printf("%s\n", getWord(input));
    // printf("%s\n", getWord1(input));
}